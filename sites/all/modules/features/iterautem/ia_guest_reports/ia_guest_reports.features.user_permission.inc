<?php
/**
 * @file
 * ia_guest_reports.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ia_guest_reports_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access guest data'.
  $permissions['access guest data'] = array(
    'name' => 'access guest data',
    'roles' => array(
      'administrator' => 'administrator',
      'guest' => 'guest',
    ),
    'module' => 'forena',
  );

  // Exported permission: 'list reports'.
  $permissions['list reports'] = array(
    'name' => 'list reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'forena',
  );

  return $permissions;
}
