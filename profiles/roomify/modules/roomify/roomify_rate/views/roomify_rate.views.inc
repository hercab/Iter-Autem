<?php

/**
 * @file
 */

/**
 * Implements hook_views_data_alter().
 */
function roomify_rate_views_data_alter(&$data) {
  $data['roomify_rates']['edit_unit'] = array(
    'field' => array(
      'title' => t('Edit Link'),
      'help' => t('Provide a link to the edit form for the rate.'),
      'handler' => 'roomify_rate_handler_edit_link_field',
    ),
  );
  $data['roomify_rates']['delete_unit'] = array(
    'field' => array(
      'title' => t('Delete Link'),
      'help' => t('Provide a link to delete the rate.'),
      'handler' => 'roomify_rate_handler_delete_link_field',
    ),
  );
}
