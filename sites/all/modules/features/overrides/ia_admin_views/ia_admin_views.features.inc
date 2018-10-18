<?php
/**
 * @file
 * ia_admin_views.features.inc
 */

/**
 * Implements hook_views_default_views_alter().
 */
function ia_admin_views_views_default_views_alter(&$data) {
  if (isset($data['admin_views_node'])) {
    $data['admin_views_node']->display['default']->display_options['arguments'] = array(
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
    ); /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_node'; /* WAS: 'node' */
    $data['admin_views_node']->display['default']->display_options['filters']['status']['group'] = 1; /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['filters']['title']['group'] = 1; /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['filters']['type']['group'] = 1; /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['filters']['uid']['group'] = 1; /* WAS: '' */
    $data['admin_views_node']->display['default']->display_options['filters']['vid']['group'] = 1; /* WAS: '' */
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_save_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::node_unpublish_by_keyword_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_goto_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_message_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_send_email_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_argument_selector_action']);
    unset($data['admin_views_node']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_script_action']);
  }
  if (isset($data['admin_views_user'])) {
    $data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_user'; /* WAS: 'users' */
    $data['admin_views_user']->display['default']->display_options['query']['options']['query_tags'] = array(
      0 => 'administerusersbyrole_edit_access',
    ); /* WAS: '' */
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_block_ip_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_goto_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::system_message_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::user_block_user_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_argument_selector_action']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_delete_item']);
    unset($data['admin_views_user']->display['default']->display_options['fields']['views_bulk_operations']['vbo_operations']['action::views_bulk_operations_script_action']);
  }
}
