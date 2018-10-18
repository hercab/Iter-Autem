<?php

/**
 * @file
 * RoomifyRateRestriction editing UI.
 */

/**
 * UI controller.
 */
class RoomifyRateRestrictionUIController extends EntityDefaultUIController {

  /**
   * Overrides hook_menu() defaults.
   */
  public function hook_menu() {
    $items = parent::hook_menu();

    // Change the add page menu to multiple types of entities.
    $items[$this->path . '/add']['title'] = 'Add a Rate Restriction';
    $items[$this->path . '/add']['description'] = 'Create a new rate restriction.';
    $items[$this->path . '/add']['page callback'] = 'roomify_rate_restriction_add_page';
    $items[$this->path . '/add']['access callback'] = 'roomify_rate_restriction_add_access';
    unset($items[$this->path . '/add']['title callback']);

    // Add menu items to add each different type of rates.
    foreach (roomify_rate_get_restriction_types() as $rate_type) {
      $items[$this->path . '/add/' . $rate_type->type] = array(
        'title' => 'Add @rate_type_label rate restriction',
        'title arguments' => array('@rate_type_label' => $rate_type->label),
        'page callback' => 'roomify_rate_restriction_create_form_wrapper',
        'page arguments' => array($rate_type->type),
        'access callback' => 'roomify_rate_restriction_access',
        'access arguments' => array('create', roomify_rate_restriction_create(array('type' => $rate_type->type, 'uid' => 0))),
        'file' => 'roomify_rate_restriction.admin.inc',
        'file path' => drupal_get_path('module', $this->entityInfo['module']),
      );
    }

    return $items;
  }

  /**
   * Creates the markup for the add Rate Entities page within the class
   * so it can easily be extended/overridden.
   */
  public function addPage() {
    $item = menu_get_item();
    $rate_types = roomify_rate_get_restriction_types();

    if (count($rate_types) == 1) {
      $rate_type = reset($rate_types);
      drupal_goto($this->path . '/add/' . $rate_type->type);
    }

    $items = array();
    foreach ($rate_types as $rate_type) {
      $items[] = array(
        'title' => t('Add @rate_type_label rate', array('@rate_type_label' => $rate_type->label)),
        'href' => $this->path . '/add/' . $rate_type->type,
        'description' => '',
      );
    }

    return array(
      '#theme' => 'roomify_rate_restriction_add_list',
      '#content' => $items,
    );
  }

}

/**
 *
 */
function roomify_rate_restriction_form($form, &$form_state, $rate, $op = 'edit') {
  global $user;
  // Add the breadcrumb for the form's location.
  roomify_rate_restriction_set_breadcrumb();
  drupal_set_title(t('Edit @rate_name', array('@rate_name' => $rate->label)));

  $rate->date = format_date($rate->created, 'custom', 'Y-m-d H:i:s O');
  $account = user_load($rate->uid);
  $rate->author_name = isset($account->name) ? $account->name : '';

  return roomify_rate_restriction_edit_form($form, $form_state, $rate);
}

/**
 * Form callback wrapper: create a Rate.
 *
 * @param $type
 *   The Rate type for the rate to be created.
 */
function roomify_rate_restriction_create_form_wrapper($type) {
  global $user;
  // Add the breadcrumb for the form's location.
  roomify_rate_restriction_set_breadcrumb();

  $rate = roomify_rate_restriction_create(array('type' => $type, 'uid' => $user->uid));
  $rate->created = REQUEST_TIME;
  $rate->author_name = $user->name;
  $rate->status = 1;

  return drupal_get_form('roomify_rate_restriction_edit_form', $rate);
}

/**
 * Generates the rate editing form.
 */
function roomify_rate_restriction_edit_form($form, &$form_state, $rate) {
  $form['label'] = array(
    '#type' => 'textfield',
    '#title' => t('Name'),
    '#default_value' => isset($rate->label) ? $rate->label : '',
    '#maxlength' => 255,
    '#required' => TRUE,
    '#weight' => -99,
  );

  // Add the field related form elements.
  $form_state['roomify_rate_restriction'] = $rate;
  field_attach_form('roomify_rate_restriction', $rate, $form, $form_state, isset($rate->language) ? $rate->language : NULL);
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
    '#value' => $rate->type,
  );

  $form['author']['author_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Authored by'),
    '#maxlength' => 60,
    '#autocomplete_path' => 'user/autocomplete',
    '#default_value' => !empty($rate->author_name) ? $rate->author_name : '',
    '#weight' => -1,
    '#description' => t('Leave blank for %anonymous.', array('%anonymous' => variable_get('anonymous', t('Anonymous')))),
  );
  $form['author']['date'] = array(
    '#type' => 'textfield',
    '#title' => t('Authored on'),
    '#maxlength' => 25,
    '#description' => t('Format: %time. The date format is YYYY-MM-DD and %timezone is the time zone offset from UTC. Leave blank to use the time of form submission.', array('%time' => !empty($rate->date) ? date_format(date_create($rate->date), 'Y-m-d H:i:s O') : format_date($rate->created, 'custom', 'Y-m-d H:i:s O'), '%timezone' => !empty($rate->date) ? date_format(date_create($rate->date), 'O') : format_date($rate->created, 'custom', 'O'))),
    '#default_value' => !empty($rate->date) ? $rate->date : '',
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
    '#value' => t('Save Rate Restriction'),
    '#submit' => $submit + array('roomify_rate_restriction_edit_form_submit'),
  );

  $form['#validate'][] = 'roomify_rate_restriction_edit_form_validate';

  return $form;
}

/**
 * Form API validate callback for the event form.
 */
function roomify_rate_restriction_edit_form_validate(&$form, &$form_state) {
  // Notify field widgets to validate their data.
  entity_form_field_validate('roomify_rate_restriction', $form, $form_state);
}

/**
 * Form API submit callback for the rate form.
 */
function roomify_rate_restriction_edit_form_submit(&$form, &$form_state) {
  $rate_restriction = entity_ui_controller('roomify_rate_restriction')->entityFormSubmitBuildEntity($form, $form_state);

  $rate_restriction->created = !empty($rate_restriction->date) ? strtotime($rate_restriction->date) : REQUEST_TIME;
  $rate_restriction->changed = time();

  $rate_restriction->save();
  drupal_set_message(t('Rate restriction @name saved', array('@name' => $rate_restriction->name)));

  $form_state['redirect'] = 'admin/bat/config/rate-restriction';
}

/**
 * Page to add Rate.
 */
function roomify_rate_restriction_add_page() {
  $controller = entity_ui_controller('roomify_rate_restriction');
  return $controller->addPage();
}

/**
 * Displays the list of available rate types for rate creation.
 *
 * @ingroup themeable
 */
function theme_roomify_rate_restriction_add_list($variables) {
  $content = $variables['content'];

  $output = '';
  if ($content) {
    $output = '<dl class="rate-type-list">';
    foreach ($content as $item) {
      $output .= '<dt>' . l($item['title'], $item['href']) . '</dt>';
      $output .= '<dd>' . filter_xss_admin($item['description']) . '</dd>';
    }
    $output .= '</dl>';
  }
  else {
    if (user_access('administer rate restriction types')) {
      $output = '<p>' . t('Rates cannot be added because you have not created any rate types yet. Go to the <a href="@create-rate-type">rate type creation page</a> to add a new rate type.', array('@create-rate-type' => url('admin/bat/config/rate-types/add'))) . '</p>';
    }
    else {
      $output = '<p>' . t('No rate restriction types have been created yet for you to use.') . '</p>';
    }
  }

  return $output;
}

/**
 * Sets the breadcrumb for administrative BAT pages.
 */
function roomify_rate_restriction_set_breadcrumb() {
  $breadcrumb = array(
    l(t('Home'), '<front>'),
    l(t('Administration'), 'admin'),
    l(t('BAT'), 'admin/bat'),
    l(t('Configuration'), 'admin/bat/config'),
    l(t('Roomify Rate Restrictions'), 'admin/bat/config/rate-restriction'),
  );

  drupal_set_breadcrumb($breadcrumb);
}
