SELECT roomify_properties.property_id AS property_id
FROM commerce_line_item
LEFT JOIN field_data_commerce_booking_reference ON commerce_line_item.line_item_id = field_data_commerce_booking_reference.entity_id AND (field_data_commerce_booking_reference.entity_type = 'commerce_line_item' AND field_data_commerce_booking_reference.deleted = '0')
LEFT JOIN bat_bookings ON field_data_commerce_booking_reference.commerce_booking_reference_target_id = bat_bookings.booking_id
LEFT JOIN field_data_booking_event_reference ON bat_bookings.booking_id = field_data_booking_event_reference.entity_id AND (field_data_booking_event_reference.entity_type = 'bat_booking' AND field_data_booking_event_reference.deleted = '0')
LEFT JOIN bat_events ON field_data_booking_event_reference.booking_event_reference_target_id = bat_events.event_id
LEFT JOIN field_data_event_bat_unit_reference ON bat_events.event_id = field_data_event_bat_unit_reference.entity_id AND (field_data_event_bat_unit_reference.entity_type = 'bat_event' AND field_data_event_bat_unit_reference.deleted = '0')
LEFT JOIN bat_units ON field_data_event_bat_unit_reference.event_bat_unit_reference_target_id = bat_units.unit_id
LEFT JOIN bat_types ON bat_units.type_id = bat_types.type_id
LEFT JOIN field_data_property_bat_type_reference ON bat_types.type_id = field_data_property_bat_type_reference.property_bat_type_reference_target_id AND (field_data_property_bat_type_reference.entity_type = 'roomify_property' AND field_data_property_bat_type_reference.deleted = '0')
LEFT JOIN roomify_properties ON field_data_property_bat_type_reference.entity_id = roomify_properties.property_id
WHERE (( (commerce_line_item.line_item_id IN (:item_id) ) )AND(( (commerce_line_item.type IN  ('roomify_accommodation_booking')) )))
GROUP BY property_id
--INFO
type[item_id] = array