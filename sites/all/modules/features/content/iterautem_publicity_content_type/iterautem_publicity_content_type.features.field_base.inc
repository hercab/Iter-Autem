<?php
/**
 * @file
 * iterautem_publicity_content_type.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function iterautem_publicity_content_type_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_bussiness_type'.
  $field_bases['field_bussiness_type'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bussiness_type',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'business_type',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
      'options_list_callback' => 'i18n_taxonomy_allowed_values',
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_full_time_work'.
  $field_bases['field_full_time_work'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_full_time_work',
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        0 => '',
        1 => '24 hours / 7 days',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  // Exported field_base: 'field_services'.
  $field_bases['field_services'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_services',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 1,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_social_links'.
  $field_bases['field_social_links'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_social_links',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'socialfield',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'social_links_field',
  );

  // Exported field_base: 'field_telephone'.
  $field_bases['field_telephone'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_telephone',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'telephone',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'telephone',
  );

  // Exported field_base: 'field_work_hours'.
  $field_bases['field_work_hours'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_work_hours',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'office_hours',
    'settings' => array(
      'cardinality' => 2,
      'comment' => 1,
      'date_first_day' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => 30,
      'hoursformat' => 1,
      'limitend' => '',
      'limitstart' => '',
      'profile2_private' => FALSE,
      'valhrs' => 1,
    ),
    'translatable' => 0,
    'type' => 'office_hours',
  );

  return $field_bases;
}
