<?php
/**
 * @file
 * galauto_complectation_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function galauto_complectation_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function galauto_complectation_content_type_node_info() {
  $items = array(
    'complectation' => array(
      'name' => t('Complectation'),
      'base' => 'node_content',
      'description' => t('Complectation content type'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}