<?php
/**
 * @file
 * iterautem_publicity_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function iterautem_publicity_content_type_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_information|node|publicidad|form';
  $field_group->group_name = 'group_basic_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publicity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Gallery',
    'weight' => '6',
    'children' => array(
      0 => 'field_sp_gallery',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Gallery',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-basic-information field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_basic_information|node|publicidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contacts|node|publicidad|form';
  $field_group->group_name = 'group_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publicity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '9',
    'children' => array(
      0 => 'field_social_links',
      1 => 'field_telephone',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contacts field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_contacts|node|publicidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_description|node|publicidad|form';
  $field_group->group_name = 'group_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publicity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Information',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_bussiness_type',
      2 => 'field_review_rating',
      3 => 'field_sp_featured_image',
      4 => 'field_sp_short_description',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Basic Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-description field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_description|node|publicidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_highlight|node|publicidad|form';
  $field_group->group_name = 'group_highlight';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publicity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Highlight',
    'weight' => '10',
    'children' => array(
      0 => 'field_sp_highlight_image1',
      1 => 'field_sp_highlight_image1_cap',
      2 => 'field_sp_highlight_image2',
      3 => 'field_sp_highlight_image2_cap',
      4 => 'field_sp_highlight_image3',
      5 => 'field_sp_highlight_image3_cap',
      6 => 'field_sp_highlight_intro',
      7 => 'field_sp_highlight_title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-highlight field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_highlight|node|publicidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_owner|node|publicidad|form';
  $field_group->group_name = 'group_owner';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publicity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Ownership',
    'weight' => '7',
    'children' => array(
      0 => 'field_sp_owner',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Ownership',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-owner field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_owner|node|publicidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_policies|node|publicidad|form';
  $field_group->group_name = 'group_policies';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publicity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Policies',
    'weight' => '12',
    'children' => array(
      0 => 'field_sp_policies',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-policies field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_policies|node|publicidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_publicity_location|node|publicidad|form';
  $field_group->group_name = 'group_publicity_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publicity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '8',
    'children' => array(
      0 => 'field_sp_address',
      1 => 'field_sp_area',
      2 => 'field_sp_area_type',
      3 => 'field_sp_how_to_reach',
      4 => 'field_sp_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-publicity-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_publicity_location|node|publicidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_services|node|publicidad|form';
  $field_group->group_name = 'group_services';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publicity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Services',
    'weight' => '5',
    'children' => array(
      0 => 'field_services',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-services field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_services|node|publicidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_work_hours|node|publicidad|form';
  $field_group->group_name = 'group_work_hours';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'publicity';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Work Hours',
    'weight' => '11',
    'children' => array(
      0 => 'field_full_time_work',
      1 => 'field_work_hours',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-work-hours field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_work_hours|node|publicidad|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Basic Information');
  t('Contacts');
  t('Gallery');
  t('Highlight');
  t('Location');
  t('Ownership');
  t('Policies');
  t('Services');
  t('Work Hours');

  return $field_groups;
}
