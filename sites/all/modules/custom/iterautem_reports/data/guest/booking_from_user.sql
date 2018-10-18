--ACCESS=access content
SELECT commerce_line_item.line_item_id AS item_id, commerce_line_item.line_item_label AS item_label
FROM commerce_line_item
JOIN commerce_order ON commerce_order.order_id = commerce_line_item.order_id
WHERE (( (commerce_order.uid = :current_user ) )AND(( (commerce_order.status NOT IN  ('cart', 'checkout_add-ons', 'checkout_checkout', 'checkout_review', 'checkout_payment', 'checkout_complete')) AND (commerce_line_item.type IN  ('roomify_accommodation_booking')) )))
LIMIT 5 OFFSET 0
--INFO
entity_type = commerce_line_item
entity_id = item_id 