<?php
/**
 * Implements hook_migrate_api().
 */
function galauto_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'migrations' => array(
      'BrandTerm' => array('class_name' => 'BrandTermMigration'),
      'ModelTerm' => array('class_name' => 'ModelTermMigration'),
      'ComplectationNode' => array('class_name' => 'ComplectationNodeMigration'),
      'GenerationNode' => array('class_name' => 'GenerationNodeMigration'),
    ),
  );
  return $api;
}
