<?php
/**
 * @file
 * galauto_logbook_content_type_view.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function galauto_logbook_content_type_view_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-logbook-body'
  $field_instances['node-logbook-body'] = array(
    'bundle' => 'logbook',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-logbook-field_brend_tax'
  $field_instances['node-logbook-field_brend_tax'] = array(
    'bundle' => 'logbook',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_links',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'hs_taxonomy_term_reference_hierarchical_links',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_brend_tax',
    'label' => 'Brand',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'hs_taxonomy',
      'settings' => array(),
      'type' => 'taxonomy_hs',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Brand');

  return $field_instances;
}
