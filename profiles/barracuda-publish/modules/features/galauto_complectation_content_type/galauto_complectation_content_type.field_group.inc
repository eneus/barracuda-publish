<?php
/**
 * @file
 * galauto_complectation_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function galauto_complectation_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_body|node|complectation|form';
  $field_group->group_name = 'group_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'complectation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Body',
    'weight' => '10',
    'children' => array(
      0 => 'field__measurement',
      1 => 'field_back_tread',
      2 => 'field_front_tread',
      3 => 'field_maximum_trunk_s_volume',
      4 => 'field_minimum_trunk_s_volume',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Body',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-body field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_body|node|complectation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_brake_system|node|complectation|form';
  $field_group->group_name = 'group_brake_system';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'complectation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Brake system',
    'weight' => '13',
    'children' => array(
      0 => 'field_front_brakes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-brake-system field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_brake_system|node|complectation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comfort|node|complectation|form';
  $field_group->group_name = 'group_comfort';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'complectation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Comfort',
    'weight' => '137',
    'children' => array(
      0 => 'field_adjusting_steering_disposi',
      1 => 'field_air_conditioning',
      2 => 'field_central_lock_with_remote_c',
      3 => 'field_climate_control',
      4 => 'field_cruises_control',
      5 => 'field_driver_s_seat_electric_lin',
      6 => 'field_front_seats_heating',
      7 => 'field_hands_free',
      8 => 'field_heating_winders_electric_l',
      9 => 'field_hmi_commander',
      10 => 'field_multifunctional_steering',
      11 => 'field_onboarder',
      12 => 'field_parktronic',
      13 => 'field_rain_sensor',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-comfort field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_comfort|node|complectation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_engine|node|complectation|form';
  $field_group->group_name = 'group_engine';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'complectation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Engine',
    'weight' => '11',
    'children' => array(
      0 => 'field_compession_ratio',
      1 => 'field_diameter_of_cylinder',
      2 => 'field_displacement',
      3 => 'field_disposition_of_cylinders',
      4 => 'field_engine_s_disposition',
      5 => 'field_engine_s_model',
      6 => 'field_engine_type',
      7 => 'field_fuel_injection',
      8 => 'field_number_of_cylinders',
      9 => 'field_number_of_valves_per_cylin',
      10 => 'field_petrol_type',
      11 => 'field_piston_stroke',
      12 => 'field_power',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-engine field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_engine|node|complectation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_exterior|node|complectation|form';
  $field_group->group_name = 'group_exterior';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'complectation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Exterior',
    'weight' => '129',
    'children' => array(
      0 => 'field_bumper_in_the_color_of_bod',
      1 => 'field_hatch',
      2 => 'field_headlight_prayer_under_the',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-exterior field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_exterior|node|complectation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_interior|node|complectation|form';
  $field_group->group_name = 'group_interior';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'complectation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Interior',
    'weight' => '134',
    'children' => array(
      0 => 'field_leather_adornment_of_steer',
      1 => 'field_leather_salon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-interior field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_interior|node|complectation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_performance|node|complectation|form';
  $field_group->group_name = 'group_performance';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'complectation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Performance',
    'weight' => '14',
    'children' => array(
      0 => 'field_acceleration_time',
      1 => 'field_cruising_range',
      2 => 'field_curb_weight',
      3 => 'field_disc_size',
      4 => 'field_ecological_standard',
      5 => 'field_fuel_consumption',
      6 => 'field_fuel_tank_volume',
      7 => 'field_full_charge',
      8 => 'field_full_weight',
      9 => 'field_maximum_speed',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-performance field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_performance|node|complectation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_safety|node|complectation|form';
  $field_group->group_name = 'group_safety';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'complectation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Safety',
    'weight' => '137',
    'children' => array(
      0 => 'field_abs',
      1 => 'field_afs',
      2 => 'field_airbags',
      3 => 'field_anti_theft_alarm_with_inva',
      4 => 'field_bi_xenon',
      5 => 'field_dsc',
      6 => 'field_eba',
      7 => 'field_ebd',
      8 => 'field_ess',
      9 => 'field_front_headlights',
      10 => 'field_hbc',
      11 => 'field_ldws',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-safety field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_safety|node|complectation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_steering_gear|node|complectation|form';
  $field_group->group_name = 'group_steering_gear';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'complectation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Steering gear',
    'weight' => '16',
    'children' => array(
      0 => 'field_diameter_of_u_turn',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-steering-gear field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_steering_gear|node|complectation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_suspension|node|complectation|form';
  $field_group->group_name = 'group_suspension';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'complectation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Suspension',
    'weight' => '15',
    'children' => array(
      0 => 'field_front_suspension_type',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-suspension field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_suspension|node|complectation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_transmission|node|complectation|form';
  $field_group->group_name = 'group_transmission';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'complectation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Transmission',
    'weight' => '12',
    'children' => array(
      0 => 'field_gear_box_type',
      1 => 'field_linkage',
      2 => 'field_number_of_gears',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-transmission field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_transmission|node|complectation|form'] = $field_group;

  return $export;
}
