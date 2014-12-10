<?php
/**
 * @file
 * galauto_cars_comparison_view.features.inc
 */

/**
 * Implements hook_views_api().
 */
function galauto_cars_comparison_view_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function galauto_cars_comparison_view_flag_default_flags() {
  $flags = array();
  // Exported flag: "Cars Comparison".
  $flags['cars_comparison'] = array(
    'content_type' => 'node',
    'title' => 'Cars Comparison',
    'global' => 0,
    'types' => array(
      0 => 'complectation',
    ),
    'flag_short' => 'Compare',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'Exclude from comparison',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
        1 => 3,
      ),
      'unflag' => array(
        0 => 2,
        1 => 3,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'galauto_cars_comparison_view',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}
