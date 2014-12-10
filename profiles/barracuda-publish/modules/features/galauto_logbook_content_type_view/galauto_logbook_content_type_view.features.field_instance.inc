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

  // Exported field_instance: 'comment-comment_node_logbook-comment_body'
  $field_instances['comment-comment_node_logbook-comment_body'] = array(
    'bundle' => 'comment_node_logbook',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'comment_body',
    'label' => 'Comment',
    'required' => TRUE,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 0,
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
  t('Brand');
  t('Comment');

  return $field_instances;
}
