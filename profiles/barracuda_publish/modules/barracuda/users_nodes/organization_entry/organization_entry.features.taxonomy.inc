<?php
/**
 * @file
 * organization_entry.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function organization_entry_taxonomy_default_vocabularies() {
  return array(
    'occupation_of_organisations' => array(
      'name' => 'Occupation of organisations',
      'machine_name' => 'occupation_of_organisations',
      'description' => 'Occupation of organisations multy select list',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
