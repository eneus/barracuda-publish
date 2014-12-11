<?php
/**
 * @file
 * organization_entry.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function organization_entry_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_information|node|organization|form';
  $field_group->group_name = 'group_contact_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'organization';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Сontact information',
    'weight' => '3',
    'children' => array(
      0 => 'field_organization_address',
      1 => 'field_organization_phones',
      2 => 'field_organization_email',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-information field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact_information|node|organization|form'] = $field_group;

  return $export;
}
