<?php

/**
 * @file
 * RoomifyChannelMapType editing UI.
 */

/**
 * UI controller.
 */
class RoomifyChannelMapTypeUIController extends EntityDefaultUIController {

  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();

    foreach ($items as &$item) {
      unset($item['access callback']);
      $item['access arguments'] = array('administer roomify_channel_map_type entities');
    }

    return $items;
  }

}

/**
 * Generates the channel_map type editing form.
 */
function roomify_channel_map_type_form($form, &$form_state, $channel_map_type, $op = 'edit') {
  if ($op == 'clone') {
    $channel_map_type->label .= ' (cloned)';
    $channel_map_type->type = '';
  }

  $form['label'] = array(
    '#title' => t('ChannelMap type name'),
    '#type' => 'textfield',
    '#default_value' => $channel_map_type->label,
    '#description' => t('The human-readable name of this Channel map type.'),
    '#required' => TRUE,
    '#size' => 30,
    '#weight' => -100,
  );

  // Machine-readable type name.
  $form['type'] = array(
    '#type' => 'machine_name',
    '#default_value' => isset($channel_map_type->type) ? $channel_map_type->type : '',
    '#maxlength' => 32,
    '#machine_name' => array(
      'exists' => 'roomify_channel_map_get_types',
      'source' => array('label'),
    ),
    '#description' => t('A unique machine-readable name for this Channel Map type. It must only contain lowercase letters, numbers, and underscores.'),
    '#weight' => -99,
  );

  if ($op == 'edit') {
    $form['type']['#disabled'] = TRUE;
  }

  // Add the field related form elements.
  $form_state['roomify_channel_map_type'] = $channel_map_type;
  field_attach_form('roomify_channel_map_type', $channel_map_type, $form, $form_state);

  $form['additional_settings'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => 99,
  );

  $form['actions'] = array(
    '#type' => 'actions',
    '#tree' => FALSE,
  );

  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save ChannelMap type'),
    '#weight' => 100,
    '#submit' => array('roomify_channel_map_type_form_submit'),
  );

  $form['#validate'][] = 'roomify_channel_map_type_form_validate';

  return $form;
}

/**
 * Form API validate callback for the channel_map type form.
 */
function roomify_channel_map_type_form_validate(&$form, &$form_state) {
  // Notify field widgets to validate their data.
  entity_form_field_validate('roomify_channel_map_type', $form, $form_state);
}

/**
 * Form API submit callback for the channel_map type form.
 */
function roomify_channel_map_type_form_submit(&$form, &$form_state) {
  $channel_map_type = entity_ui_controller('roomify_channel_map_type')->entityFormSubmitBuildEntity($form, $form_state);
  var_dump($channel_map_type);
  // Save and go back.
  $channel_map_type->save();

  $form_state['channel_map_type'] = $channel_map_type;

  $form_state['redirect'] = 'admin/bat/config/channel-map-types';
}
