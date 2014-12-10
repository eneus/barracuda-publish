<?php
/**
 * @file
 * galauto_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function galauto_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'brake_system' => array(
      'name' => 'Brake system',
      'machine_name' => 'brake_system',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'cars_body_type' => array(
      'name' => 'Cars Body type',
      'machine_name' => 'cars_body_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'disposition_of_cylinders' => array(
      'name' => 'Disposition of cylinders',
      'machine_name' => 'disposition_of_cylinders',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'ecological_standard' => array(
      'name' => 'Ecological standard',
      'machine_name' => 'ecological_standard',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'engine_type' => array(
      'name' => 'Engine type',
      'machine_name' => 'engine_type',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'front_suspension' => array(
      'name' => 'Front suspension',
      'machine_name' => 'front_suspension',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'fuel_injection' => array(
      'name' => 'Fuel injection',
      'machine_name' => 'fuel_injection',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'gearbox_types' => array(
      'name' => 'Gearbox types',
      'machine_name' => 'gearbox_types',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'linkage' => array(
      'name' => 'Linkage',
      'machine_name' => 'linkage',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'number_of_valves_per_cylinder' => array(
      'name' => 'Number of valves per cylinder',
      'machine_name' => 'number_of_valves_per_cylinder',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'steering_gear' => array(
      'name' => 'Steering gear',
      'machine_name' => 'steering_gear',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
