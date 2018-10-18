SELECT commerce_line_item.line_item_id AS line_id
FROM commerce_order
LEFT JOIN field_data_commerce_line_items ON commerce_order.order_id = field_data_commerce_line_items.entity_id AND (field_data_commerce_line_items.entity_type = 'commerce_order' AND field_data_commerce_line_items.deleted = '0')
LEFT JOIN commerce_line_item ON field_data_commerce_line_items.commerce_line_items_line_item_id = commerce_line_item.line_item_id
WHERE (( (commerce_order.order_id = :order_id ) )AND(( (commerce_order.status NOT IN  ('cart', 'checkout_add-ons', 'checkout_checkout', 'checkout_review', 'checkout_payment', 'checkout_complete')) AND (commerce_line_item.type IN  ('product', 'roomify_accommodation_booking', 'roomify_addon')) )))
LIMIT 5 OFFSET 0
--INFO
type[order_id]=int
entity_type = commerce_line_item
entity_id = line_id
