<?php
/**
 * @file
 * ia_amenities.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ia_amenities_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_filter_amenities'.
  $field_bases['field_filter_amenities'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_filter_amenities',
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
        1 => '',
      ),
      'allowed_values_function' => '',
      'entity_translation_sync' => FALSE,
      'profile2_private' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'list_boolean',
  );

  return $field_bases;
}
