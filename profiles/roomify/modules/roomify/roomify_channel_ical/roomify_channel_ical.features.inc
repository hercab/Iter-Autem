<?php

/**
 * @file
 * roomify_channel_ical.features.inc
 */

/**
 * Implements hook_default_bat_booking_type().
 */
function roomify_channel_ical_default_bat_booking_type() {
  $items = array();
  $items['ical'] = entity_import('bat_booking_type', '{
    "type" : "ical",
    "label" : "iCal",
    "default_booking_label_field_name" : null,
    "data" : "",
    "rdf_mapping" : []
  }');
  return $items;
}
