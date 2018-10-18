<?php

/**
 * @file
 * roomify_channel_connector.features.inc
 */

/**
 * Implements hook_default_bat_booking_type().
 */
function roomify_channel_connector_default_bat_booking_type() {
  $items = array();
  $items['booking_com'] = entity_import('bat_booking_type', '{
    "type" : "booking_com",
    "label" : "Booking.com",
    "default_booking_label_field_name" : null,
    "data" : "",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function roomify_channel_connector_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function roomify_channel_connector_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
