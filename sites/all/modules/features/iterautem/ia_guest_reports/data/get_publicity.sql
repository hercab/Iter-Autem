--ACCESS=access content
SELECT node.nid AS pub,  flagging.timestamp AS flagging_timestamp, field_data_field_bussiness_type.field_bussiness_type_tid AS bussiness_type_tid,
taxonomy_term_data.name AS bussiness_type_name
FROM node
LEFT JOIN flagging ON (node.nid = flagging.entity_id
			                  AND flagging.fid = '2'
			                  AND flagging.uid = :current_user)
INNER JOIN field_data_field_sp_area ON (node.nid = field_data_field_sp_area.entity_id
                                       AND field_data_field_sp_area.deleted = '0'
                                       AND field_data_field_sp_area.delta = '0')
INNER JOIN field_data_field_bussiness_type ON (node.nid = field_data_field_bussiness_type.entity_id
                                             AND field_data_field_bussiness_type.deleted = '0'
                                             AND field_data_field_bussiness_type.delta = '0')
INNER JOIN taxonomy_term_data ON (field_data_field_bussiness_type.field_bussiness_type_tid = taxonomy_term_data.tid)

WHERE node.status = '1'
      AND node.type IN  ('publicity')
	    AND field_data_field_sp_area.field_sp_area_tid = :area_id
	    AND field_data_field_bussiness_type.field_bussiness_type_tid = :bussiness_type_tid

ORDER BY bussiness_type_tid ASC

--SWITCH=:bussiness_type_tid
--CASE=40
LIMIT 4 OFFSET 0
--ELSE
LIMIT 2 OFFSET 0
--END



--INFO
type[bussiness_type_tid]=int
type[limit]=int
entity_type = node
entity_id = pub
