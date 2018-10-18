<?php

/**
 * @file
 * roomify_channel_connector.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function roomify_channel_connector_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bcom_info|bat_booking|booking_com|form';
  $field_group->group_name = 'group_bcom_info';
  $field_group->entity_type = 'bat_booking';
  $field_group->bundle = 'booking_com';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Booking.com info',
    'weight' => '3',
    'children' => array(
      0 => 'group_reservation_extra_info',
      1 => 'group_customer_info',
      2 => 'group_reservation_info',
      3 => 'group_room_info',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-bcom-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_bcom_info|bat_booking|booking_com|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_customer_info|bat_booking|booking_com|form';
  $field_group->group_name = 'group_customer_info';
  $field_group->entity_type = 'bat_booking';
  $field_group->bundle = 'booking_com';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bcom_info';
  $field_group->data = array(
    'label' => 'Customer Info',
    'weight' => '5',
    'children' => array(
      0 => 'field_bcom_address',
      1 => 'field_bcom_cc_cvc',
      2 => 'field_bcom_cc_expiration_date',
      3 => 'field_bcom_cc_name',
      4 => 'field_bcom_cc_number',
      5 => 'field_bcom_cc_type',
      6 => 'field_bcom_city',
      7 => 'field_bcom_company',
      8 => 'field_bcom_countrycode',
      9 => 'field_bcom_dc_issue_numebr',
      10 => 'field_bcom_dc_start_date',
      11 => 'field_bcom_email',
      12 => 'field_bcom_first_name',
      13 => 'field_bcom_last_name',
      14 => 'field_bcom_remarks',
      15 => 'field_bcom_telephone',
      16 => 'field_bcom_zip',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-customer-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_customer_info|bat_booking|booking_com|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reservation_extra_info|bat_booking|booking_com|form';
  $field_group->group_name = 'group_reservation_extra_info';
  $field_group->entity_type = 'bat_booking';
  $field_group->bundle = 'booking_com';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bcom_info';
  $field_group->data = array(
    'label' => 'Reservation Extra Info',
    'weight' => '7',
    'children' => array(
      0 => 'field_bcom_reserv_extra_info',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reservation-extra-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_reservation_extra_info|bat_booking|booking_com|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reservation_info|bat_booking|booking_com|form';
  $field_group->group_name = 'group_reservation_info';
  $field_group->entity_type = 'bat_booking';
  $field_group->bundle = 'booking_com';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bcom_info';
  $field_group->data = array(
    'label' => 'Reservation Info',
    'weight' => '4',
    'children' => array(
      0 => 'field_bcom_commission_amount',
      1 => 'field_bcom_currency_code',
      2 => 'field_bcom_reservation_date',
      3 => 'field_bcom_hotel_id',
      4 => 'field_bcom_hotel_name',
      5 => 'field_bcom_reservation_id',
      6 => 'field_bcom_status',
      7 => 'field_bcom_reservation_time',
      8 => 'field_bcom_total_price',
      9 => 'field_bcom_cancellation_fee',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reservation-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_reservation_info|bat_booking|booking_com|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_room_info|bat_booking|booking_com|form';
  $field_group->group_name = 'group_room_info';
  $field_group->entity_type = 'bat_booking';
  $field_group->bundle = 'booking_com';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_bcom_info';
  $field_group->data = array(
    'label' => 'Room Info',
    'weight' => '6',
    'children' => array(
      0 => 'field_bcom_price_data_per_date',
      1 => 'field_bcom_arrival_date',
      2 => 'field_bcom_room_commission',
      3 => 'field_bcom_room_currency_code',
      4 => 'field_bcom_departure_date',
      5 => 'field_bcom_extra_info',
      6 => 'field_bcom_facilities',
      7 => 'field_bcom_guest_name',
      8 => 'field_bcom_room_id',
      9 => 'field_bcom_room_info',
      10 => 'field_bcom_max_children',
      11 => 'field_bcom_meal_plan',
      12 => 'field_bcom_room_type_name',
      13 => 'field_bcom_number_of_guests',
      14 => 'field_bcom_room_remarks',
      15 => 'field_bcom_room_reservation_id',
      16 => 'field_bcom_smoking',
      17 => 'field_bcom_room_total_price',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-room-info field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_room_info|bat_booking|booking_com|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Booking.com info');
  t('Customer Info');
  t('Reservation Extra Info');
  t('Reservation Info');
  t('Room Info');

  return $field_groups;
}
