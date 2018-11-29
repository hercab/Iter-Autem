<?php
/**
 * @file
 * ia_roomify_dashboard.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function ia_roomify_dashboard_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: views_view
  $overrides["views_view.properties.display|dashboard_properties|display_options|fields|name|alter|text"] = '<div class="property-image">[field_sp_featured_image]</div>
              <div class="property-info">
                  <div class="property-name">[name]</div>
                  <div class="property-created"><span class="label">Created on: </span>[created]</div>
                  <div class="property-changed"><span class="label">Updated on: </span>[changed]</div>
              </div>';
  $overrides["views_view.properties.display|properties_view_all|display_options|fields|field_sp_manager"] = array(
    'id' => 'field_sp_manager',
    'table' => 'field_data_field_sp_manager',
    'field' => 'field_sp_manager',
    'label' => '',
    'exclude' => TRUE,
    'element_label_colon' => FALSE,
    'settings' => array(
      'bypass_access' => 0,
      'link' => 0,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
  );
  $overrides["views_view.properties.display|properties_view_all|display_options|fields|field_sp_owner"] = array(
    'id' => 'field_sp_owner',
    'table' => 'field_data_field_sp_owner',
    'field' => 'field_sp_owner',
    'label' => '',
    'exclude' => TRUE,
    'element_label_colon' => FALSE,
    'settings' => array(
      'bypass_access' => 0,
      'link' => 0,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
  );
  $overrides["views_view.properties.display|properties_view_all|display_options|fields|nothing_2"] = array(
    'id' => 'nothing_2',
    'table' => 'views',
    'field' => 'nothing',
    'ui_name' => 'Ownership',
    'label' => '',
    'alter' => array(
      'text' => '<div class="property-info">
                      <div class="property-changed"><span class="label">Author: </span>[php]</div>
                      <div class="property-changed"><span class="label">Manager: </span>[field_sp_manager]</div>
                      <div class="property-changed"><span class="label">Owner: </span>[field_sp_owner]</div>
                          </div>',
    ),
    'element_label_colon' => FALSE,
  );
  $overrides["views_view.properties.display|properties_view_all|display_options|fields|php"] = array(
    'id' => 'php',
    'table' => 'views',
    'field' => 'php',
    'ui_name' => 'author',
    'label' => '',
    'exclude' => TRUE,
    'element_label_colon' => FALSE,
    'use_php_setup' => 0,
    'php_output' => '<?php $user=user_load($row->uid); $username=$user->name; print $username   ?>',
    'php_click_sortable' => '',
  );
  $overrides["views_view.properties.display|properties_view_all|display_options|fields|uid"] = array(
    'id' => 'uid',
    'table' => 'roomify_properties',
    'field' => 'uid',
    'label' => '',
    'exclude' => TRUE,
    'element_label_colon' => FALSE,
  );
  $overrides["views_view.properties.display|properties_view_all|display_options|fields|views_bulk_operations_1"] = array(
    'id' => 'views_bulk_operations_1',
    'table' => 'views_entity_roomify_property',
    'field' => 'views_bulk_operations',
    'vbo_settings' => array(
      'display_type' => 0,
      'enable_select_all_pages' => 1,
      'row_clickable' => 0,
      'force_single' => 0,
      'entity_load_capacity' => 10,
    ),
    'vbo_operations' => array(
      'action::views_bulk_operations_change_owner_action' => array(
        'selected' => 1,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'skip_permission_check' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::views_bulk_operations_delete_item' => array(
        'selected' => 1,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'skip_permission_check' => 0,
        'override_label' => 0,
        'label' => '',
        'settings' => array(
          'log' => 0,
        ),
      ),
      'action::views_bulk_operations_delete_revision' => array(
        'selected' => 1,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'skip_permission_check' => 0,
        'override_label' => 0,
        'label' => '',
      ),
      'action::views_bulk_operations_modify_action' => array(
        'selected' => 1,
        'postpone_processing' => 0,
        'skip_confirmation' => 0,
        'skip_permission_check' => 0,
        'override_label' => 0,
        'label' => '',
        'settings' => array(
          'show_all_tokens' => 1,
          'display_values' => array(
            '_all_' => '_all_',
          ),
        ),
      ),
    ),
  );

 return $overrides;
}
