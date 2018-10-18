<?php
/**
 * @file
 * feature_ia_roomify_search.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_ia_roomify_search_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use search_api_autocomplete for search_api_views_properties_index'.
  $permissions['use search_api_autocomplete for search_api_views_properties_index'] = array(
    'name' => 'use search_api_autocomplete for search_api_views_properties_index',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'search_api_autocomplete',
  );

  return $permissions;
}
