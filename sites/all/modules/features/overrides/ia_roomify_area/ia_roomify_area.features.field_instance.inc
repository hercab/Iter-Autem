<?php
/**
 * @file
 * ia_roomify_area.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ia_roomify_area_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-location-field_tourist_destination_area'.
  $field_instances['taxonomy_term-location-field_tourist_destination_area'] = array(
    'bundle' => 'location',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Mark this Area as a Tourist Destination',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_tourist_destination_area',
    'label' => 'Tourist Destination',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Mark this Area as a Tourist Destination');
  t('Tourist Destination');

  return $field_instances;
}
