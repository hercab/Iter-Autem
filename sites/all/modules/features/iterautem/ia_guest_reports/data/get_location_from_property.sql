--ACCESS=access content
SELECT field_sp_location_lat AS lat, field_sp_location_lon AS lon, field_data_field_sp_location.entity_id as pid
FROM field_data_field_sp_location
INNER JOIN field_data_field_sp_area ON field_data_field_sp_area.entity_id = field_data_field_sp_location.entity_id AND field_sp_area_tid=:area_id AND field_data_field_sp_area.deleted=0
WHERE field_data_field_sp_location.entity_type = 'roomify_property' AND field_data_field_sp_location.entity_id IN (:properties) AND field_data_field_sp_location.deleted = '0'
--INFO
type[properties] = array