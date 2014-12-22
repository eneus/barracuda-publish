<?php

class BrandTermMigration extends Migration {
  public function __construct() {
    parent::__construct();

    // Human-friendly description of your migration process. Be as detailed as you
    // like.
    $this->description = t('Migrate car brands from the source database to taxonomy terms');

    // Create a map object for tracking the relationships between source rows
    // and their resulting Drupal objects. Usually, you'll use the MigrateSQLMap
    // class, which uses database tables for tracking. Pass the machine name
    // (BeerTerm) of this migration to use in generating map and message tables.
    // And, pass schema definitions for the primary keys of the source and
    // destination - we need to be explicit for our source, but the destination
    // class knows its schema already.
    $source_key_schema = array(
      'id_car_mark' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      )
    );
    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, MigrateDestinationTerm::getKeySchema());

    // In this example, we're using tables that have been added to the existing
    // Drupal database but which are not Drupal tables. You can examine the
    // various tables (starting here with migrate_example_beer_topic) using a
    // database browser like phpMyAdmin.
    // First, we set up a query for this data. Note that by ordering on
    // style_parent, we guarantee root terms are migrated first, so the
    // parent_name mapping below will find that the parent exists.

    $query = db_select('car_mark', 'mark')
    ->fields('mark', array('id_car_mark', 'name'))
    // This sort assures that parents are saved before children.
    ->orderBy('name', 'ASC');

    // Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

    // Set up our destination - terms in the migrate_example_beer_styles vocabulary
    $this->destination = new MigrateDestinationTerm('brands');

    // Assign mappings TO destination fields FROM source fields. To discover
    // the names used in these calls, use the drush commands
    // drush migrate-fields-destination BeerTerm
    // drush migrate-fields-source BeerTerm
    $this->addFieldMapping('name', 'name')
    ->description(t('The incoming name(source) field is the name of the term parent'));
   
    // It is good practice to account for all source and destination fields
    // explicitly - this makes sure that everyone understands exactly what is
    // being migrated and what is not. Also, migrate_ui highlights unmapped
    // fields, or mappings involving fields not in the source and destination,
    // so if (for example) a new field is added to the destination field it's
    // immediately visible, and you can find out if anything needs to be
    // migrated into it.
    $this->addFieldMapping('format')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('weight')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('parent')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('parent_name')
         ->issueGroup(t('DNM'));
    $this->addFieldMapping('description')
         ->issueGroup(t('DNM'));

    // We conditionally DNM these fields, so your field mappings will be clean
    // whether or not you have path and or pathauto enabled
    if (module_exists('path')) {
      $this->addFieldMapping('path')
           ->issueGroup(t('DNM'));
      if (module_exists('pathauto')) {
        $this->addFieldMapping('pathauto')
             ->issueGroup(t('DNM'));
      }
    }
  }
}

/*
CREATE TABLE `car_mark_model` (
          id_car_model INT NOT NULL AUTO_INCREMENT PRIMARY KEY,
          name_car_mark VARCHAR(100),
          name_car_model VARCHAR(100),
        )
//this query use for filling new table `car_mark_model`.
INSERT INTO car_mark_model (SELECT model.id_car_model, mark.name, model.name FROM car_mark as mark JOIN car_model as model on mark.id_car_mark = model.id_car_mark)
*/