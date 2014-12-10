<?php
/**
 * @file
 * galauto_cars_comparison_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function galauto_cars_comparison_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'compare_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Compare List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Compare List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_air_conditioning' => 'field_air_conditioning',
    'field_automat_gearbox' => 'field_automat_gearbox',
    'field_cars_weight' => 'field_cars_weight',
    'field_climate_control' => 'field_climate_control',
    'field_cruises_control' => 'field_cruises_control',
    'field_disperse_hundreds' => 'field_disperse_hundreds',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_air_conditioning' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_automat_gearbox' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cars_weight' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_climate_control' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cruises_control' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_disperse_hundreds' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 1;
  /* Relationship: Flags: cars_comparison */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'cars_comparison';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_complectation_node']['id'] = 'reverse_field_complectation_node';
  $handler->display->display_options['relationships']['reverse_field_complectation_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_complectation_node']['field'] = 'reverse_field_complectation_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Air-conditioner */
  $handler->display->display_options['fields']['field_air_conditioning']['id'] = 'field_air_conditioning';
  $handler->display->display_options['fields']['field_air_conditioning']['table'] = 'field_data_field_air_conditioning';
  $handler->display->display_options['fields']['field_air_conditioning']['field'] = 'field_air_conditioning';
  $handler->display->display_options['fields']['field_air_conditioning']['label'] = 'Air conditioning';
  $handler->display->display_options['fields']['field_air_conditioning']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_automat_gearbox']['id'] = 'field_automat_gearbox';
  $handler->display->display_options['fields']['field_automat_gearbox']['table'] = 'field_data_field_automat_gearbox';
  $handler->display->display_options['fields']['field_automat_gearbox']['field'] = 'field_automat_gearbox';
  $handler->display->display_options['fields']['field_automat_gearbox']['label'] = 'Automat gearbox';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_cars_weight']['id'] = 'field_cars_weight';
  $handler->display->display_options['fields']['field_cars_weight']['table'] = 'field_data_field_cars_weight';
  $handler->display->display_options['fields']['field_cars_weight']['field'] = 'field_cars_weight';
  $handler->display->display_options['fields']['field_cars_weight']['label'] = 'Cars weight';
  /* Field: Content: Climate control */
  $handler->display->display_options['fields']['field_climate_control']['id'] = 'field_climate_control';
  $handler->display->display_options['fields']['field_climate_control']['table'] = 'field_data_field_climate_control';
  $handler->display->display_options['fields']['field_climate_control']['field'] = 'field_climate_control';
  $handler->display->display_options['fields']['field_climate_control']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Cruise control */
  $handler->display->display_options['fields']['field_cruises_control']['id'] = 'field_cruises_control';
  $handler->display->display_options['fields']['field_cruises_control']['table'] = 'field_data_field_cruises_control';
  $handler->display->display_options['fields']['field_cruises_control']['field'] = 'field_cruises_control';
  $handler->display->display_options['fields']['field_cruises_control']['label'] = 'Cruises control';
  $handler->display->display_options['fields']['field_cruises_control']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_disperse_hundreds']['id'] = 'field_disperse_hundreds';
  $handler->display->display_options['fields']['field_disperse_hundreds']['table'] = 'field_data_field_disperse_hundreds';
  $handler->display->display_options['fields']['field_disperse_hundreds']['field'] = 'field_disperse_hundreds';
  $handler->display->display_options['fields']['field_disperse_hundreds']['label'] = 'Disperse hundreds';
  /* Field: Content: Image cars */
  $handler->display->display_options['fields']['field_image_cars']['id'] = 'field_image_cars';
  $handler->display->display_options['fields']['field_image_cars']['table'] = 'field_data_field_image_cars';
  $handler->display->display_options['fields']['field_image_cars']['field'] = 'field_image_cars';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'complectation' => 'complectation',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops']['label'] = '';
  $handler->display->display_options['fields']['ops']['element_label_colon'] = FALSE;
  /* Field: Content: Image cars */
  $handler->display->display_options['fields']['field_image_cars']['id'] = 'field_image_cars';
  $handler->display->display_options['fields']['field_image_cars']['table'] = 'field_data_field_image_cars';
  $handler->display->display_options['fields']['field_image_cars']['field'] = 'field_image_cars';
  $handler->display->display_options['fields']['field_image_cars']['relationship'] = 'reverse_field_complectation_node';
  $handler->display->display_options['fields']['field_image_cars']['label'] = '';
  $handler->display->display_options['fields']['field_image_cars']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image_cars']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image_cars']['type'] = 'image_delta';
  $handler->display->display_options['fields']['field_image_cars']['settings'] = array(
    'deltas' => '0',
    'deltas_reversed' => 0,
    'image_style' => 'thumbnail',
    'image_link' => 'content',
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_image_cars']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Power */
  $handler->display->display_options['fields']['field_power']['id'] = 'field_power';
  $handler->display->display_options['fields']['field_power']['table'] = 'field_data_field_power';
  $handler->display->display_options['fields']['field_power']['field'] = 'field_power';
  $handler->display->display_options['fields']['field_power']['type'] = 'text_default';
  $handler->display->display_options['fields']['field_power']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_automat_gearbox']['id'] = 'field_automat_gearbox';
  $handler->display->display_options['fields']['field_automat_gearbox']['table'] = 'field_data_field_automat_gearbox';
  $handler->display->display_options['fields']['field_automat_gearbox']['field'] = 'field_automat_gearbox';
  $handler->display->display_options['fields']['field_automat_gearbox']['label'] = 'Automat gearbox';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_disperse_hundreds']['id'] = 'field_disperse_hundreds';
  $handler->display->display_options['fields']['field_disperse_hundreds']['table'] = 'field_data_field_disperse_hundreds';
  $handler->display->display_options['fields']['field_disperse_hundreds']['field'] = 'field_disperse_hundreds';
  $handler->display->display_options['fields']['field_disperse_hundreds']['label'] = 'Disperse hundreds';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_max_speed']['id'] = 'field_max_speed';
  $handler->display->display_options['fields']['field_max_speed']['table'] = 'field_data_field_max_speed';
  $handler->display->display_options['fields']['field_max_speed']['field'] = 'field_max_speed';
  $handler->display->display_options['fields']['field_max_speed']['label'] = 'Max Speed';
  /* Field: Content: Fuel consumption */
  $handler->display->display_options['fields']['field_fuel_consumption']['id'] = 'field_fuel_consumption';
  $handler->display->display_options['fields']['field_fuel_consumption']['table'] = 'field_data_field_fuel_consumption';
  $handler->display->display_options['fields']['field_fuel_consumption']['field'] = 'field_fuel_consumption';
  $handler->display->display_options['fields']['field_fuel_consumption']['click_sort_column'] = 'composed';
  $handler->display->display_options['fields']['field_fuel_consumption']['type'] = 'composed_field_unformatted_list';
  $handler->display->display_options['fields']['field_fuel_consumption']['settings'] = array(
    'number_of_subfields' => '',
    'style' => 'inline',
    'display_options' => array(
      'hidden' => '',
      'format' => '',
      'prefix' => '',
      'suffix' => '',
    ),
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  $handler->display->display_options['fields']['field_fuel_consumption']['group_column'] = 'composed';
  $handler->display->display_options['fields']['field_fuel_consumption']['delta_limit'] = 'all';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_cars_weight']['id'] = 'field_cars_weight';
  $handler->display->display_options['fields']['field_cars_weight']['table'] = 'field_data_field_cars_weight';
  $handler->display->display_options['fields']['field_cars_weight']['field'] = 'field_cars_weight';
  $handler->display->display_options['fields']['field_cars_weight']['label'] = 'Cars weight';
  /* Field: Content: Air-conditioner */
  $handler->display->display_options['fields']['field_air_conditioning']['id'] = 'field_air_conditioning';
  $handler->display->display_options['fields']['field_air_conditioning']['table'] = 'field_data_field_air_conditioning';
  $handler->display->display_options['fields']['field_air_conditioning']['field'] = 'field_air_conditioning';
  $handler->display->display_options['fields']['field_air_conditioning']['label'] = 'Air conditioning';
  $handler->display->display_options['fields']['field_air_conditioning']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Climate control */
  $handler->display->display_options['fields']['field_climate_control']['id'] = 'field_climate_control';
  $handler->display->display_options['fields']['field_climate_control']['table'] = 'field_data_field_climate_control';
  $handler->display->display_options['fields']['field_climate_control']['field'] = 'field_climate_control';
  $handler->display->display_options['fields']['field_climate_control']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Cruise control */
  $handler->display->display_options['fields']['field_cruises_control']['id'] = 'field_cruises_control';
  $handler->display->display_options['fields']['field_cruises_control']['table'] = 'field_data_field_cruises_control';
  $handler->display->display_options['fields']['field_cruises_control']['field'] = 'field_cruises_control';
  $handler->display->display_options['fields']['field_cruises_control']['label'] = 'Cruises control';
  $handler->display->display_options['fields']['field_cruises_control']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Hands free */
  $handler->display->display_options['fields']['field_hands_free']['id'] = 'field_hands_free';
  $handler->display->display_options['fields']['field_hands_free']['table'] = 'field_data_field_hands_free';
  $handler->display->display_options['fields']['field_hands_free']['field'] = 'field_hands_free';
  $handler->display->display_options['fields']['field_hands_free']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Leather passenger compartment */
  $handler->display->display_options['fields']['field_leather_salon']['id'] = 'field_leather_salon';
  $handler->display->display_options['fields']['field_leather_salon']['table'] = 'field_data_field_leather_salon';
  $handler->display->display_options['fields']['field_leather_salon']['field'] = 'field_leather_salon';
  $handler->display->display_options['fields']['field_leather_salon']['label'] = 'Leather salon';
  $handler->display->display_options['fields']['field_leather_salon']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Parking sensors */
  $handler->display->display_options['fields']['field_parktronic']['id'] = 'field_parktronic';
  $handler->display->display_options['fields']['field_parktronic']['table'] = 'field_data_field_parktronic';
  $handler->display->display_options['fields']['field_parktronic']['field'] = 'field_parktronic';
  $handler->display->display_options['fields']['field_parktronic']['label'] = 'Parktronic';
  $handler->display->display_options['fields']['field_parktronic']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Content: Rain sensor */
  $handler->display->display_options['fields']['field_rain_sensor']['id'] = 'field_rain_sensor';
  $handler->display->display_options['fields']['field_rain_sensor']['table'] = 'field_data_field_rain_sensor';
  $handler->display->display_options['fields']['field_rain_sensor']['field'] = 'field_rain_sensor';
  $handler->display->display_options['fields']['field_rain_sensor']['settings'] = array(
    'custom_link_to_entity' => 0,
    'custom_prefix' => '',
    'custom_suffix' => '',
    'custom_reverse' => 0,
    'custom_trim' => 0,
    'custom_strtolower' => 0,
    'custom_strtoupper' => 0,
    'custom_ucfirst' => 0,
    'custom_ucwords' => 0,
    'custom_strip_tags' => 0,
    'custom_strip_preserve' => '',
  );
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops_1']['id'] = 'ops_1';
  $handler->display->display_options['fields']['ops_1']['table'] = 'flag_content';
  $handler->display->display_options['fields']['ops_1']['field'] = 'ops';
  $handler->display->display_options['fields']['ops_1']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['ops_1']['label'] = '';
  $handler->display->display_options['fields']['ops_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'compare-list';
  $translatables['compare_list'] = array(
    t('Master'),
    t('Compare List'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('flag'),
    t('Content referencing Content from field_complectation'),
    t('Air conditioning'),
    t('Automat gearbox'),
    t('Cars weight'),
    t('Climate control'),
    t('Cruises control'),
    t('Disperse hundreds'),
    t('Image cars'),
    t('Page'),
    t('Price'),
    t('Power'),
    t('Max Speed'),
    t('Fuel consumption'),
    t('Hands free'),
    t('Leather salon'),
    t('Parktronic'),
    t('Rain sensor'),
  );
  $export['compare_list'] = $view;

  return $export;
}
