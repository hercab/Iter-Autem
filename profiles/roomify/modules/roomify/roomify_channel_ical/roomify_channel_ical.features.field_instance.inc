<?php

/**
 * @file
 * roomify_channel_ical.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function roomify_channel_ical_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'bat_booking-ical-booking_end_date'.
  $field_instances['bat_booking-ical-booking_end_date'] = array(
    'bundle' => 'ical',
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
      'default_value' => 'blank',
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

  // Exported field_instance: 'bat_booking-ical-booking_event_reference'.
  $field_instances['bat_booking-ical-booking_event_reference'] = array(
    'bundle' => 'ical',
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

  // Exported field_instance: 'bat_booking-ical-booking_price'.
  $field_instances['bat_booking-ical-booking_price'] = array(
    'bundle' => 'ical',
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
        'module' => 'commerce_price',
        'settings' => array(
          'calculation' => FALSE,
          'conditions' => array(),
        ),
        'type' => 'commerce_price_formatted_amount',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'booking_price',
    'label' => 'Price',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'commerce_price',
      'settings' => array(
        'currency_code' => 'default',
      ),
      'type' => 'commerce_price_simple',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'bat_booking-ical-booking_start_date'.
  $field_instances['bat_booking-ical-booking_start_date'] = array(
    'bundle' => 'ical',
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
      'default_value' => 'blank',
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

  // Exported field_instance: 'bat_booking-ical-field_description'.
  $field_instances['bat_booking-ical-field_description'] = array(
    'bundle' => 'ical',
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
    'field_name' => 'field_description',
    'label' => 'Description',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'bat_booking-ical-field_event_id'.
  $field_instances['bat_booking-ical-field_event_id'] = array(
    'bundle' => 'ical',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Roomify Channel Manager Event ID.',
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
    'field_name' => 'field_event_id',
    'label' => 'Event ID',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'bat_booking-ical-field_ical_type'.
  $field_instances['bat_booking-ical-field_ical_type'] = array(
    'bundle' => 'ical',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The type of iCal source (e.g. airBnb)',
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
        'weight' => 5,
      ),
    ),
    'entity_type' => 'bat_booking',
    'field_name' => 'field_ical_type',
    'label' => 'iCal type',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'bat_booking-ical-field_reservation_id'.
  $field_instances['bat_booking-ical-field_reservation_id'] = array(
    'bundle' => 'ical',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'If an external reservation ID is available it will be stored here.',
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
    'field_name' => 'field_reservation_id',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'bat_booking-ical-field_summary'.
  $field_instances['bat_booking-ical-field_summary'] = array(
    'bundle' => 'ical',
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
    'field_name' => 'field_summary',
    'label' => 'Summary',
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
      'weight' => 7,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Description');
  t('Departure Date');
  t('Event');
  t('Event ID');
  t('If an external reservation ID is available it will be stored here.');
  t('Price');
  t('Reservation ID');
  t('Arrival Date');
  t('Summary');
  t('The Roomify Channel Manager Event ID.');
  t('The type of iCal source (e.g. airBnb)');
  t('iCal type');

  return $field_instances;
}
