--ACCESS=access content
SELECT DISTINCT field_sp_area_tid AS area_id
FROM field_data_field_sp_area
WHERE entity_id IN (:properties) AND entity_type IN ('roomify_property')
GROUP BY entity_id
--INFO
type[properties] = array
entity_type = taxonomy_term
entity_id = area_id