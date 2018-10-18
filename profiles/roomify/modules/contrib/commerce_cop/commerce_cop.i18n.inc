<?php
/**
 * @file
 * Internationalization (i18n) integration for the Commerce tax module.
 */

/**
 * Implements hook_i18n_object_info().
 */
function commerce_cop_i18n_object_info() {
  $info['commerce_cop'] = array(
    'title' => t('Commerce custom offline payments'),
    'key' => 'method_id',
    'class' => 'i18n_object_wrapper',
    'string translation' => array(
      'textgroup' => 'commerce',
      'type' => 'cop',
      'properties' => array(
        'title' => t('Title'),
        'description' => t('Description'),
        'information' => t('Information'),
      ),
    ),
  );
  return $info;
}

/**
 * Implements hook_i18n_string_objects().
 */
function commerce_cop_i18n_string_objects($type) {
  if ($type == 'commerce_cop') {
    $query = db_select('commerce_custom_offline_payment', 'cop')
      ->fields('cop', array('title', 'description', 'information'));
    $query->addField('cop', 'id', 'method_id');
    return $query->execute()
      ->fetchAllAssoc('method_id', PDO::FETCH_ASSOC);
  }
}
