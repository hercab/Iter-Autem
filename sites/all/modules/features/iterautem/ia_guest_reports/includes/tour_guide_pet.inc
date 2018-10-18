<?php
/**
 * Created by PhpStorm.
 * User: yunior
 * Date: 7/26/2018
 * Time: 12:44 PM
 */


/**
 * Implementation of hook_default_ENTITY_TYPE.
 *
 * @return
 *   An array of default previewable email templates, keyed by machine names.
 *   Template data arrays should include:
 *   - name: The template's machine name.
 *   - title: The human-readable template title.
 *   - subject: The email's default subject.
 *   - body: The email's default body text.
 *   - from_override: Use to override the email's from address. (NULL to use default)
 *   - cc_default: The email's default cc address.
 *   - bcc_default: The email's default bcc address.
 *   - recipient_callback: If set, a function name that provides the recipients
 *       for this PET.
 *   - token_entity_types: The types of entities to provide tokens for in the
 *       PET's "Replacement patterns" section. (node and user are the defaults)
 *
 * @see hook_default_pet_alter()
 */
function ia_guest_reports_default_pet() {
    $defaults['tour_guide_pet'] = entity_create('pet', array(
        'name' => 'tour_guide_pet',
        'title' => 'Tour Guide',
        'subject' => 'Tour Guide for [commerce-order:order-number] at [site:name]',
        'mail_body' => 'Datos de su Booking:
            [site:abs-url]/reports/tour.tour_guide?order_id=[commerce-order:order-number]',
        'from_override' => NULL,
        'cc_default' => '',
        'bcc_default' => '',
        'recipient_callback' => 'MY_MODULE_recipients_callback',
        'token_entity_types' => array('user', 'commerce-order'),
    ));
    return $defaults;
}


/**
* Implements hook_pet_substitutions_alter().
 */
/*function roomify_accommodation_booking_pet_substitutions_alter(&$substitutions, $params) {
    if (isset($params['rules_state']->currentArguments['commerce_line_item'])) {
        $line_item = $params['rules_state']->currentArguments['commerce_line_item']->value();
        $substitutions['commerce_line_item'] = $line_item;

        if ($line_item->type == 'roomify_accommodation_booking') {
            $line_item_wrapper = entity_metadata_wrapper('commerce_line_item', $line_item);

            $booking = $line_item_wrapper->commerce_booking_reference->value();
            $type = bat_type_load($line_item_wrapper->commerce_booking_reference->booking_event_reference->event_bat_unit_reference->type_id->value());
            $property = roomify_property_load($type->field_st_property_reference[LANGUAGE_NONE][0]['target_id']);

            $substitutions['roomify_property'] = $property;
            $substitutions['bat_booking'] = $booking;
        }
    }

    if (isset($params['rules_state']->variables['commerce_order'])) {
        $commerce_order = $params['rules_state']->variables['commerce_order']->value();

        if ($type = roomify_accommodation_booking_get_bat_types_from_order($commerce_order)) {
            $property_reference = field_get_items('bat_type', $type, 'field_st_property_reference');
            $property = roomify_property_load($property_reference[0]['target_id']);

            $substitutions['commerce_order'] = $commerce_order;
            $substitutions['bat_type'] = $type;
            $substitutions['roomify_property'] = $property;
        }
    }

    if (isset($params['rules_state']->variables['bat_booking'])) {
        $booking = $params['rules_state']->variables['bat_booking']->value();
        $booking_wrapper = entity_metadata_wrapper('bat_booking', $booking);

        $type = bat_type_load($booking_wrapper->booking_event_reference->event_bat_unit_reference->type_id->value());
        $property = roomify_property_load($type->field_st_property_reference[LANGUAGE_NONE][0]['target_id']);

        $substitutions['bat_type'] = $type;
        $substitutions['bat_booking'] = $booking;
        $substitutions['roomify_property'] = $property;
    }
}*/