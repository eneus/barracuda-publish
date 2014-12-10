<?php
/**
 * @file
 * galauto_logbook_content_type_view.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function galauto_logbook_content_type_view_taxonomy_default_vocabularies() {
  return array(
    'auto_created_voc2_956' => array(
      'name' => 'Brands',
      'machine_name' => 'auto_created_voc2_956',
      'description' => 'Vocabulary created automatically by Taxonomy csv import/export module',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}