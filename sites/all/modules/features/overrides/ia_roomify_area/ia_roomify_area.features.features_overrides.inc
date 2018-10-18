<?php
/**
 * @file
 * ia_roomify_area.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ia_roomify_area_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.areas.display|all_areas_view|display_options|filters|field_tourist_destination_area_value"] = array(
    'id' => 'field_tourist_destination_area_value',
    'table' => 'field_data_field_tourist_destination_area',
    'field' => 'field_tourist_destination_area_value',
    'value' => array(
      1 => 1,
    ),
  );
  $overrides["views_view.areas_travel.display|default|display_options|filters|field_tourist_destination_area_value"] = array(
    'id' => 'field_tourist_destination_area_value',
    'table' => 'field_data_field_tourist_destination_area',
    'field' => 'field_tourist_destination_area_value',
    'value' => array(
      1 => 1,
    ),
  );

 return $overrides;
}
