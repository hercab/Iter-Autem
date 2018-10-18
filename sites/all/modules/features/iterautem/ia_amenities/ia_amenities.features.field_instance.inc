<?php
/**
 * @file
 * ia_amenities.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ia_amenities_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-amenities-field_filter_amenities'.
  $field_instances['taxonomy_term-amenities-field_filter_amenities'] = array(
    'bundle' => 'amenities',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Mark this amenity term for show in facet filter',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_filter_amenities',
    'label' => 'Show as Filter',
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
  t('Mark this amenity term for show in facet filter');
  t('Show as Filter');

  return $field_instances;
}
