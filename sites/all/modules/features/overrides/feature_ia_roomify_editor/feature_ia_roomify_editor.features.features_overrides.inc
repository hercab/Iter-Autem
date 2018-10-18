<?php
/**
 * @file
 * feature_ia_roomify_editor.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function feature_ia_roomify_editor_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: wysiwyg
  $overrides["wysiwyg.filtered_text.settings|buttons|default|Smiley"] = 1;
  $overrides["wysiwyg.filtered_text.settings|buttons|drupal"]["DELETED"] = TRUE;

 return $overrides;
}
