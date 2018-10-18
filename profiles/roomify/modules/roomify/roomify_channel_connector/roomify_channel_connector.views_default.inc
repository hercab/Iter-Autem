<?php

/**
 * @file
 * roomify_channel_connector.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function roomify_channel_connector_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'booking_com_bookings';
  $view->description = 'Shows bookings from Booking.com';
  $view->tag = 'default';
  $view->base_table = 'bat_bookings';
  $view->human_name = 'Booking.com Bookings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Booking.com Bookings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'booking_id' => 'booking_id',
    'field_bcom_hotel_id' => 'field_bcom_hotel_id',
    'field_bcom_hotel_name' => 'field_bcom_hotel_id',
    'field_bcom_room_id' => 'field_bcom_room_id',
    'field_bcom_room_type_name' => 'field_bcom_room_id',
    'field_bcom_reservation_id' => 'field_bcom_reservation_id',
    'field_bcom_room_reservation_id' => 'field_bcom_room_reservation_id',
    'field_bcom_arrival_date' => 'field_bcom_arrival_date',
    'field_bcom_departure_date' => 'field_bcom_departure_date',
    'field_bcom_status' => 'field_bcom_room_reservation_id',
    'field_bcom_room_total_price' => 'field_bcom_room_total_price',
    'field_bcom_total_price' => 'field_bcom_total_price',
    'field_bcom_commission_amount' => 'field_bcom_commission_amount',
    'field_bcom_first_name' => 'field_bcom_first_name',
    'field_bcom_last_name' => 'field_bcom_first_name',
    'field_bcom_guest_name' => 'field_bcom_address',
    'field_bcom_address' => 'field_bcom_address',
    'field_bcom_city' => 'field_bcom_address',
    'field_bcom_countrycode' => 'field_bcom_address',
    'field_bcom_company' => 'field_bcom_company',
    'field_bcom_cc_cvc' => 'field_bcom_cc_cvc',
    'field_bcom_cc_expiration_date' => 'field_bcom_cc_cvc',
    'field_bcom_cc_name' => 'field_bcom_cc_cvc',
    'field_bcom_cc_number' => 'field_bcom_cc_cvc',
    'field_bcom_cc_type' => 'field_bcom_cc_cvc',
    'field_bcom_currency_code' => 'field_bcom_commission_amount',
    'field_bcom_email' => 'field_bcom_email',
    'field_bcom_extra_info' => 'field_bcom_extra_info',
    'field_bcom_facilities' => 'field_bcom_facilities',
    'field_bcom_max_children' => 'field_bcom_max_children',
    'field_bcom_meal_plan' => 'field_bcom_meal_plan',
    'field_bcom_number_of_guests' => 'field_bcom_number_of_guests',
    'field_bcom_remarks' => 'field_bcom_remarks',
    'field_bcom_reservation_time' => 'field_bcom_reservation_time',
    'field_bcom_room_info' => 'field_bcom_room_info',
    'field_bcom_room_remarks' => 'field_bcom_room_remarks',
    'field_bcom_smoking' => 'field_bcom_smoking',
    'field_bcom_telephone' => 'field_bcom_address',
    'field_bcom_zip' => 'field_bcom_address',
    'edit_unit' => 'booking_id',
    'delete_unit' => 'booking_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'booking_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'field_bcom_hotel_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'field_bcom_hotel_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_room_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'field_bcom_room_type_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_reservation_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'field_bcom_room_reservation_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'field_bcom_arrival_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_departure_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_room_total_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_total_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_commission_amount' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'field_bcom_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_guest_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_address' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'field_bcom_city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_countrycode' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_company' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_cc_cvc' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' - ',
      'empty_column' => 0,
    ),
    'field_bcom_cc_expiration_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_cc_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_cc_number' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_cc_type' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_currency_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_extra_info' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_facilities' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_max_children' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_meal_plan' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_number_of_guests' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_remarks' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_reservation_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_room_info' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_room_remarks' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_smoking' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_telephone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bcom_zip' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_unit' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_unit' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: BAT Booking: Bat booking ID */
  $handler->display->display_options['fields']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['fields']['booking_id']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['booking_id']['field'] = 'booking_id';
  /* Field: BAT Booking: Hotel Id */
  $handler->display->display_options['fields']['field_bcom_hotel_id']['id'] = 'field_bcom_hotel_id';
  $handler->display->display_options['fields']['field_bcom_hotel_id']['table'] = 'field_data_field_bcom_hotel_id';
  $handler->display->display_options['fields']['field_bcom_hotel_id']['field'] = 'field_bcom_hotel_id';
  $handler->display->display_options['fields']['field_bcom_hotel_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Hotel Name */
  $handler->display->display_options['fields']['field_bcom_hotel_name']['id'] = 'field_bcom_hotel_name';
  $handler->display->display_options['fields']['field_bcom_hotel_name']['table'] = 'field_data_field_bcom_hotel_name';
  $handler->display->display_options['fields']['field_bcom_hotel_name']['field'] = 'field_bcom_hotel_name';
  $handler->display->display_options['fields']['field_bcom_hotel_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Booking.com Room ID */
  $handler->display->display_options['fields']['field_bcom_room_id']['id'] = 'field_bcom_room_id';
  $handler->display->display_options['fields']['field_bcom_room_id']['table'] = 'field_data_field_bcom_room_id';
  $handler->display->display_options['fields']['field_bcom_room_id']['field'] = 'field_bcom_room_id';
  $handler->display->display_options['fields']['field_bcom_room_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Room Type Name */
  $handler->display->display_options['fields']['field_bcom_room_type_name']['id'] = 'field_bcom_room_type_name';
  $handler->display->display_options['fields']['field_bcom_room_type_name']['table'] = 'field_data_field_bcom_room_type_name';
  $handler->display->display_options['fields']['field_bcom_room_type_name']['field'] = 'field_bcom_room_type_name';
  $handler->display->display_options['fields']['field_bcom_room_type_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Reservation ID */
  $handler->display->display_options['fields']['field_bcom_reservation_id']['id'] = 'field_bcom_reservation_id';
  $handler->display->display_options['fields']['field_bcom_reservation_id']['table'] = 'field_data_field_bcom_reservation_id';
  $handler->display->display_options['fields']['field_bcom_reservation_id']['field'] = 'field_bcom_reservation_id';
  $handler->display->display_options['fields']['field_bcom_reservation_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Room Reservation ID */
  $handler->display->display_options['fields']['field_bcom_room_reservation_id']['id'] = 'field_bcom_room_reservation_id';
  $handler->display->display_options['fields']['field_bcom_room_reservation_id']['table'] = 'field_data_field_bcom_room_reservation_id';
  $handler->display->display_options['fields']['field_bcom_room_reservation_id']['field'] = 'field_bcom_room_reservation_id';
  $handler->display->display_options['fields']['field_bcom_room_reservation_id']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Arrival Date */
  $handler->display->display_options['fields']['field_bcom_arrival_date']['id'] = 'field_bcom_arrival_date';
  $handler->display->display_options['fields']['field_bcom_arrival_date']['table'] = 'field_data_field_bcom_arrival_date';
  $handler->display->display_options['fields']['field_bcom_arrival_date']['field'] = 'field_bcom_arrival_date';
  $handler->display->display_options['fields']['field_bcom_arrival_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Departure Date */
  $handler->display->display_options['fields']['field_bcom_departure_date']['id'] = 'field_bcom_departure_date';
  $handler->display->display_options['fields']['field_bcom_departure_date']['table'] = 'field_data_field_bcom_departure_date';
  $handler->display->display_options['fields']['field_bcom_departure_date']['field'] = 'field_bcom_departure_date';
  $handler->display->display_options['fields']['field_bcom_departure_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Reservation Status */
  $handler->display->display_options['fields']['field_bcom_status']['id'] = 'field_bcom_status';
  $handler->display->display_options['fields']['field_bcom_status']['table'] = 'field_data_field_bcom_status';
  $handler->display->display_options['fields']['field_bcom_status']['field'] = 'field_bcom_status';
  $handler->display->display_options['fields']['field_bcom_status']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Room Total Price */
  $handler->display->display_options['fields']['field_bcom_room_total_price']['id'] = 'field_bcom_room_total_price';
  $handler->display->display_options['fields']['field_bcom_room_total_price']['table'] = 'field_data_field_bcom_room_total_price';
  $handler->display->display_options['fields']['field_bcom_room_total_price']['field'] = 'field_bcom_room_total_price';
  $handler->display->display_options['fields']['field_bcom_room_total_price']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Total Price */
  $handler->display->display_options['fields']['field_bcom_total_price']['id'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['table'] = 'field_data_field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['field'] = 'field_bcom_total_price';
  $handler->display->display_options['fields']['field_bcom_total_price']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Commission Amount */
  $handler->display->display_options['fields']['field_bcom_commission_amount']['id'] = 'field_bcom_commission_amount';
  $handler->display->display_options['fields']['field_bcom_commission_amount']['table'] = 'field_data_field_bcom_commission_amount';
  $handler->display->display_options['fields']['field_bcom_commission_amount']['field'] = 'field_bcom_commission_amount';
  $handler->display->display_options['fields']['field_bcom_commission_amount']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: First Name */
  $handler->display->display_options['fields']['field_bcom_first_name']['id'] = 'field_bcom_first_name';
  $handler->display->display_options['fields']['field_bcom_first_name']['table'] = 'field_data_field_bcom_first_name';
  $handler->display->display_options['fields']['field_bcom_first_name']['field'] = 'field_bcom_first_name';
  $handler->display->display_options['fields']['field_bcom_first_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Last Name */
  $handler->display->display_options['fields']['field_bcom_last_name']['id'] = 'field_bcom_last_name';
  $handler->display->display_options['fields']['field_bcom_last_name']['table'] = 'field_data_field_bcom_last_name';
  $handler->display->display_options['fields']['field_bcom_last_name']['field'] = 'field_bcom_last_name';
  $handler->display->display_options['fields']['field_bcom_last_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Guest Name */
  $handler->display->display_options['fields']['field_bcom_guest_name']['id'] = 'field_bcom_guest_name';
  $handler->display->display_options['fields']['field_bcom_guest_name']['table'] = 'field_data_field_bcom_guest_name';
  $handler->display->display_options['fields']['field_bcom_guest_name']['field'] = 'field_bcom_guest_name';
  $handler->display->display_options['fields']['field_bcom_guest_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Address */
  $handler->display->display_options['fields']['field_bcom_address']['id'] = 'field_bcom_address';
  $handler->display->display_options['fields']['field_bcom_address']['table'] = 'field_data_field_bcom_address';
  $handler->display->display_options['fields']['field_bcom_address']['field'] = 'field_bcom_address';
  $handler->display->display_options['fields']['field_bcom_address']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: City */
  $handler->display->display_options['fields']['field_bcom_city']['id'] = 'field_bcom_city';
  $handler->display->display_options['fields']['field_bcom_city']['table'] = 'field_data_field_bcom_city';
  $handler->display->display_options['fields']['field_bcom_city']['field'] = 'field_bcom_city';
  $handler->display->display_options['fields']['field_bcom_city']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Countrycode */
  $handler->display->display_options['fields']['field_bcom_countrycode']['id'] = 'field_bcom_countrycode';
  $handler->display->display_options['fields']['field_bcom_countrycode']['table'] = 'field_data_field_bcom_countrycode';
  $handler->display->display_options['fields']['field_bcom_countrycode']['field'] = 'field_bcom_countrycode';
  $handler->display->display_options['fields']['field_bcom_countrycode']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Company */
  $handler->display->display_options['fields']['field_bcom_company']['id'] = 'field_bcom_company';
  $handler->display->display_options['fields']['field_bcom_company']['table'] = 'field_data_field_bcom_company';
  $handler->display->display_options['fields']['field_bcom_company']['field'] = 'field_bcom_company';
  $handler->display->display_options['fields']['field_bcom_company']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: CC_CVC */
  $handler->display->display_options['fields']['field_bcom_cc_cvc']['id'] = 'field_bcom_cc_cvc';
  $handler->display->display_options['fields']['field_bcom_cc_cvc']['table'] = 'field_data_field_bcom_cc_cvc';
  $handler->display->display_options['fields']['field_bcom_cc_cvc']['field'] = 'field_bcom_cc_cvc';
  $handler->display->display_options['fields']['field_bcom_cc_cvc']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: CC_EXPIRATION_DATE */
  $handler->display->display_options['fields']['field_bcom_cc_expiration_date']['id'] = 'field_bcom_cc_expiration_date';
  $handler->display->display_options['fields']['field_bcom_cc_expiration_date']['table'] = 'field_data_field_bcom_cc_expiration_date';
  $handler->display->display_options['fields']['field_bcom_cc_expiration_date']['field'] = 'field_bcom_cc_expiration_date';
  $handler->display->display_options['fields']['field_bcom_cc_expiration_date']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: CC_NAME */
  $handler->display->display_options['fields']['field_bcom_cc_name']['id'] = 'field_bcom_cc_name';
  $handler->display->display_options['fields']['field_bcom_cc_name']['table'] = 'field_data_field_bcom_cc_name';
  $handler->display->display_options['fields']['field_bcom_cc_name']['field'] = 'field_bcom_cc_name';
  $handler->display->display_options['fields']['field_bcom_cc_name']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: CC_NUMBER */
  $handler->display->display_options['fields']['field_bcom_cc_number']['id'] = 'field_bcom_cc_number';
  $handler->display->display_options['fields']['field_bcom_cc_number']['table'] = 'field_data_field_bcom_cc_number';
  $handler->display->display_options['fields']['field_bcom_cc_number']['field'] = 'field_bcom_cc_number';
  $handler->display->display_options['fields']['field_bcom_cc_number']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: CC_TYPE */
  $handler->display->display_options['fields']['field_bcom_cc_type']['id'] = 'field_bcom_cc_type';
  $handler->display->display_options['fields']['field_bcom_cc_type']['table'] = 'field_data_field_bcom_cc_type';
  $handler->display->display_options['fields']['field_bcom_cc_type']['field'] = 'field_bcom_cc_type';
  $handler->display->display_options['fields']['field_bcom_cc_type']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Currency Code */
  $handler->display->display_options['fields']['field_bcom_currency_code']['id'] = 'field_bcom_currency_code';
  $handler->display->display_options['fields']['field_bcom_currency_code']['table'] = 'field_data_field_bcom_currency_code';
  $handler->display->display_options['fields']['field_bcom_currency_code']['field'] = 'field_bcom_currency_code';
  $handler->display->display_options['fields']['field_bcom_currency_code']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Email */
  $handler->display->display_options['fields']['field_bcom_email']['id'] = 'field_bcom_email';
  $handler->display->display_options['fields']['field_bcom_email']['table'] = 'field_data_field_bcom_email';
  $handler->display->display_options['fields']['field_bcom_email']['field'] = 'field_bcom_email';
  $handler->display->display_options['fields']['field_bcom_email']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Extra Info */
  $handler->display->display_options['fields']['field_bcom_extra_info']['id'] = 'field_bcom_extra_info';
  $handler->display->display_options['fields']['field_bcom_extra_info']['table'] = 'field_data_field_bcom_extra_info';
  $handler->display->display_options['fields']['field_bcom_extra_info']['field'] = 'field_bcom_extra_info';
  $handler->display->display_options['fields']['field_bcom_extra_info']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Facilities */
  $handler->display->display_options['fields']['field_bcom_facilities']['id'] = 'field_bcom_facilities';
  $handler->display->display_options['fields']['field_bcom_facilities']['table'] = 'field_data_field_bcom_facilities';
  $handler->display->display_options['fields']['field_bcom_facilities']['field'] = 'field_bcom_facilities';
  $handler->display->display_options['fields']['field_bcom_facilities']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Max Children */
  $handler->display->display_options['fields']['field_bcom_max_children']['id'] = 'field_bcom_max_children';
  $handler->display->display_options['fields']['field_bcom_max_children']['table'] = 'field_data_field_bcom_max_children';
  $handler->display->display_options['fields']['field_bcom_max_children']['field'] = 'field_bcom_max_children';
  $handler->display->display_options['fields']['field_bcom_max_children']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Meal Plan */
  $handler->display->display_options['fields']['field_bcom_meal_plan']['id'] = 'field_bcom_meal_plan';
  $handler->display->display_options['fields']['field_bcom_meal_plan']['table'] = 'field_data_field_bcom_meal_plan';
  $handler->display->display_options['fields']['field_bcom_meal_plan']['field'] = 'field_bcom_meal_plan';
  $handler->display->display_options['fields']['field_bcom_meal_plan']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Number Of Guests */
  $handler->display->display_options['fields']['field_bcom_number_of_guests']['id'] = 'field_bcom_number_of_guests';
  $handler->display->display_options['fields']['field_bcom_number_of_guests']['table'] = 'field_data_field_bcom_number_of_guests';
  $handler->display->display_options['fields']['field_bcom_number_of_guests']['field'] = 'field_bcom_number_of_guests';
  $handler->display->display_options['fields']['field_bcom_number_of_guests']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Remarks */
  $handler->display->display_options['fields']['field_bcom_remarks']['id'] = 'field_bcom_remarks';
  $handler->display->display_options['fields']['field_bcom_remarks']['table'] = 'field_data_field_bcom_remarks';
  $handler->display->display_options['fields']['field_bcom_remarks']['field'] = 'field_bcom_remarks';
  $handler->display->display_options['fields']['field_bcom_remarks']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Reservation Time */
  $handler->display->display_options['fields']['field_bcom_reservation_time']['id'] = 'field_bcom_reservation_time';
  $handler->display->display_options['fields']['field_bcom_reservation_time']['table'] = 'field_data_field_bcom_reservation_time';
  $handler->display->display_options['fields']['field_bcom_reservation_time']['field'] = 'field_bcom_reservation_time';
  $handler->display->display_options['fields']['field_bcom_reservation_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_remaining_days' => 0,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Room Info */
  $handler->display->display_options['fields']['field_bcom_room_info']['id'] = 'field_bcom_room_info';
  $handler->display->display_options['fields']['field_bcom_room_info']['table'] = 'field_data_field_bcom_room_info';
  $handler->display->display_options['fields']['field_bcom_room_info']['field'] = 'field_bcom_room_info';
  $handler->display->display_options['fields']['field_bcom_room_info']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Room Remarks */
  $handler->display->display_options['fields']['field_bcom_room_remarks']['id'] = 'field_bcom_room_remarks';
  $handler->display->display_options['fields']['field_bcom_room_remarks']['table'] = 'field_data_field_bcom_room_remarks';
  $handler->display->display_options['fields']['field_bcom_room_remarks']['field'] = 'field_bcom_room_remarks';
  $handler->display->display_options['fields']['field_bcom_room_remarks']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Smoking */
  $handler->display->display_options['fields']['field_bcom_smoking']['id'] = 'field_bcom_smoking';
  $handler->display->display_options['fields']['field_bcom_smoking']['table'] = 'field_data_field_bcom_smoking';
  $handler->display->display_options['fields']['field_bcom_smoking']['field'] = 'field_bcom_smoking';
  $handler->display->display_options['fields']['field_bcom_smoking']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Telephone */
  $handler->display->display_options['fields']['field_bcom_telephone']['id'] = 'field_bcom_telephone';
  $handler->display->display_options['fields']['field_bcom_telephone']['table'] = 'field_data_field_bcom_telephone';
  $handler->display->display_options['fields']['field_bcom_telephone']['field'] = 'field_bcom_telephone';
  $handler->display->display_options['fields']['field_bcom_telephone']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: ZIP */
  $handler->display->display_options['fields']['field_bcom_zip']['id'] = 'field_bcom_zip';
  $handler->display->display_options['fields']['field_bcom_zip']['table'] = 'field_data_field_bcom_zip';
  $handler->display->display_options['fields']['field_bcom_zip']['field'] = 'field_bcom_zip';
  $handler->display->display_options['fields']['field_bcom_zip']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: BAT Booking: Edit Link */
  $handler->display->display_options['fields']['edit_unit']['id'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['edit_unit']['field'] = 'edit_unit';
  $handler->display->display_options['fields']['edit_unit']['label'] = 'Edit';
  /* Field: BAT Booking: Delete Link */
  $handler->display->display_options['fields']['delete_unit']['id'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['table'] = 'bat_bookings';
  $handler->display->display_options['fields']['delete_unit']['field'] = 'delete_unit';
  $handler->display->display_options['fields']['delete_unit']['label'] = 'Delete';
  /* Sort criterion: BAT Booking: Bat booking ID */
  $handler->display->display_options['sorts']['booking_id']['id'] = 'booking_id';
  $handler->display->display_options['sorts']['booking_id']['table'] = 'bat_bookings';
  $handler->display->display_options['sorts']['booking_id']['field'] = 'booking_id';
  $handler->display->display_options['sorts']['booking_id']['order'] = 'DESC';
  /* Filter criterion: BAT Booking: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bat_bookings';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'booking_com' => 'booking_com',
  );
  /* Filter criterion: BAT Booking: Reservation ID (field_bcom_reservation_id) */
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['id'] = 'field_bcom_reservation_id_value';
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['table'] = 'field_data_field_bcom_reservation_id';
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['field'] = 'field_bcom_reservation_id_value';
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['expose']['operator_id'] = 'field_bcom_reservation_id_value_op';
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['expose']['label'] = 'Reservation ID';
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['expose']['operator'] = 'field_bcom_reservation_id_value_op';
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['expose']['identifier'] = 'field_bcom_reservation_id_value';
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['expose']['autocomplete_field'] = 'field_bcom_reservation_id';
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_bcom_reservation_id_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: BAT Booking: Reservation Status (field_bcom_status) */
  $handler->display->display_options['filters']['field_bcom_status_value']['id'] = 'field_bcom_status_value';
  $handler->display->display_options['filters']['field_bcom_status_value']['table'] = 'field_data_field_bcom_status';
  $handler->display->display_options['filters']['field_bcom_status_value']['field'] = 'field_bcom_status_value';
  $handler->display->display_options['filters']['field_bcom_status_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_bcom_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_bcom_status_value']['expose']['operator_id'] = 'field_bcom_status_value_op';
  $handler->display->display_options['filters']['field_bcom_status_value']['expose']['label'] = 'Reservation Status';
  $handler->display->display_options['filters']['field_bcom_status_value']['expose']['operator'] = 'field_bcom_status_value_op';
  $handler->display->display_options['filters']['field_bcom_status_value']['expose']['identifier'] = 'field_bcom_status_value';
  $handler->display->display_options['filters']['field_bcom_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['field_bcom_status_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_bcom_status_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_bcom_status_value']['expose']['autocomplete_field'] = 'field_bcom_status';
  $handler->display->display_options['filters']['field_bcom_status_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_bcom_status_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_bcom_status_value']['expose']['autocomplete_dependent'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/booking-com-bookings';
  $export['booking_com_bookings'] = $view;

  return $export;
}
