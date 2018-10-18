<?php
/**
 * @file
 * ia_admin_views.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ia_admin_views_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.admin_views_node.display|default|display_options|arguments"] = array(
    'uid' => array(
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'uid',
      'default_argument_type' => 'fixed',
      'summary' => array(
        'format' => 'default_summary',
      ),
      'specify_validation' => TRUE,
      'validate' => array(
        'type' => 'user',
        'fail' => 'access denied',
      ),
      'validate_options' => array(
        'restrict_roles' => TRUE,
        'roles' => array(
          30037204 => 30037204,
          4 => 4,
          5 => 5,
          7 => 7,
          8 => 8,
          163670334 => 163670334,
        ),
      ),
    ),
  );
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|table"] = 'views_entity_node';
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_save_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::node_unpublish_by_keyword_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_goto_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_message_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_send_email_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_argument_selector_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_script_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_node.display|default|display_options|filters|status|group"] = 1;
  $overrides["views_view.admin_views_node.display|default|display_options|filters|title|group"] = 1;
  $overrides["views_view.admin_views_node.display|default|display_options|filters|type|group"] = 1;
  $overrides["views_view.admin_views_node.display|default|display_options|filters|uid|group"] = 1;
  $overrides["views_view.admin_views_node.display|default|display_options|filters|vid|group"] = 1;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|table"] = 'views_entity_user';
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_block_ip_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_goto_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::system_message_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::user_block_user_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_argument_selector_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_delete_item"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|fields|views_bulk_operations|vbo_operations|action::views_bulk_operations_script_action"]["DELETED"] = TRUE;
  $overrides["views_view.admin_views_user.display|default|display_options|query|options|query_tags"] = array(
    0 => 'administerusersbyrole_edit_access',
  );

 return $overrides;
}
