<?php

/**
 * @file
 * roomify_channel_connector.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function roomify_channel_connector_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bat_booking-booking_com-booking_end_date'.
  $field_instances['bat_booking-booking_com-booking_end_date'] = array(
    'bundle' => 'booking_com',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'booking_end_date',
    'label' => 'Departure Date',
    'required' => FALSE,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-booking_event_reference'.
  $field_instances['bat_booking-booking_com-booking_event_reference'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'conditions' => array(),
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'booking_event_reference',
    'label' => 'Event',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-booking_start_date'.
  $field_instances['bat_booking-booking_com-booking_start_date'] = array(
    'bundle' => 'booking_com',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'booking_start_date',
    'label' => 'Arrival Date',
    'required' => FALSE,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_popup',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_address'.
  $field_instances['bat_booking-booking_com-field_bcom_address'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_arrival_date'.
  $field_instances['bat_booking-booking_com-field_bcom_arrival_date'] = array(
    'bundle' => 'booking_com',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_arrival_date',
    'label' => 'Arrival Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 63,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_cancellation_fee'.
  $field_instances['bat_booking-booking_com-field_bcom_cancellation_fee'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_cancellation_fee',
    'label' => 'Total Cancellation Fee',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_cc_cvc'.
  $field_instances['bat_booking-booking_com-field_bcom_cc_cvc'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_cc_cvc',
    'label' => 'CC_CVC',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 38,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_cc_expiration_date'.
  $field_instances['bat_booking-booking_com-field_bcom_cc_expiration_date'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_cc_expiration_date',
    'label' => 'CC_EXPIRATION_DATE',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_cc_name'.
  $field_instances['bat_booking-booking_com-field_bcom_cc_name'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_cc_name',
    'label' => 'CC_NAME',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_cc_number'.
  $field_instances['bat_booking-booking_com-field_bcom_cc_number'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_cc_number',
    'label' => 'CC_NUMBER',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_cc_type'.
  $field_instances['bat_booking-booking_com-field_bcom_cc_type'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_cc_type',
    'label' => 'CC_TYPE',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_city'.
  $field_instances['bat_booking-booking_com-field_bcom_city'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_city',
    'label' => 'City',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 35,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_commission_amount'.
  $field_instances['bat_booking-booking_com-field_bcom_commission_amount'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Total commission amount for the reservation',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_commission_amount',
    'label' => 'Commission Amount',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_company'.
  $field_instances['bat_booking-booking_com-field_bcom_company'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_company',
    'label' => 'Company',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_countrycode'.
  $field_instances['bat_booking-booking_com-field_bcom_countrycode'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_countrycode',
    'label' => 'Countrycode',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 37,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_currency_code'.
  $field_instances['bat_booking-booking_com-field_bcom_currency_code'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_currency_code',
    'label' => 'Currency Code',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_dc_issue_numebr'.
  $field_instances['bat_booking-booking_com-field_bcom_dc_issue_numebr'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_dc_issue_numebr',
    'label' => 'DC_ISSUE_NUMEBR',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 43,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_dc_start_date'.
  $field_instances['bat_booking-booking_com-field_bcom_dc_start_date'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_dc_start_date',
    'label' => 'DC_START_DATE',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 44,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_departure_date'.
  $field_instances['bat_booking-booking_com-field_bcom_departure_date'] = array(
    'bundle' => 'booking_com',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_departure_date',
    'label' => 'Departure Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_email'.
  $field_instances['bat_booking-booking_com-field_bcom_email'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_email',
    'label' => 'Email',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_extra_info'.
  $field_instances['bat_booking-booking_com-field_bcom_extra_info'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_extra_info',
    'label' => 'Extra Info',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 69,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_facilities'.
  $field_instances['bat_booking-booking_com-field_bcom_facilities'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_facilities',
    'label' => 'Facilities',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 70,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_first_name'.
  $field_instances['bat_booking-booking_com-field_bcom_first_name'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_first_name',
    'label' => 'First Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_guest_name'.
  $field_instances['bat_booking-booking_com-field_bcom_guest_name'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_guest_name',
    'label' => 'Guest Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 71,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_hotel_id'.
  $field_instances['bat_booking-booking_com-field_bcom_hotel_id'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_hotel_id',
    'label' => 'Hotel Id',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_hotel_name'.
  $field_instances['bat_booking-booking_com-field_bcom_hotel_name'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_hotel_name',
    'label' => 'Hotel Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_last_name'.
  $field_instances['bat_booking-booking_com-field_bcom_last_name'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_last_name',
    'label' => 'Last Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_max_children'.
  $field_instances['bat_booking-booking_com-field_bcom_max_children'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_max_children',
    'label' => 'Max Children',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 74,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_meal_plan'.
  $field_instances['bat_booking-booking_com-field_bcom_meal_plan'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_meal_plan',
    'label' => 'Meal Plan',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 75,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_number_of_guests'.
  $field_instances['bat_booking-booking_com-field_bcom_number_of_guests'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_number_of_guests',
    'label' => 'Number Of Guests',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 77,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_price_data_per_date'.
  $field_instances['bat_booking-booking_com-field_bcom_price_data_per_date'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_price_data_per_date',
    'label' => 'Price Data per Date',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_remarks'.
  $field_instances['bat_booking-booking_com-field_bcom_remarks'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_remarks',
    'label' => 'Remarks',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 45,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_reserv_extra_info'.
  $field_instances['bat_booking-booking_com-field_bcom_reserv_extra_info'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 48,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_reserv_extra_info',
    'label' => 'Reservation Extra Info',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 80,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_reservation_date'.
  $field_instances['bat_booking-booking_com-field_bcom_reservation_date'] = array(
    'bundle' => 'booking_com',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_reservation_date',
    'label' => 'Reservation Date',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_reservation_id'.
  $field_instances['bat_booking-booking_com-field_bcom_reservation_id'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_reservation_id',
    'label' => 'Reservation ID',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_reservation_time'.
  $field_instances['bat_booking-booking_com-field_bcom_reservation_time'] = array(
    'bundle' => 'booking_com',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'conditions' => array(),
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_reservation_time',
    'label' => 'Reservation Time',
    'required' => 0,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_text',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_room_commission'.
  $field_instances['bat_booking-booking_com-field_bcom_room_commission'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_room_commission',
    'label' => 'Commission Amount',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 66,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_room_currency_code'.
  $field_instances['bat_booking-booking_com-field_bcom_room_currency_code'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_room_currency_code',
    'label' => 'Currency Code',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 68,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_room_id'.
  $field_instances['bat_booking-booking_com-field_bcom_room_id'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_room_id',
    'label' => 'Booking.com Room ID',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 72,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_room_info'.
  $field_instances['bat_booking-booking_com-field_bcom_room_info'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_room_info',
    'label' => 'Room Info',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 73,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_room_remarks'.
  $field_instances['bat_booking-booking_com-field_bcom_room_remarks'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_room_remarks',
    'label' => 'Room Remarks',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 78,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_room_reservation_id'.
  $field_instances['bat_booking-booking_com-field_bcom_room_reservation_id'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_room_reservation_id',
    'label' => 'Room Reservation ID',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 62,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_room_total_price'.
  $field_instances['bat_booking-booking_com-field_bcom_room_total_price'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_room_total_price',
    'label' => 'Room Total Price',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 67,
    ),
  );

  // Exported field_instance:
  // 'bat_booking-booking_com-field_bcom_room_type_name'.
  $field_instances['bat_booking-booking_com-field_bcom_room_type_name'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_room_type_name',
    'label' => 'Room Type Name',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 76,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_smoking'.
  $field_instances['bat_booking-booking_com-field_bcom_smoking'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_smoking',
    'label' => 'Smoking',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 79,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_status'.
  $field_instances['bat_booking-booking_com-field_bcom_status'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_status',
    'label' => 'Reservation Status',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_telephone'.
  $field_instances['bat_booking-booking_com-field_bcom_telephone'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_telephone',
    'label' => 'Telephone',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_total_price'.
  $field_instances['bat_booking-booking_com-field_bcom_total_price'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_total_price',
    'label' => 'Total Price',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'bat_booking-booking_com-field_bcom_zip'.
  $field_instances['bat_booking-booking_com-field_bcom_zip'] = array(
    'bundle' => 'booking_com',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'conversation' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'conditions' => array(),
        ),
        'type' => 'text_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_bcom_zip',
    'label' => 'ZIP',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'filtered_text' => 'filtered_text',
          'full_html' => 'full_html',
          'landing_page_text' => 'landing_page_text',
          'plain_text' => 'plain_text',
          'rich_text' => 'rich_text',
        ),
        'allowed_formats_toggle' => 0,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'filtered_text' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'landing_page_text' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'rich_text' => array(
              'weight' => -9,
            ),
          ),
        ),
      ),
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 36,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Arrival Date');
  t('Booking.com Room ID');
  t('CC_CVC');
  t('CC_EXPIRATION_DATE');
  t('CC_NAME');
  t('CC_NUMBER');
  t('CC_TYPE');
  t('City');
  t('Commission Amount');
  t('Company');
  t('Countrycode');
  t('Currency Code');
  t('DC_ISSUE_NUMEBR');
  t('DC_START_DATE');
  t('Departure Date');
  t('Email');
  t('Departure Date');
  t('Event');
  t('Extra Info');
  t('Facilities');
  t('First Name');
  t('Guest Name');
  t('Hotel Id');
  t('Hotel Name');
  t('Last Name');
  t('Max Children');
  t('Meal Plan');
  t('Number Of Guests');
  t('Price Data per Date');
  t('Remarks');
  t('Reservation Date');
  t('Reservation Extra Info');
  t('Reservation ID');
  t('Reservation Status');
  t('Reservation Time');
  t('Room Info');
  t('Room Remarks');
  t('Room Reservation ID');
  t('Room Total Price');
  t('Room Type Name');
  t('Smoking');
  t('Arrival Date');
  t('Telephone');
  t('Total Cancellation Fee');
  t('Total Price');
  t('Total commission amount for the reservation');
  t('ZIP');

  return $field_instances;
}
