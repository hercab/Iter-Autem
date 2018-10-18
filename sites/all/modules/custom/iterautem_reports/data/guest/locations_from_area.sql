--ACCESS=access content
SELECT node.nid AS nid
FROM node
JOIN field_data_field_sp_area ON field_data_field_sp_area.entity_id = node.nid 
	AND (field_data_field_sp_area.entity_type = 'node' AND field_data_field_sp_area.deleted = '0')
WHERE ((node.status=1 AND node.type = 'location') AND field_data_field_sp_area.field_sp_area_tid=:area.tid)
ORDER BY node.sticky DESC
LIMIT 10 OFFSET 0
--INFO
entity_type = node
entity_id = nid