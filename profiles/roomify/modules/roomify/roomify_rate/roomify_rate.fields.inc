<?php

/**
 * @file
 */

/**
 * Add Default Rate Price field.
 */
function roomify_rate_add_default_rate_field($type_bundle) {
  field_info_cache_clear();

  // "rate_default_rate" field.
  if (field_read_field('rate_default_rate') === FALSE) {
    $field = array(
      'field_name' => 'rate_default_rate',
      'type' => 'commerce_price',
      'cardinality' => 1,
      'locked' => 1,
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "rate_default_rate" field instance.
  if (field_read_instance('roomify_rate', 'rate_default_rate', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'rate_default_rate',
      'entity_type' => 'roomify_rate',
      'bundle' => $type_bundle,
      'description' => '',
      'label' => 'Default Rate',
      'required' => 1,
      'widget' => array(
        'active' => 1,
        'module' => 'commerce_price',
        'settings' => array(
          'currency_code' => 'default',
        ),
        'type' => 'commerce_price_full',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Event type" reference field.
 */
function roomify_rate_add_event_type_reference_field($type_bundle) {
  field_info_cache_clear();

  // "rate_event_type_reference" field.
  if (field_read_field('rate_event_type_reference') === FALSE) {
    $field = array(
      'field_name' => 'rate_event_type_reference',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'bat_event_type',
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "rate_event_type_reference" field instance.
  if (field_read_instance('roomify_rate', 'rate_event_type_reference', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'rate_event_type_reference',
      'entity_type' => 'roomify_rate',
      'label' => 'Event type',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Type" reference field.
 */
function roomify_rate_add_bat_type_reference_field($type_bundle) {
  field_info_cache_clear();

  // "rate_bat_type_reference" field.
  if (field_read_field('rate_bat_type_reference') === FALSE) {
    $field = array(
      'field_name' => 'rate_bat_type_reference',
      'type' => 'entityreference',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'bat_type',
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "rate_bat_type_reference" field instance.
  if (field_read_instance('roomify_rate', 'rate_bat_type_reference', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'rate_bat_type_reference',
      'entity_type' => 'roomify_rate',
      'label' => 'Type',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add minimum stay field.
 */
function roomify_rate_add_minimum_stay_field($type_bundle) {
  field_info_cache_clear();

  // "rate_minimum_stay" field.
  if (field_read_field('rate_minimum_stay') === FALSE) {
    $field = array(
      'field_name' => 'rate_minimum_stay',
      'type' => 'number_integer',
      'cardinality' => 1,
      'locked' => 1,
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "rate_minimum_stay" field instance.
  if (field_read_instance('roomify_rate_restriction', 'rate_minimum_stay', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'rate_minimum_stay',
      'entity_type' => 'roomify_rate_restriction',
      'label' => 'Minimum Stay',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
      ),
      'settings' => array(
        'min' => 1,
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add maximum stay field.
 */
function roomify_rate_add_maximum_stay_field($type_bundle) {
  field_info_cache_clear();

  // "rate_maximum_stay" field.
  if (field_read_field('rate_maximum_stay') === FALSE) {
    $field = array(
      'field_name' => 'rate_maximum_stay',
      'type' => 'number_integer',
      'cardinality' => 1,
      'locked' => 1,
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "rate_maximum_stay" field instance.
  if (field_read_instance('roomify_rate_restriction', 'rate_maximum_stay', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'rate_maximum_stay',
      'entity_type' => 'roomify_rate_restriction',
      'label' => 'Maximum Stay',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
      ),
      'settings' => array(
        'min' => 1,
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add Closed on Arrival field.
 */
function roomify_rate_add_closed_on_arrival_field($type_bundle) {
  field_info_cache_clear();

  // "rate_closed_on_arrival" field.
  if (field_read_field('rate_closed_on_arrival') === FALSE) {
    $field = array(
      'field_name' => 'rate_closed_on_arrival',
      'type' => 'list_boolean',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "rate_closed_on_arrival" field instance.
  if (field_read_instance('roomify_rate_restriction', 'rate_closed_on_arrival', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'rate_closed_on_arrival',
      'entity_type' => 'roomify_rate_restriction',
      'label' => 'Closed on Arrival',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add Closed on Departure field.
 */
function roomify_rate_add_closed_on_departure_field($type_bundle) {
  field_info_cache_clear();

  // "rate_closed_on_departure" field.
  if (field_read_field('rate_closed_on_departure') === FALSE) {
    $field = array(
      'field_name' => 'rate_closed_on_departure',
      'type' => 'list_boolean',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'allowed_values' => array(
          0 => '',
          1 => '',
        ),
        'allowed_values_function' => '',
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "rate_closed_on_departure" field instance.
  if (field_read_instance('roomify_rate_restriction', 'rate_closed_on_departure', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'rate_closed_on_departure',
      'entity_type' => 'roomify_rate_restriction',
      'label' => 'Closed on Departure',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Rate Valid From" field.
 */
function roomify_rate_add_add_valid_from_field($type_bundle) {
  field_info_cache_clear();

  // "rate_valid_from" field.
  if (field_read_field('rate_valid_from') === FALSE) {
    $field = array(
      'field_name' => 'rate_valid_from',
      'type' => 'datetime',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'cache_count' => 4,
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'profile2_private' => FALSE,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "rate_valid_from" field instance.
  if (field_read_instance('roomify_rate_restriction', 'rate_valid_from', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'rate_valid_from',
      'entity_type' => 'roomify_rate_restriction',
      'label' => 'Rate Valid From',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'date_popup',
      ),
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add "Rate Valid To" field.
 */
function roomify_rate_add_add_valid_to_field($type_bundle) {
  field_info_cache_clear();

  // "rate_valid_to" field.
  if (field_read_field('rate_valid_to') === FALSE) {
    $field = array(
      'field_name' => 'rate_valid_to',
      'type' => 'datetime',
      'cardinality' => 1,
      'locked' => 1,
      'settings' => array(
        'cache_count' => 4,
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'profile2_private' => FALSE,
        'timezone_db' => '',
        'todate' => '',
        'tz_handling' => 'none',
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "rate_valid_to" field instance.
  if (field_read_instance('roomify_rate_restriction', 'rate_valid_to', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'rate_valid_to',
      'entity_type' => 'roomify_rate_restriction',
      'label' => 'Rate Valid To',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'date_popup',
      ),
      'settings' => array(
        'default_value' => 'blank',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add Default Rate Price field.
 */
function roomify_rate_add_rate_restriction_reference_field($type_bundle) {
  field_info_cache_clear();

  // "rate_restrictions" field.
  if (field_read_field('rate_restrictions') === FALSE) {
    $field = array(
      'field_name' => 'rate_restrictions',
      'type' => 'entityreference',
      'cardinality' => -1,
      'locked' => 1,
      'settings' => array(
        'target_type' => 'roomify_rate_restriction',
      ),
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "rate_restrictions" field instance.
  if (field_read_instance('roomify_rate', 'rate_restrictions', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'rate_restrictions',
      'entity_type' => 'roomify_rate',
      'label' => 'Rate restrictions',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'type' => 'entityreference_autocomplete',
      ),
    );

    // Check for IEF integration and use IEF widget if present.
    $entity_info = entity_get_info('roomify_rate_restriction');
    if (isset($entity_info['inline entity form'])) {
      $instance['widget']['type'] = 'inline_entity_form';
    }

    field_create_instance($instance);
  }
}

/**
 * Add minimum people field.
 */
function roomify_rate_add_minimum_people_field($type_bundle) {
  field_info_cache_clear();

  // "rate_minimum_people" field.
  if (field_read_field('rate_minimum_people') === FALSE) {
    $field = array(
      'field_name' => 'rate_minimum_people',
      'type' => 'number_integer',
      'cardinality' => 1,
      'locked' => 1,
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "rate_minimum_people" field instance.
  if (field_read_instance('roomify_rate_restriction', 'rate_minimum_people', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'rate_minimum_people',
      'entity_type' => 'roomify_rate_restriction',
      'label' => 'Minimum People',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
      ),
      'settings' => array(
        'min' => 1,
      ),
    );
    field_create_instance($instance);
  }
}

/**
 * Add maximum people field.
 */
function roomify_rate_add_maximum_people_field($type_bundle) {
  field_info_cache_clear();

  // "rate_maximum_people" field.
  if (field_read_field('rate_maximum_people') === FALSE) {
    $field = array(
      'field_name' => 'rate_maximum_people',
      'type' => 'number_integer',
      'cardinality' => 1,
      'locked' => 1,
    );
    field_create_field($field);
  }

  field_cache_clear();

  // "rate_maximum_people" field instance.
  if (field_read_instance('roomify_rate_restriction', 'rate_maximum_people', $type_bundle) === FALSE) {
    $instance = array(
      'field_name' => 'rate_maximum_people',
      'entity_type' => 'roomify_rate_restriction',
      'label' => 'Maximum People',
      'bundle' => $type_bundle,
      'required' => FALSE,
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
      ),
      'settings' => array(
        'min' => 1,
      ),
    );
    field_create_instance($instance);
  }
}
