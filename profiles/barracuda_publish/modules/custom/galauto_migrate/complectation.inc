<?php

class ComplectationNodeMigration extends Migration
{
  /**
   *
   */
  public function __construct()
  {
    parent::__construct();
// Human-friendly description of your migration process. Be as detailed as you
// like.
    $this->description = t('Migrate car Complectation from the source database to taxonomy terms');

// Create a map object for tracking the relationships between source rows
// and their resulting Drupal objects. Usually, you'll use the MigrateSQLMap
// class, which uses database tables for tracking. Pass the machine name
// of this migration to use in generating map and message tables.
// And, pass schema definitions for the primary keys of the source and
// destination - we need to be explicit for our source, but the destination
// class knows its schema already.
    $source_key_schema = array(
      'id_car_modification' => array(
        'type' => 'int',
        'unsigned' => TRUE,
        'not null' => TRUE,
      )
    );
    $this->map = new MigrateSQLMap($this->machineName, $source_key_schema, MigrateDestinationNode::getKeySchema());

// In this example, we're using tables that have been added to the existing
// Drupal database but which are not Drupal tables. You can examine the
// various tables using a
// database browser like phpMyAdmin.
// First, we set up a query for this data. Note that by ordering on
// style_parent, we guarantee root terms are migrated first, so the
// parent_name mapping below will find that the parent exists.

    //SELECT model.id_car_model, mark.name, model.name FROM car_mark as mark JOIN car_model as model on mark.id_car_mark = model.id_car_mark
    $query = db_select('car_modification', 'modification')
      ->fields('modification', array('id_car_modification', 'name'))
      ->range(0, 150);

// Create a MigrateSource object, which manages retrieving the input data.
    $this->source = new MigrateSourceSQL($query);

// Set up our destination - terms in the migrate_example_beer_styles vocabulary
    $this->destination = new MigrateDestinationNode('complectation');

// Assign mappings TO destination fields FROM source fields. To discover
// the names used in these calls, use the drush commands
// drush migrate-fields-destination BeerTerm
// drush migrate-fields-source BeerTerm
    $this->addFieldMapping('field_id_complectation', 'id_car_modification');

// It is good practice to account for all source and destination fields
// explicitly - this makes sure that everyone understands exactly what is
// being migrated and what is not. Also, migrate_ui highlights unmapped
// fields, or mappings involving fields not in the source and destination,
// so if (for example) a new field is added to the destination field it's
// immediately visible, and you can find out if anything needs to be
// migrated into it.
    $this->addUnmigratedDestinations(array('uid', 'created', 'changed', 'revision_uid', 'status', 'promote',
      'revision', 'sticky', 'log', 'language', 'tnid', 'is_new', 'translate', 'comment',
    ));
    $this->addUnmigratedDestinations(array('field_acceleration_time', 'field_back_tread', 'field_compession_ratio', 'field_cruising_range', 'field_curb_weight', 'field_diameter_of_cylinder', 'field_diameter_of_u_turn',
      'field_disc_size', 'field_displacement', 'field_disposition_of_cylinders', 'field_ecological_standard', 'field_engine_s_disposition', 'field_engine_s_model', 'field_engine_type', 'field_front_brakes',
      'field_front_headlights', 'field_front_suspension_type', 'field_front_tread', 'field_fuel_consumption', 'field_fuel_injection', 'field_fuel_tank_volume', 'field_full_charge', 'field_full_weight', 'field_gear_box_type',
      'field_linkage', 'field_maximum_speed', 'field_maximum_trunk_s_volume', 'field_number_of_cylinders', 'field_number_of_gears', 'field_number_of_valves_per_cylin', 'field_petrol_type', 'field_piston_stroke',
      'field_power', 'field_body_type', 'field_number_of_doors', 'field_number_of_seats', 'field_measurement', 'field_rear_brakes', 'field_minimum_trunk_s_volume',
    ), 'Prepare Migrated');
    $this->addUnmigratedDestinations(array('field_abs', 'field_adjusting_steering_disposi', 'field_afs', 'field_air_conditioning', 'field_airbags', 'field_anti_theft_alarm_with_inva', 'field_bi_xenon',
      'field_bumper_in_the_color_of_bod', 'field_central_lock_with_remote_c', 'field_climate_control', 'field_cruises_control', 'field_driver_s_seat_electric_lin', 'field_dsc', 'field_eba', 'field_ebd',
      'field_ess', 'field_front_seats_heating', 'field_hands_free', 'field_hatch', 'field_hbc', 'field_headlight_prayer_under_the', 'field_heating_winders_electric_l', 'field_hmi_commander', 'field_ldws',
      'field_leather_adornment_of_steer', 'field_leather_salon', 'field_multifunctional_steering', 'field_onboarder', 'field_parktronic', 'field_price', 'field_rain_sensor',
    ), 'Base do not have these fields');
// We conditionally DNM these fields, so your field mappings will be clean
// whether or not you have path and or pathauto enabled
    if (module_exists('path')) {
      $this->addFieldMapping('path')
        ->issueGroup(t('DNM'));
      if (module_exists('pathauto')) {
        $this->addFieldMapping('pathauto')
          ->issueGroup(t('DNM'));
      }
    }
  }
  //SELECT * FROM car_characteristic_value JOIN car_characteristic ON car_characteristic_value.id_characteristic = car_characteristic.id_characteristic WHERE id_car_modification = 2878
  /**
   * Helper function to dynamically get the tid from the term_name
   *
   * @param $term_name Term name
   * @param $vocabulary_name Name of the vocabulary to search the term in
   *
   * @return Term id of the found term or else FALSE
   */
  public function _get_term_from_name($term_name, $vocabulary_name)
  {
    if ($vocabulary = taxonomy_vocabulary_machine_name_load($vocabulary_name)) {
      $tree = taxonomy_get_tree($vocabulary->vid);
      foreach ($tree as $term) {
        if ($term->name == $term_name) {
          return $term->tid;
        }
      }
    }
    return FALSE;
  }

  /**
   * @param $entity
   * @param stdClass $row
   */
  public function complete($node, stdClass $row) {
   if(empty($node->nid)){
     $message = 'modification with id_car_modification=' . $row->id_car_modification . 'is unmigrated';
     watchdog('complectation', $message);
   }
  }

  /**
   * @param $russian_value
   * @param $vocabulary_name
   * @return mixed
   */
  public function get_englich_term_by_russian_value($russian_value, $vocabulary_name = NULL)
  {
    if ($vocabulary_name !== NULL) {
      $englich_value = db_select('english_russian_compliance', 'compliance')
        ->fields('compliance', array('english_value', 'russian_value'))
        ->condition('russian_value', $russian_value)
        ->condition('vacabulary_name', $vocabulary_name)
        ->execute()
        ->fetchCol();
    } else {
      $englich_value = db_select('english_russian_compliance', 'compliance')
        ->fields('compliance', array('english_value', 'russian_value'))
        ->condition('russian_value', $russian_value)
        ->execute()
        ->fetchCol();
    }
    if(empty($englich_value[0])){
      watchdog('migration', 'not exist englich value for russian value "' . $russian_value . '" in vocabulary "' . $vocabulary_name . '"');
    }
    return $englich_value[0];
  }

  /**
   * @param $node
   * @param stdClass $row
   * @return bool
   */
  public function prepare($node, stdClass $row)
  {
    $car_characteristics = db_select('car_characteristic_value', 'characteristic_value')
      ->fields('characteristic_value', array('id_characteristic', 'value'))
      ->condition('id_car_modification', $row->id_car_modification)
      ->execute()
      ->fetchAllKeyed();
    //node field filling
    //filling title field
    if (!empty($row->name)) {
      $node->title = str_replace('л.с.', 'h.p.', $row->name);
    }
    //field_price isn't in source
    //Тип кузова
    if (!empty($car_characteristics['2'])) {
      $node->field_body_type[$node->language][0]['tid'] = $this->_get_term_from_name($this->get_englich_term_by_russian_value($car_characteristics['2'], 'cars_body_type'), 'cars_body_type');
    }
    //Количество мест
    if (!empty($car_characteristics['4'])) {
      $node->field_number_of_seats[$node->language][0]['value'] = (int) $car_characteristics['4'];
    }
    //Количество дверей
    if (!empty($car_characteristics['3'])) {
      $node->field_number_of_doors[$node->language][0]['value'] = (int) $car_characteristics['3'];
    }
    //Длина, Ширина, Высота
    if (!empty($car_characteristics['5'])) {
      $node->field_measurement[$node->language][]['value'] = (int) $car_characteristics['5'];
    }
    if (!empty($car_characteristics['6'])) {
      $node->field_measurement[$node->language][]['value'] = (int) $car_characteristics['6'];
    }
    if (!empty($car_characteristics['7'])) {
      $node->field_measurement[$node->language][]['value'] = (int) $car_characteristics['7'];
    }
    //Колесная база
    if (!empty($car_characteristics['8'])) {
      $node->field_wheel_base[$node->language][0]['value'] = (int) $car_characteristics['8'];
    }
    //Колея передняя
    if (!empty($car_characteristics['9'])) {
      $node->field_front_tread[$node->language][0]['value'] = (int) $car_characteristics['9'];
    }
    //Колея задняя
    if (!empty($car_characteristics['10'])) {
      $node->field_back_tread[$node->language][0]['value'] = (int) $car_characteristics['10'];
    }
    //Дорожный просвет
    if (!empty($car_characteristics['38'])) {
      $node->field_road_clearance[$node->language][0]['value'] = (int) $car_characteristics['38'];
    }
    //Объем багажника максимальный
    if (!empty($car_characteristics['44'])) {
      $node->field_maximum_trunk_s_volume[$node->language][0]['value'] = (int) $car_characteristics['44'];
    }
    //Объем багажника минимальный
    if (!empty($car_characteristics['45'])) {
      $node->field_minimum_trunk_s_volume[$node->language][0]['value'] = (int) $car_characteristics['45'];
    }
    //Тип двигателя
    if (!empty($car_characteristics['12'])) {
      $engine_type = $this->get_englich_term_by_russian_value($car_characteristics['12'], 'engine_type');

      if ($engine_type == 'Petrol') {
        //Топливо
        if (!empty($car_characteristics['22'])) {
          $tid_petrol_type = $this->_get_term_from_name($this->get_englich_term_by_russian_value($car_characteristics['22'], 'engine_type'), 'engine_type');
          if (!empty($tid_petrol_type)) {
            $node->field_engine_type[$node->language][0]['tid'] = $tid_petrol_type;
          }
        }
      } else {
        $node->field_engine_type[$node->language][0]['tid'] = $this->_get_term_from_name($engine_type, 'engine_type');
      }
    }
    //Расположение двигателя
    if (!empty($car_characteristics['61'])) {
      $node->field_engine_s_disposition[$node->language][0]['value'] = $this->get_englich_term_by_russian_value($car_characteristics['61'], 'engine_s_disposition');
    }
    //Объем двигателя
    if (!empty($car_characteristics['13'])) {
      $node->field_displacement[$node->language][0]['value'] = (int) $car_characteristics['13'];
    }
    //Мощность
    if (!empty($car_characteristics['14'])) {
      $node->field_power[$node->language][0]['value'] = (int) $car_characteristics['14'];
    }
    //При оборотах
    if (!empty($car_characteristics['15'])) {
      $node->field_power_by_revolutions[$node->language][0]['value'] = (int) $car_characteristics['15'];
    }
    //Система питания
    if (!empty($car_characteristics['17'])) {
      $node->field_fuel_injection[$node->language][0]['tid'] = $this->_get_term_from_name($this->get_englich_term_by_russian_value($car_characteristics['17'], 'fuel_injection'), 'fuel_injection');
    }
    //Крутящий момент
    if (!empty($car_characteristics['16'])) {
      $node->field_torque[$node->language][0]['value'] = $car_characteristics['16'];
    }
    //Расположение цилиндров
    if (!empty($car_characteristics['19'])) {
      $node->field_disposition_of_cylinders[$node->language][0]['tid'] = $this->_get_term_from_name($this->get_englich_term_by_russian_value($car_characteristics['19'], 'disposition_of_cylinders'), 'disposition_of_cylinders');
    }
    //Количество цилиндров
    if (!empty($car_characteristics['20'])) {
      $node->field_number_of_cylinders[$node->language][0]['value'] = (int) $car_characteristics['20'];
    }
    //Степень сжатия
    if (!empty($car_characteristics['21'])) {
      $node->field_compession_ratio[$node->language][0]['value'] = $car_characteristics['21'];
    }
    //Газораспределительный механизм
    if (!empty($car_characteristics['18'])) {
      $node->field_timing_mechanism[$node->language][0]['value'] = $car_characteristics['18'];
    }
    //Количество клапанов на цилиндр
    //this field is integer, needs no translation
    if (!empty($car_characteristics['39'])) {
      $node->field_number_of_valves_per_cylin[$node->language][0]['tid'] = $this->_get_term_from_name($car_characteristics['39'], 'number_of_valves_per_cylinder');
    }
    //Диаметр цилиндра
    if (!empty($car_characteristics['47'])) {
      $node->field_diameter_of_cylinder[$node->language][0]['value'] = (float) $car_characteristics['47'];
    }
    //Ход поршня
    if (!empty($car_characteristics['48'])) {
      $node->field_piston_stroke[$node->language][0]['value'] = (float) $car_characteristics['48'];
    }
    //Модель двигателя
    if (!empty($car_characteristics['55'])) {
      $node->field_engine_s_model[$node->language][0]['value'] = $car_characteristics['55'];
    }
    //Наличие турбонаддува(булеан)
    $turbo = (!empty($car_characteristics['46'])) ? 1 : 0;
    $node->field_turbo[$node->language][0]['value'] = $turbo;
    //Тип КПП
    if (!empty($car_characteristics['24'])) {
      $field_gear_box_type = $this->get_englich_term_by_russian_value($car_characteristics['24']);
      $node->field_gear_box_type[$node->language][0]['tid'] = $this->_get_term_from_name($field_gear_box_type, 'gearbox_types');

      if ($field_gear_box_type == 'Manual') {
        //Кол-во передач (мех коробка)
        if (!empty($car_characteristics['26'])) {
          $node->field_number_of_gears[$node->language][0]['value'] = (int) $car_characteristics['26'];
        }
      } elseif ($field_gear_box_type == 'Automatic' OR $field_gear_box_type == 'Robotized') {
        //Кол-во передач (автомат коробка)
        if (!empty($car_characteristics['43'])) {
          $node->field_number_of_gears[$node->language][0]['value'] = (int) $car_characteristics['43'];
        }
      }
    }
    //Привод
    if (!empty($car_characteristics['27'])) {
      $node->field_linkage[$node->language][0]['tid'] = $this->_get_term_from_name($this->get_englich_term_by_russian_value($car_characteristics['27'], 'linkage'), 'linkage');
    }
    //Передаточное отношение главной пары
    if (!empty($car_characteristics['49'])) {
      $node->field_ratio_of_main_pair[$node->language][0]['value'] = (float) $car_characteristics['49'];
    }
    //Передние тормоза
    if (!empty($car_characteristics['29'])) {
      $node->field_front_brakes[$node->language][0]['tid'] = $this->_get_term_from_name($this->get_englich_term_by_russian_value($car_characteristics['29'], 'brake_system'), 'brake_system');
    }
    //Задние тормоза
    if (!empty($car_characteristics['30'])) {
      $node->field_rear_brakes[$node->language][0]['tid'] = $this->_get_term_from_name($this->get_englich_term_by_russian_value($car_characteristics['30'], 'brake_system'), 'brake_system');
    }
    //Максимальная скорость
    if (!empty($car_characteristics['32'])) {
      $node->field_maximum_speed[$node->language][0]['value'] = (int) $car_characteristics['32'];
    }
    //Время разгона (0-100 км/ч)
    if (!empty($car_characteristics['33'])) {
      $node->field_acceleration_time[$node->language][0]['value'] = (float) $car_characteristics['33'];
    }
    //Снаряженная масса автомобиля
    if (!empty($car_characteristics['34'])) {
      $node->field_curb_weight[$node->language][0]['value'] = (int) $car_characteristics['34'];
    }
    //Объем топливного бака
    if (!empty($car_characteristics['35'])) {
      $node->field_fuel_tank_volume[$node->language][0]['value'] = (int) $car_characteristics['35'];
    }
    //Размер шин
    if (!empty($car_characteristics['36'])) {
      $node->field_tire_size[$node->language][0]['value'] = (int) $car_characteristics['36'];
    }
    //Экологический стандарт
    if (!empty($car_characteristics['37'])) {
      $node->field_ecological_standard[$node->language][0]['tid'] = $this->_get_term_from_name($this->get_englich_term_by_russian_value($car_characteristics['37'], 'ecological_standard'), 'ecological_standard');
    }
    //Расход топлива на шоссе на 100 км
    if (!empty($car_characteristics['51'])) {
      $node->field_fuel_consumption[$node->language][]['value'] = (float) $car_characteristics['51'];
    }
    //Расход топлива в смешанном цикле на 100 км
    if (!empty($car_characteristics['52'])) {
      $node->field_fuel_consumption[$node->language][]['value'] = (float) $car_characteristics['52'];
    }
    //Расход топлива в городе на 100 км
    if (!empty($car_characteristics['50'])) {
      $node->field_fuel_consumption[$node->language][]['value'] = (float) $car_characteristics['50'];
    }
    //Допустимая полная масса
    if (!empty($car_characteristics['58'])) {
      $node->field_full_weight[$node->language][0]['value'] = (int) $car_characteristics['58'];
    }
    //Размер дисков
    if (!empty($car_characteristics['59'])) {
      $node->field_disc_size[$node->language][0]['value'] = $car_characteristics['59'];
    }
    //Запас хода
    if (!empty($car_characteristics['62'])) {
      $node->field_cruising_range[$node->language][0]['value'] = (float) $car_characteristics['62'];
    }
    //Полная зарядка
    if (!empty($car_characteristics['63'])) {
      $node->field_full_charge[$node->language][0]['value'] = (int) $car_characteristics['63'];
    }
    //Тип передней подвески
    if (!empty($car_characteristics['41'])) {
      $node->field_front_suspension_type[$node->language][0]['tid'] = $this->_get_term_from_name($this->get_englich_term_by_russian_value($car_characteristics['41'], 'front_suspension'), 'front_suspension');
    }
    //Тип задней подвески
   if (!empty($car_characteristics['42'])) {
      $node->field_rear_suspension_type[$node->language][0]['tid'] = $this->_get_term_from_name($this->get_englich_term_by_russian_value($car_characteristics['42'], 'front_suspension'), 'front_suspension');
    }
    //Тип рулевого управления
    if (!empty($car_characteristics['54'])) {
      $node->field_steering_gear_type[$node->language][0]['tid'] = $this->_get_term_from_name($this->get_englich_term_by_russian_value($car_characteristics['54'], 'steering_gear'), 'steering_gear');
    }
    //Диаметр разворота
    if (!empty($car_characteristics['57'])) {
      $node->field_diameter_of_u_turn[$node->language][0]['value'] = (float) $car_characteristics['57'];
    }

    return TRUE;
  }
}
