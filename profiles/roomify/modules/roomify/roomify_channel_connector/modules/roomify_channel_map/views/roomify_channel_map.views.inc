<?php

/**
 * @file
 */

/**
 * Implements hook_views_data_alter().
 */
function roomify_channel_map_views_data_alter(&$data) {
  $data['roomify_channel_maps']['edit_unit'] = array(
    'field' => array(
      'title' => t('Edit Link'),
      'help' => t('Provide a link to the edit form for the channel.'),
      'handler' => 'roomify_channel_map_handler_edit_link_field',
    ),
  );
  $data['roomify_channel_maps']['delete_unit'] = array(
    'field' => array(
      'title' => t('Delete Link'),
      'help' => t('Provide a link to delete the channel map.'),
      'handler' => 'roomify_channel_map_handler_delete_link_field',
    ),
  );
}
