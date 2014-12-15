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
    'weight' => '4',
    'children' => array(
      0 => 'field_wheel_base',
      1 => 'field_front_tread',
      2 => 'field_back_tread',
      3 => 'field_road_clearance',
      4 => 'field_maximum_trunk_s_volume',
      5 => 'field_minimum_trunk_s_volume',
      6 => 'field_number_of_doors',
      7 => 'field_number_of_seats',
      8 => 'field_body_type',
      9 => 'field_measurement',
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
    'weight' => '7',
    'children' => array(
      0 => 'field_front_brakes',
      1 => 'field_rear_brakes',
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
    'weight' => '14',
    'children' => array(
      0 => 'field_air_conditioning',
      1 => 'field_climate_control',
      2 => 'field_cruises_control',
      3 => 'field_hands_free',
      4 => 'field_parktronic',
      5 => 'field_rain_sensor',
      6 => 'field_power_steering',
      7 => 'field_adjusting_steering_disposi',
      8 => 'field_front_seats_heating',
      9 => 'field_driver_s_seat_electric_lin',
      10 => 'field_central_lock_with_remote_c',
      11 => 'field_winder_s_electric_linkage',
      12 => 'field_heating_winders_electric_l',
      13 => 'field_winders_s_folding_electric',
      14 => 'field_multifunctional_steering',
      15 => 'field_onboarder',
      16 => 'field_hmi_commander',
      17 => 'field_rear_view_camera',
      18 => 'field_start_stop_system',
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
    'weight' => '5',
    'children' => array(
      0 => 'field_displacement',
      1 => 'field_power',
      2 => 'field_power_by_revolutions',
      3 => 'field_timing_mechanism',
      4 => 'field_number_of_cylinders',
      5 => 'field_compession_ratio',
      6 => 'field_torque',
      7 => 'field_engine_type',
      8 => 'field_fuel_injection',
      9 => 'field_disposition_of_cylinders',
      10 => 'field_number_of_valves_per_cylin',
      11 => 'field_turbo',
      12 => 'field_diameter_of_cylinder',
      13 => 'field_piston_stroke',
      14 => 'field_engine_s_model',
      15 => 'field_engine_s_disposition',
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
    'weight' => '11',
    'children' => array(
      0 => 'field_toned_rear_windows',
      1 => 'field_bumper_in_the_color_of_bod',
      2 => 'field_winders_in_the_color_of_bo',
      3 => 'field_headlight_prayer_under_the',
      4 => 'field_hatch',
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
    'weight' => '12',
    'children' => array(
      0 => 'field_leather_salon',
      1 => 'field_rear_view_mirror_with_auto',
      2 => 'field_leather_adornment_of_steer',
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
    'weight' => '8',
    'children' => array(
      0 => 'field_maximum_speed',
      1 => 'field_acceleration_time',
      2 => 'field_curb_weight',
      3 => 'field_fuel_tank_volume',
      4 => 'field_tire_size',
      5 => 'field_ecological_standard',
      6 => 'field_fuel_consumption',
      7 => 'field_full_weight',
      8 => 'field_disc_size',
      9 => 'field_cruising_range',
      10 => 'field_full_charge',
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
    'weight' => '13',
    'children' => array(
      0 => 'field_abs',
      1 => 'field_eba',
      2 => 'field_ebd',
      3 => 'field_tcs',
      4 => 'field_dsc',
      5 => 'field_ess',
      6 => 'field_airbags',
      7 => 'field_tpms',
      8 => 'field_front_headlights',
      9 => 'field_turning_on_the_lights_auto',
      10 => 'field_bi_xenon',
      11 => 'field_afs',
      12 => 'field_rvm',
      13 => 'field_ldws',
      14 => 'field_hbc',
      15 => 'field_anti_theft_alarm_with_inva',
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
    'weight' => '10',
    'children' => array(
      0 => 'field_steering_gear_type',
      1 => 'field_diameter_of_u_turn',
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
    'weight' => '9',
    'children' => array(
      0 => 'field_front_suspension_type',
      1 => 'field_rear_suspension_type',
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
    'weight' => '6',
    'children' => array(
      0 => 'field_gear_box_type',
      1 => 'field_number_of_gears',
      2 => 'field_linkage',
      3 => 'field_ratio_of_main_pair',
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
