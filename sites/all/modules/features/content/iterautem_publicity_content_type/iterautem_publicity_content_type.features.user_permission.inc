<?php
/**
 * @file
 * iterautem_publicity_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function iterautem_publicity_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create publicity content'.
  $permissions['create publicity content'] = array(
    'name' => 'create publicity content',
    'roles' => array(
      'Publicity Manager' => 'Publicity Manager',
      'administrator' => 'administrator',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any publicity content'.
  $permissions['delete any publicity content'] = array(
    'name' => 'delete any publicity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own publicity content'.
  $permissions['delete own publicity content'] = array(
    'name' => 'delete own publicity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any publicity content'.
  $permissions['edit any publicity content'] = array(
    'name' => 'edit any publicity content',
    'roles' => array(
      'administrator' => 'administrator',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own publicity content'.
  $permissions['edit own publicity content'] = array(
    'name' => 'edit own publicity content',
    'roles' => array(
      'Publicity Manager' => 'Publicity Manager',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'flag bookmarks'.
  $permissions['flag bookmarks'] = array(
    'name' => 'flag bookmarks',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'unflag bookmarks'.
  $permissions['unflag bookmarks'] = array(
    'name' => 'unflag bookmarks',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'flag',
  );

  // Exported permission: 'use search_api_autocomplete for search_api_views_publicity_index'.
  $permissions['use search_api_autocomplete for search_api_views_publicity_index'] = array(
    'name' => 'use search_api_autocomplete for search_api_views_publicity_index',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_autocomplete',
  );

  return $permissions;
}
