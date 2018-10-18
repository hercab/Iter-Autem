--ACCESS=access content
SELECT node.nid AS nid, flagging.timestamp AS flagging_timestamp,
  field_data_field_bussiness_type.field_bussiness_type_tid AS field_data_field_bussiness_type_field_bussiness_type_tid,
  'node' AS field_data_field_bussiness_type_node_entity_type,
  DATE_FORMAT((DATE_ADD('19700101', INTERVAL flagging.timestamp SECOND) + INTERVAL 0 SECOND), '%Y%m%d') AS flagging_timestamp_day
FROM node
INNER JOIN flagging ON (flagging.fid = '2' AND flagging.uid = :current_user)
INNER JOIN field_data_field_sp_area ON node.nid = field_data_field_sp_area.entity_id
                                       AND (field_data_field_sp_area.entity_type = 'node'
                                       AND field_data_field_sp_area.deleted = '0')
LEFT JOIN field_data_field_bussiness_type ON node.nid = field_data_field_bussiness_type.entity_id
                                             AND (field_data_field_bussiness_type.entity_type = 'node'
                                             AND field_data_field_bussiness_type.deleted = '0')
WHERE (( (node.status = '1') AND (node.type IN  ('publicity'))
         AND (field_data_field_sp_area.field_sp_area_tid = :area.tid)
         AND (flagging.timestamp <= :order_date) ))
ORDER BY flagging_timestamp_day DESC, field_data_field_bussiness_type_field_bussiness_type_tid ASC
LIMIT 10 OFFSET 0
--INFO
entity_type = node
entity_id = nid
type[order_date]=unixtime