<?php
/**
 * @file
 * iterautem_publicity_content_type.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function iterautem_publicity_content_type_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'publicity';
  $item->label = 'Publicity';
  $item->settings = array(
    'items' => array(
      'publicity' => array(
        'id' => 'active',
        'label' => 'Publicity',
        'pattern' => '<strong>[facetapi_active:facet-title]</strong>:  [facetapi_active:active-value]',
        'keys' => 0,
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '2',
    ),
  );
  $export['publicity'] = $item;

  return $export;
}
