<?php

/**
 * @file
 * RoomifyChannelMap editing UI.
 */

/**
 * UI controller.
 */
class RoomifyChannelMapUIController extends EntityDefaultUIController {

  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();

    // Change the add page menu to multiple types of entities.
    $items[$this->path . '/add']['title'] = 'Add a ChannelMap';
    $items[$this->path . '/add']['description'] = 'Create a new channel map.';
    $items[$this->path . '/add']['page callback'] = 'roomify_channel_map_add_page';
    $items[$this->path . '/add']['access callback'] = 'roomify_channel_map_add_access';
    unset($items[$this->path . '/add']['title callback']);

    // Add menu items to add each different type of channel_maps.
    foreach (roomify_channel_map_get_types() as $channel_map_type) {
      $items[$this->path . '/add/' . $channel_map_type->type] = array(
        'title' => 'Add @channel_map_type_label channel_map',
        'title arguments' => array('@channel_map_type_label' => $channel_map_type->label),
        'page callback' => 'roomify_channel_map_create_form_wrapper',
        'page arguments' => array($channel_map_type->type),
        'access callback' => 'roomify_channel_map_access',
        'access arguments' => array('create', roomify_channel_map_create(array('type' => $channel_map_type->type, 'uid' => 0))),
        'file' => 'roomify_channel_map.admin.inc',
        'file path' => drupal_get_path('module', $this->entityInfo['module']),
      );
    }

    return $items;
  }

  /**
   * Creates the markup for the add ChannelMap Entities page within the class
   * so it can easily be extended/overridden.
   */
  public function addPage() {
    $item = menu_get_item();
    $channel_map_types = roomify_channel_map_get_types();

    if (count($channel_map_types) == 1) {
      $channel_map_type = reset($channel_map_types);
      drupal_goto($this->path . '/add/' . $channel_map_type->type);
    }

    $items = array();
    foreach ($channel_map_types as $channel_map_type) {
      $items[] = array(
        'title' => t('Add @channel_map_type_label channel_map', array('@channel_map_type_label' => $channel_map_type->label)),
        'href' => $this->path . '/add/' . $channel_map_type->type,
        'description' => '',
      );
    }

    return array(
      '#theme' => 'roomify_channel_map_add_list',
      '#content' => $items,
    );
  }

}

/**
 *
 */
function roomify_channel_map_form($form, &$form_state, $channel_map, $op = 'edit') {
  global $user;
  // Add the breadcrumb for the form's location.
  roomify_channel_map_set_breadcrumb();
  drupal_set_title(t('Edit @channel_map_name', array('@channel_map_name' => $channel_map->name)));

  $channel_map->date = format_date($channel_map->created, 'custom', 'Y-m-d H:i:s O');
  $account = user_load($channel_map->uid);
  $channel_map->author_name = isset($account->name) ? $account->name : '';

  return roomify_channel_map_edit_form($form, $form_state, $channel_map);
}

/**
 * Form callback wrapper: create a ChannelMap.
 *
 * @param $type
 *   The ChannelMap type for the channel_map to be created.
 */
function roomify_channel_map_create_form_wrapper($type) {
  global $user;
  // Add the breadcrumb for the form's location.
  roomify_channel_map_set_breadcrumb();

  $channel_map = roomify_channel_map_create(array('type' => $type, 'uid' => $user->uid));
  $channel_map->created = REQUEST_TIME;
  $channel_map->author_name = $user->name;
  $channel_map->status = 1;

  return drupal_get_form('roomify_channel_map_edit_form', $channel_map);
}

/**
 * Generate the channel_map editing form.
 */
function roomify_channel_map_edit_form($form, &$form_state, $channel_map) {
  $form['name'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#default_value' => isset($channel_map->name) ? $channel_map->name : '',
    '#maxlength' => 255,
    '#required' => TRUE,
    '#weight' => -99,
  );

  // Add the field related form elements.
  $form_state['roomify_channel_map'] = $channel_map;
  field_attach_form('roomify_channel_map', $channel_map, $form, $form_state, isset($channel_map->language) ? $channel_map->language : NULL);
  $form['additional_settings'] = array(
    '#type' => 'vertical_tabs',
    '#weight' => 99,
  );

  // Type author information for administrators.
  $form['author'] = array(
    '#type' => 'fieldset',
    '#access' => user_access('bypass bat_type entities access'),
    '#title' => t('Authoring information'),
    '#collapsible' => TRUE,
    '#collapsed' => TRUE,
    '#group' => 'additional_settings',
    '#attributes' => array(
      'class' => array('type-form-author'),
    ),
    '#attached' => array(
      'js' => array(
        array(
          'type' => 'setting',
          'data' => array('anonymous' => variable_get('anonymous', t('Anonymous'))),
        ),
      ),
    ),
    '#weight' => 90,
  );

  $form['type'] = array(
    '#type' => 'value',
    '#value' => $channel_map->type,
  );

  $form['author']['author_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Authored by'),
    '#maxlength' => 60,
    '#autocomplete_path' => 'user/autocomplete',
    '#default_value' => !empty($channel_map->author_name) ? $channel_map->author_name : '',
    '#weight' => -1,
    '#description' => t('Leave blank for %anonymous.', array('%anonymous' => variable_get('anonymous', t('Anonymous')))),
  );
  $form['author']['date'] = array(
    '#type' => 'textfield',
    '#title' => t('Authored on'),
    '#maxlength' => 25,
    '#description' => t('Format: %time. The date format is YYYY-MM-DD and %timezone is the time zone offset from UTC. Leave blank to use the time of form submission.', array('%time' => !empty($channel_map->date) ? date_format(date_create($channel_map->date), 'Y-m-d H:i:s O') : format_date($channel_map->created, 'custom', 'Y-m-d H:i:s O'), '%timezone' => !empty($channel_map->date) ? date_format(date_create($channel_map->date), 'O') : format_date($channel_map->created, 'custom', 'O'))),
    '#default_value' => !empty($channel_map->date) ? $channel_map->date : '',
  );

  $form['actions'] = array(
    '#type' => 'actions',
    '#tree' => FALSE,
  );
  // We add the form's #submit array to this button along with the actual submit
  // handler to preserve any submit handlers added by a form callback_wrapper.
  $submit = array();
  if (!empty($form['#submit'])) {
    $submit += $form['#submit'];
  }
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save ChannelMap'),
    '#submit' => $submit + array('roomify_channel_map_edit_form_submit'),
  );

  $form['#validate'][] = 'roomify_channel_map_edit_form_validate';

  return $form;
}

/**
 * Form API validate callback for the event form.
 */
function roomify_channel_map_edit_form_validate(&$form, &$form_state) {
  // Notify field widgets to validate their data.
  entity_form_field_validate('roomify_channel_map', $form, $form_state);
}

/**
 * Form API submit callback for the channel_map form.
 */
function roomify_channel_map_edit_form_submit(&$form, &$form_state) {
  $channel_map = entity_ui_controller('roomify_channel_map')->entityFormSubmitBuildEntity($form, $form_state);

  $channel_map->created = !empty($channel_map->date) ? strtotime($channel_map->date) : REQUEST_TIME;
  $channel_map->changed = time();

  $channel_map->save();
  drupal_set_message(t('ChannelMap @name saved', array('@name' => $channel_map->name)));

  $form_state['redirect'] = 'admin/bat/config/channel-map';
}

/**
 * Page to add ChannelMap.
 */
function roomify_channel_map_add_page() {
  $controller = entity_ui_controller('roomify_channel_map');
  return $controller->addPage();
}

/**
 * Displays the list of available channel_map types for channel_map creation.
 *
 * @ingroup themeable
 */
function theme_roomify_channel_map_add_list($variables) {
  $content = $variables['content'];

  $output = '';
  if ($content) {
    $output = '<dl class="channel-map-type-list">';
    foreach ($content as $item) {
      $output .= '<dt>' . l($item['title'], $item['href']) . '</dt>';
      $output .= '<dd>' . filter_xss_admin($item['description']) . '</dd>';
    }
    $output .= '</dl>';
  }
  else {
    if (user_access('administer channel_map types')) {
      $output = '<p>' . t('ChannelMaps cannot be added because you have not created any channel_map types yet. Go to the <a href="@create-channel_map-type">channel_map type creation page</a> to add a new channel_map type.', array('@create-channel_map-type' => url('admin/bat/config/channel_map-types/add'))) . '</p>';
    }
    else {
      $output = '<p>' . t('No channel_map types have been created yet for you to use.') . '</p>';
    }
  }

  return $output;
}

/**
 * Sets the breadcrumb for administrative BAT pages.
 */
function roomify_channel_map_set_breadcrumb() {
  $breadcrumb = array(
    l(t('Home'), '<front>'),
    l(t('Administration'), 'admin'),
    l(t('BAT'), 'admin/bat'),
    l(t('Configuration'), 'admin/bat/config'),
    l(t('Roomify ChannelMaps'), 'admin/bat/config/channel_map'),
  );

  drupal_set_breadcrumb($breadcrumb);
}
