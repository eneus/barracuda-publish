<?php
/**
 * @file
 * galauto_taxonomy.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function galauto_taxonomy_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 3,
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '01d2a359-3ece-4bf1-bf6e-7abc0bd39097',
    'vocabulary_machine_name' => 'number_of_valves_per_cylinder',
  );
  $terms[] = array(
    'name' => 1,
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '02b35e77-50fa-4c62-aebf-94a7fe9c5fdd',
    'vocabulary_machine_name' => 'number_of_valves_per_cylinder',
  );
  $terms[] = array(
    'name' => 5,
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '0b4b94a6-0d5f-4f2a-bc4f-dfa5e99a72c5',
    'vocabulary_machine_name' => 'number_of_valves_per_cylinder',
  );
  $terms[] = array(
    'name' => 'Cam and roller steering gear',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '0f9efab7-0bdc-4445-9d7d-94454ebe87c3',
    'vocabulary_machine_name' => 'steering_gear',
  );
  $terms[] = array(
    'name' => 'Rear-drive',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '124e958b-d281-4c51-85d5-75d6e9f4c09d',
    'vocabulary_machine_name' => 'linkage',
  );
  $terms[] = array(
    'name' => 'Torsion beam',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '16487aa0-39bf-44f3-b445-d23415d91d5e',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => 'Gas',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '18d18102-8568-415a-bd43-2669bb0a7d83',
    'vocabulary_machine_name' => 'engine_type',
  );
  $terms[] = array(
    'name' => 'Rotary',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '1cef530c-87af-408a-a286-8038a323ad64',
    'vocabulary_machine_name' => 'disposition_of_cylinders',
  );
  $terms[] = array(
    'name' => 'Front-drive',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '1dd458df-3714-4341-ade7-f4af1c729054',
    'vocabulary_machine_name' => 'linkage',
  );
  $terms[] = array(
    'name' => 'Station wagon',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 18,
    'uuid' => '20b3e4b8-82a3-4d64-8242-d8dc5be68530',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Notchback',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 12,
    'uuid' => '22beb334-be30-40d8-9009-f3d36c148d1d',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Continuous injection',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '29d5a025-1b9b-42d4-a449-b4611250c5e2',
    'vocabulary_machine_name' => 'fuel_injection',
  );
  $terms[] = array(
    'name' => 'Central port injection',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2c3f09b2-3e8c-4de4-86ae-4139a34e32bd',
    'vocabulary_machine_name' => 'fuel_injection',
  );
  $terms[] = array(
    'name' => 'Cam and peg steering gear',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '2d5316a8-b641-43bd-a0e6-0923d4a3e7c6',
    'vocabulary_machine_name' => 'steering_gear',
  );
  $terms[] = array(
    'name' => 'Euro VI',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '2eea6998-6ffb-4e19-a725-0a27fe9912e7',
    'vocabulary_machine_name' => 'ecological_standard',
  );
  $terms[] = array(
    'name' => 'Swing axle',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '35d08eb9-9d22-4d9a-a3f9-0ee3bd2b1bc3',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => 'Roadster',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 13,
    'uuid' => '36fc6282-217d-4a09-b2c1-799412dbbc70',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Rear dependent',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3c050b82-61f0-46e4-bf52-5ea89c9c9cfd',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => 'Boxer',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3f2e8b0a-dc61-44c3-b016-6e2bcdb5a8fa',
    'vocabulary_machine_name' => 'disposition_of_cylinders',
  );
  $terms[] = array(
    'name' => 'DSG (Direct shift gearbox)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '435df231-3a09-4786-8eac-bb74ac569d68',
    'vocabulary_machine_name' => 'gearbox_types',
  );
  $terms[] = array(
    'name' => 'Hydraulic brake',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '457c7fdf-dfde-471d-8c9b-b4c175e37118',
    'vocabulary_machine_name' => 'brake_system',
  );
  $terms[] = array(
    'name' => 'Euro I',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '4839de80-553f-4773-bbe7-01247482cc3b',
    'vocabulary_machine_name' => 'ecological_standard',
  );
  $terms[] = array(
    'name' => 'Worm and roller steering gear',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '4cface67-d9df-4c5b-94f4-abb40c9d108f',
    'vocabulary_machine_name' => 'steering_gear',
  );
  $terms[] = array(
    'name' => 'Robotized',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '4dd7a677-2eb6-45fc-805d-6531d41f3c4e',
    'vocabulary_machine_name' => 'gearbox_types',
  );
  $terms[] = array(
    'name' => 'De Dion',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '52700851-f0d5-4baf-9fa1-d67e0fc683ed',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => 7,
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '543189e1-afd9-4494-8f29-3679606478f4',
    'vocabulary_machine_name' => 'number_of_valves_per_cylinder',
  );
  $terms[] = array(
    'name' => 'Euro V',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '551d1b66-af33-40b6-ab9b-9b63dec1f3ff',
    'vocabulary_machine_name' => 'ecological_standard',
  );
  $terms[] = array(
    'name' => 'Combi coupé',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '5816991b-e5b3-4d1b-8a8c-372efebcbcd1',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Hardtop',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '5a028928-e7c2-4dbb-aac7-60994574f2d7',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => '8x8',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '5c489c98-9f0e-4b22-b924-dfd7b32bc504',
    'vocabulary_machine_name' => 'linkage',
  );
  $terms[] = array(
    'name' => 'V-Type',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '5d0e84b2-da19-4141-8287-2192ebbda3a7',
    'vocabulary_machine_name' => 'disposition_of_cylinders',
  );
  $terms[] = array(
    'name' => 'Diesel',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '5ee02179-59d5-4805-b973-130f8d316f23',
    'vocabulary_machine_name' => 'engine_type',
  );
  $terms[] = array(
    'name' => 'Hydropneumatic',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '620cfe35-8818-43bc-9bc5-a7c017a0aa8e',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => '4x4',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6439d064-963a-4e3d-871b-93b30f3007fb',
    'vocabulary_machine_name' => 'linkage',
  );
  $terms[] = array(
    'name' => 'Ethanol',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '65b03eb0-5102-4bae-aeb6-620efaca6a86',
    'vocabulary_machine_name' => 'engine_type',
  );
  $terms[] = array(
    'name' => 'Euro II',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '69d9582e-6e11-45d2-b750-847efe89af4c',
    'vocabulary_machine_name' => 'ecological_standard',
  );
  $terms[] = array(
    'name' => 'Equal length A-arm (double wishbone)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '6cdaf319-1d24-4319-849a-e5ccb5b76aba',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => 'Euro IV',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '6e7e8225-14f1-4279-b33a-2bf836280bb1',
    'vocabulary_machine_name' => 'ecological_standard',
  );
  $terms[] = array(
    'name' => 'Sport utility vehicle (SUV)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 16,
    'uuid' => '730682db-ea3e-4894-ba5d-618853662fc4',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Trailing link suspension',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '73cb2aba-f939-4dc7-a506-eeaafb6191e2',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => 'Crossover',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '76770486-6cf1-40cf-8138-757e045ecb94',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Electric',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '7ffc53d5-1476-42a1-8438-0f9e8d158966',
    'vocabulary_machine_name' => 'engine_type',
  );
  $terms[] = array(
    'name' => 'Coupé',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '82769a07-206d-4a40-839e-18f5cd70dee2',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Recirculating ball nut steering gear',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '83763774-ce0f-47ef-a245-937d88a4ac2d',
    'vocabulary_machine_name' => 'steering_gear',
  );
  $terms[] = array(
    'name' => 'A-76',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '85ca2f93-920e-46a8-a1fe-f65ab29d9e26',
    'vocabulary_machine_name' => 'engine_type',
    'parent' => array(
      0 => 'c69c7f23-13b8-452b-a97d-cf166ee8a05f',
    ),
  );
  $terms[] = array(
    'name' => 'Sedan',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 14,
    'uuid' => '860e97a4-f3fe-4d88-a73b-d77b84538b9f',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'TipTronic',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => '88f1a7ab-c6dd-4dea-b837-9000997de532',
    'vocabulary_machine_name' => 'gearbox_types',
  );
  $terms[] = array(
    'name' => 'Multilink',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '88f4d301-6653-4119-9f20-5ced9ce54d59',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => 'Direct injection',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '8e79ae24-baf8-466d-9e25-283d441ad0fa',
    'vocabulary_machine_name' => 'fuel_injection',
  );
  $terms[] = array(
    'name' => 2,
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '8f33843d-4654-4010-8669-40cafa3635f6',
    'vocabulary_machine_name' => 'number_of_valves_per_cylinder',
  );
  $terms[] = array(
    'name' => 'Hatchback',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '8f35c66f-891a-4f0b-8446-c101105a38e7',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Liftback',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 9,
    'uuid' => '8f6eb9ee-5b54-4559-bfff-1faef7b55c0f',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Minivan',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 11,
    'uuid' => '91118de9-6823-47c0-bbf8-7ce6eb95148c',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Automatic',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '922d5600-32cf-4f95-9f1e-5c6afbf0a6d9',
    'vocabulary_machine_name' => 'gearbox_types',
  );
  $terms[] = array(
    'name' => 'A-98',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => '96ebcd5d-5ed6-4d68-8f79-e12cbccde283',
    'vocabulary_machine_name' => 'engine_type',
    'parent' => array(
      0 => 'c69c7f23-13b8-452b-a97d-cf166ee8a05f',
    ),
  );
  $terms[] = array(
    'name' => 'MacPherson',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '977e5917-a318-498e-a7a9-d60f3fbea367',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => 'Disc brake',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '98133797-f8bc-4074-b861-a3506ab8ebf0',
    'vocabulary_machine_name' => 'brake_system',
  );
  $terms[] = array(
    'name' => 'W-Type',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '981d13d2-faa0-4c6a-a042-090ea9ce6597',
    'vocabulary_machine_name' => 'disposition_of_cylinders',
  );
  $terms[] = array(
    'name' => 8,
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => '990aff90-072d-4f96-bdbd-65a6b44d8c97',
    'vocabulary_machine_name' => 'number_of_valves_per_cylinder',
  );
  $terms[] = array(
    'name' => 6,
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => '9a3e4ab1-49e6-4432-92ba-99fb62cdcc6e',
    'vocabulary_machine_name' => 'number_of_valves_per_cylinder',
  );
  $terms[] = array(
    'name' => 'A-95',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => '9eeccc0f-fa68-4fe3-8596-8d5267084c67',
    'vocabulary_machine_name' => 'engine_type',
    'parent' => array(
      0 => 'c69c7f23-13b8-452b-a97d-cf166ee8a05f',
    ),
  );
  $terms[] = array(
    'name' => 'Town car',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 20,
    'uuid' => 'a47fb915-39cb-48c7-bc42-5b17d6897fdf',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Pickup',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 13,
    'uuid' => 'a4a592ef-bcc4-4bc1-a939-860f24e59016',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Multiport fuel injection',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'aab43955-c4f1-4756-8bbb-db386818a090',
    'vocabulary_machine_name' => 'fuel_injection',
  );
  $terms[] = array(
    'name' => 'Convertible (Cabriolet)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'ab6fe626-569d-4e85-99cd-e767879418a2',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'CVT (Continuous variable transmission)',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'ad7136de-0a83-472b-8c1c-032150ab581f',
    'vocabulary_machine_name' => 'gearbox_types',
  );
  $terms[] = array(
    'name' => 'Other',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 6,
    'uuid' => 'ade79d8a-84e1-40fd-ab1a-8ab050d44eec',
    'vocabulary_machine_name' => 'engine_type',
  );
  $terms[] = array(
    'name' => 'Cam and double lever steering gear',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b441fd54-41af-45a4-8ab0-3f47e95ea6e1',
    'vocabulary_machine_name' => 'steering_gear',
  );
  $terms[] = array(
    'name' => 'Touring car',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 19,
    'uuid' => 'b5cc4554-9920-4c13-b074-37f812161de9',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'A-80',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'ba002c3e-ed1a-4109-815b-2d4049219cbf',
    'vocabulary_machine_name' => 'engine_type',
    'parent' => array(
      0 => 'c69c7f23-13b8-452b-a97d-cf166ee8a05f',
    ),
  );
  $terms[] = array(
    'name' => 'Dependent on springs',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'ba052e6a-325b-46e6-be99-32e3066e6e8a',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => 'Hydrogen',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'bbf6fe07-9d18-45b9-87ea-f3871b88fcc9',
    'vocabulary_machine_name' => 'engine_type',
  );
  $terms[] = array(
    'name' => 'Semi automatic',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'bf2efd19-0c76-454d-9fd5-4f8c1bd60e4e',
    'vocabulary_machine_name' => 'gearbox_types',
  );
  $terms[] = array(
    'name' => 'Euro III',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'c27f6256-e1d5-4059-8256-49d506e77e04',
    'vocabulary_machine_name' => 'ecological_standard',
  );
  $terms[] = array(
    'name' => 'Banjo casing',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'c29f3f94-f355-4574-bbd2-708535e0ecd9',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => 'Petrol',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => 'c69c7f23-13b8-452b-a97d-cf166ee8a05f',
    'vocabulary_machine_name' => 'engine_type',
  );
  $terms[] = array(
    'name' => 'Pneumatic brake',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'c91beb55-0528-4038-a279-bb6423c0612b',
    'vocabulary_machine_name' => 'brake_system',
  );
  $terms[] = array(
    'name' => 'Solid beam axle',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'c9fe24e6-7b6e-49a2-a371-15fc8919f712',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => 'Rack and pinion steering gear',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'cdc403e7-dc30-4920-8674-e0f62e0a11e9',
    'vocabulary_machine_name' => 'steering_gear',
  );
  $terms[] = array(
    'name' => 'Limousine',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 10,
    'uuid' => 'cdd9f0cc-cfb3-4f3c-adfa-5b73ad054c02',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Drum brake',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'd1c58b4b-6245-43fd-972b-8639c93bfc28',
    'vocabulary_machine_name' => 'brake_system',
  );
  $terms[] = array(
    'name' => 'Diesel',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => 'd6a090d1-5689-43e5-a7d9-bde33d211f21',
    'vocabulary_machine_name' => 'disposition_of_cylinders',
  );
  $terms[] = array(
    'name' => 'Manual',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'd8ea66df-7e3a-412d-8f0d-0a32188e5511',
    'vocabulary_machine_name' => 'gearbox_types',
  );
  $terms[] = array(
    'name' => 'Unequal length double A-arm',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'ddfeeeba-6124-41bf-a995-cda583d0af02',
    'vocabulary_machine_name' => 'front_suspension',
  );
  $terms[] = array(
    'name' => 'Coupe Utility',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'de0e4306-bebb-4dd6-97a2-86876df1c0c8',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => '2+2',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'de769bbc-4845-4b51-8e8f-29251002653a',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'A-92',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'df8f4795-120c-4c1f-8e41-e8dfc4642264',
    'vocabulary_machine_name' => 'engine_type',
    'parent' => array(
      0 => 'c69c7f23-13b8-452b-a97d-cf166ee8a05f',
    ),
  );
  $terms[] = array(
    'name' => 'Stanhope body',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 17,
    'uuid' => 'e030ca00-c16d-4976-baae-b9219f2f7930',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Single-point injection',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'e278a87c-2545-45c4-969d-cd3bdd54b155',
    'vocabulary_machine_name' => 'fuel_injection',
  );
  $terms[] = array(
    'name' => 'Worm and sector steering gear',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 7,
    'uuid' => 'e2c800e9-ca1b-4e4b-ba54-aac67e603dda',
    'vocabulary_machine_name' => 'steering_gear',
  );
  $terms[] = array(
    'name' => 4,
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 3,
    'uuid' => 'e5cb9d78-15ac-4af7-9dcb-b6f85c47c63a',
    'vocabulary_machine_name' => 'number_of_valves_per_cylinder',
  );
  $terms[] = array(
    'name' => 'Inline',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => 'eeadf6a3-c63f-41e1-a1d2-e06691e65f08',
    'vocabulary_machine_name' => 'disposition_of_cylinders',
  );
  $terms[] = array(
    'name' => 'Sedan delivery',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 15,
    'uuid' => 'f8506887-18b5-4ff6-9db4-393dc8e405a2',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Hearse',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 8,
    'uuid' => 'f8ca9935-2af9-4567-820c-5b2e9ec39d73',
    'vocabulary_machine_name' => 'cars_body_type',
  );
  $terms[] = array(
    'name' => 'Worm and ball bearing nut steering gear',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 5,
    'uuid' => 'fa66616f-f136-4de7-9c1a-8918e7111973',
    'vocabulary_machine_name' => 'steering_gear',
  );
  $terms[] = array(
    'name' => 'Hybrid',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 4,
    'uuid' => 'fd96c735-59da-4784-b58a-eb66a8ce5fec',
    'vocabulary_machine_name' => 'engine_type',
  );
  return $terms;
}
