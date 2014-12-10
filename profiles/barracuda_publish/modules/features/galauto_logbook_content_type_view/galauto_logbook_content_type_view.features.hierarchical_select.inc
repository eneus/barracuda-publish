<?php
/**
 * @file
 * galauto_logbook_content_type_view.features.hierarchical_select.inc
 */

/**
 * Implements hook_hierarchical_select_default_configs().
 */
function galauto_logbook_content_type_view_hierarchical_select_default_configs() {
$configs = array();
$config = array(
  'config_id'       => 'taxonomy-auto_created_voc2_956',
  'save_lineage'    => 1,
  'enforce_deepest' => 0,
  'entity_count'    => 0,
  'require_entity'  => 0,
  'resizable'       => 1,
  'level_labels' => array(
    'status' => 0,
    'labels' => array(
      0 => '',
      1 => '',
      2 => '',
    ),
  ),
  'dropbox' => array(
    'status'    => 0,
    'title'     => 'All selections',
    'limit'     => 0,
    'reset_hs'  => 1,
  ),
  'editability' => array(
    'status' => 0,
    'item_types' => array(
      0 => '',
      1 => '',
      2 => '',
    ),
    'allowed_levels' => array(
      0 => 1,
      1 => 1,
      2 => 1,
    ),
    'allow_new_levels' => 0,
    'max_levels'       => 2,
  ),
);

$configs['taxonomy-auto_created_voc2_956'] = $config;
return $configs;
}
