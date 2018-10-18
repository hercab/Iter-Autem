--ACCESS=access content
SELECT  entity_id AS pid
FROM field_data_field_sp_area
WHERE field_sp_area_tid =:area_id AND entity_type IN ('roomify_property') AND entity_id IN (:properties)
--INFO
type[properties] = array
type[area_id] = int
entity_type = roomify_property
entity_id = pid