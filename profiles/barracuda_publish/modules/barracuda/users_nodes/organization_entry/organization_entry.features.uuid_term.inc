<?php
/**
 * @file
 * organization_entry.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function organization_entry_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'Сar sales',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '65da5367-0359-423e-b273-434954791fb5',
    'vocabulary_machine_name' => 'occupation_of_organisations',
  );
  $terms[] = array(
    'name' => 'Сar repairs',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'a826732a-7e8b-48f9-b944-3b8fcb5d198f',
    'vocabulary_machine_name' => 'occupation_of_organisations',
  );
  $terms[] = array(
    'name' => 'Сar rentals',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'd414b55d-ece4-402f-8ae7-b3af14b4a3ef',
    'vocabulary_machine_name' => 'occupation_of_organisations',
  );
  $terms[] = array(
    'name' => 'Сar wash',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'f0259d67-b74e-4410-aed2-443df3d6df88',
    'vocabulary_machine_name' => 'occupation_of_organisations',
  );
  return $terms;
}
