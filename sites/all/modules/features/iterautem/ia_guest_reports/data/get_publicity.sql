--ACCESS=access content
SELECT node.nid AS pub,  flagging.timestamp AS flagging_timestamp, field_data_field_bussiness_type.field_bussiness_type_tid AS bussiness_type_tid,
taxonomy_term_data.name AS bussiness_type_name
FROM node
INNER JOIN flagging ON (flagging.fid = '2' AND flagging.uid = :current_user)
INNER JOIN field_data_field_sp_area ON node.nid = field_data_field_sp_area.entity_id
                                       AND (field_data_field_sp_area.entity_type = 'node'
                                       AND field_data_field_sp_area.deleted = '0')
LEFT JOIN field_data_field_bussiness_type ON node.nid = field_data_field_bussiness_type.entity_id
                                             AND (field_data_field_bussiness_type.entity_type = 'node'
                                             AND field_data_field_bussiness_type.deleted = '0')
LEFT JOIN taxonomy_term_data ON field_data_field_bussiness_type.field_bussiness_type_tid = taxonomy_term_data.tid

--IF=:bussiness_type_tid

WHERE (( (node.status = '1') AND (node.type IN  ('publicity'))
         AND (field_data_field_sp_area.field_sp_area_tid = :area_id)
         AND (flagging.timestamp <= :order_date)
         AND (field_data_field_bussiness_type.field_bussiness_type_tid = :bussiness_type_tid)))
--ELSE

WHERE (( (node.status = '1') AND (node.type IN  ('publicity'))
         AND (field_data_field_sp_area.field_sp_area_tid = :area_id)
         AND (flagging.timestamp <= :order_date)))

--END
GROUP BY pub
ORDER BY bussiness_type_tid ASC

LIMIT 10 OFFSET 0

--INFO
type[bussiness_type_tid]=int
entity_type = node
entity_id = pub
