<?php
/**
 * @file
 * ia_roomify_area.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function ia_roomify_area_views_default_views_alter(&$data) {
  if (isset($data['areas'])) {
    $data['areas']->display['all_areas_view']->display_options['filters']['field_tourist_destination_area_value'] = array(
      'id' => 'field_tourist_destination_area_value',
      'table' => 'field_data_field_tourist_destination_area',
      'field' => 'field_tourist_destination_area_value',
      'value' => array(
        1 => 1,
      ),
    ); /* WAS: '' */
  }
  if (isset($data['areas_travel'])) {
    $data['areas_travel']->display['default']->display_options['filters']['field_tourist_destination_area_value'] = array(
      'id' => 'field_tourist_destination_area_value',
      'table' => 'field_data_field_tourist_destination_area',
      'field' => 'field_tourist_destination_area_value',
      'value' => array(
        1 => 1,
      ),
    ); /* WAS: '' */
  }
}
