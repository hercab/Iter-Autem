<?php
/**
 * @file
 * feature_ia_roomify_editor.features.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles_alter().
 */
function feature_ia_roomify_editor_wysiwyg_default_profiles_alter(&$data) {
  if (isset($data['filtered_text'])) {
    $data['filtered_text']['settings']['buttons']['default']['Smiley'] = 1; /* WAS: '' */
    unset($data['filtered_text']['settings']['buttons']['drupal']);
  }
}
