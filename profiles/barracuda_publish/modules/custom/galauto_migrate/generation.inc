<?php

class GenerationNodeMigration extends Migration
{
  /**
   *
   */
  public function __construct()
  {
    parent::__construct();
// Human-friendly description of your migration process. Be as detailed as you
// like.
    $this->description = t('Migrate car Generation from the source database to taxonomy terms');
    $this->dependencies = array('ModelTerm', 'ComplectationNode');
// Create a map object for tracking the relationships between source rows
// and their resulting Drupal objects. Usually, you'll use the MigrateSQLMap
// class, which uses database tables for tracking. Pass the machine name
// of this migration to use in generating map and message tables.
// And, pass schema definitions for the primary keys of the source and
// destination - we need to be explicit for our source, but the destination
// class knows its schema already.
    $source_key_schema = array(
      'id_car_serie' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      )
    );
    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, MigrateDestinationNode::getKeySchema());

// In this example, we're using tables that have been added to the existing
// Drupal database but which are not Drupal tables. You can examine the
// various tables using a
// database browser like phpMyAdmin.
// First, we set up a query for this data. Note that by ordering on
// style_parent, we guarantee root terms are migrated first, so the
// parent_name mapping below will find that the parent exists.

    /*SELECT car_serie.id_car_serie, car_serie.id_car_model, car_serie.name,
    car_generation.id_car_generation, car_generation.name, car_generation.year_begin, car_generation.year_end,
    car_model.name
    FROM car_serie JOIN car_generation JOIN car_model
    ON car_serie.id_car_generation = car_generation.id_car_generation AND car_serie.id_car_model = car_model.id_car_model*/
    $query = db_select('car_serie', 'serie')
      ->fields('serie', array('id_car_serie', 'name'))
      ->range(0, 75);
    //using join
    $query->join('car_generation', 'generation', 'serie.id_car_generation = generation.id_car_generation');
    $query->fields('generation', array('name', 'year_begin', 'year_end',));
    $query->join('car_model', 'model', 'model.id_car_model = serie.id_car_model');
    $query->fields('model', array('name'));

// Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

// Set up our destination - terms in the migrate_example_beer_styles vocabulary
    $this->destination = new MigrateDestinationNode('cars');

// Assign mappings TO destination fields FROM source fields. To discover
// the names used in these calls, use the drush commands
// drush migrate-fields-destination BeerTerm
// drush migrate-fields-source BeerTerm

    //$this->addFieldMapping('field_period', 'year_begin');
    //$this->addFieldMapping('field_period:to', 'year_end');
    $this->addFieldMapping('field_brand', 'model_name');


// It is good practice to account for all source and destination fields
// explicitly - this makes sure that everyone understands exactly what is
// being migrated and what is not. Also, migrate_ui highlights unmapped
// fields, or mappings involving fields not in the source and destination,
// so if (for example) a new field is added to the destination field it's
// immediately visible, and you can find out if anything needs to be
// migrated into it.
    $this->addFieldMapping('description')
      ->issueGroup(t('DNM'));
    $this->addUnmigratedDestinations(array('uid', 'created', 'changed', 'revision_uid', 'status', 'promote',
      'revision', 'sticky', 'log', 'language', 'tnid', 'is_new', 'translate', 'comment',
    ));
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
  /**
   * @param $russian_value
   * @param $vocabulary_name
   * @return mixed
   */
  public function get_englich_term_by_russian_value($russian_value, $vocabulary_name = NULL)
  {
    $russian_value = trim($russian_value);
    if ($vocabulary_name !== NULL) {
      $englich_value = db_select('english_russian_compliance', 'compliance')
        ->fields('compliance', array('english_value', 'russian_value'))
        ->condition('russian_value', $russian_value)
        ->condition('vacabulary_name', $vocabulary_name)
        ->execute()
        ->fetchCol();
    } else {
      $englich_value = db_select('english_russian_compliance', 'compliance')
        ->fields('compliance', array('english_value', 'russian_value'))
        ->condition('russian_value', $russian_value)
        ->execute()
        ->fetchCol();
    }
    if(empty($englich_value[0])){
      watchdog('migration', 'not exist englich value for russian value "' . $russian_value . '" in vocabulary "' . $vocabulary_name . '"');
    }

    return $englich_value[0];
  }
  /**
   * @param $value
   * @return mixed
   */
  public function get_nid_by_field_value($value)
  {
    $query = new EntityFieldQuery();
    $result = $query
      ->entityCondition('entity_type', 'node')
      ->entityCondition('bundle', 'complectation')
      ->fieldCondition('field_id_complectation', 'value', $value, '=')
      ->execute();

    if (isset($result['node'])) {
      $news_items_nids = array_keys($result['node']);
      return $news_items_nids[0];
    }

    return NULL;
  }
  /**
   * @param $entity
   * @param stdClass $row
   */
  public function complete($node, stdClass $row) {
    if(empty($node->nid)){
      $message = 'seria with id_car_serie=' . $row->id_car_serie . 'is unmigrated';
      watchdog('generation', $message);
    }
  }
  /**
   * @param $node
   * @param stdClass $row
   * @return bool
   */
  public function prepare($node, stdClass $row)
  {

    $car_modifications = db_select('car_modification', 'modification')
      ->fields('modification', array('id_car_modification',))
      ->condition('id_car_serie', $row->id_car_serie)
      ->execute()
      ->fetchCol();
    //filling complectation field
    foreach ($car_modifications as $modifacation) {
      $nid_modifacation = $this->get_nid_by_field_value($modifacation);
      if(!empty($nid_modifacation)) {
        $node->field_complectation[$node->language][]['target_id'] = $nid_modifacation;

       /* $message = 'gen_nid=' . $node->nid . ' mod=' . $modifacation . ' mod_nid=' . $this->get_nid_by_field_value($modifacation);
        watchdog('migration', $message);
       */
      }
    }
    //filling date field
    if($row->year_begin > 100) {
      $node->field_period[$node->language][0]['value'] = $row->year_begin . '-01-01 00:00:00';
    }
    if($row->year_end > 100) {
      $node->field_period[$node->language][0]['value2'] = $row->year_end . '-01-01 00:00:00';
    }
    //filling title field
    $serie_name = $this->get_englich_term_by_russian_value($row->name, 'cars_body_type');
    if(!empty($serie_name)) {
      $node->title = $row->generation_name . ' ' . $serie_name;
    }else{
      $node->title = $row->generation_name . ' ' . $row->name;
    }
    $node->title = str_replace('Рестайлинг', 'Restyling', $node->title);
    return TRUE;
  }
}
