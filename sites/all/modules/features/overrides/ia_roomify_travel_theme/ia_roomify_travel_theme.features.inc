<?php
/**
 * @file
 * ia_roomify_travel_theme.features.inc
 */

/**
 * Implements hook_default_page_manager_handlers_alter().
 */
function ia_roomify_travel_theme_default_page_manager_handlers_alter(&$data) {
  if (isset($data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369'])) {
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->content['new-03f67cdb-5245-4ddc-a101-b6f79aa84ddc']->configuration['override_title'] = 1; /* WAS: 0 */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->content['new-03f67cdb-5245-4ddc-a101-b6f79aa84ddc']->configuration['override_title_heading'] = 'h2'; /* WAS: 'h4' */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->content['new-03f67cdb-5245-4ddc-a101-b6f79aa84ddc']->configuration['override_title_text'] = 'Amenities for Rooms'; /* WAS: '' */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->content['new-03f67cdb-5245-4ddc-a101-b6f79aa84ddc']->position = 6; /* WAS: 5 */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->content['new-19e0fbe1-2ea3-46b4-90a6-277567144465'] = (object) array(
          'pid' => 'new-19e0fbe1-2ea3-46b4-90a6-277567144465',
          'panel' => 'left',
          'type' => 'block',
          'subtype' => 'facetapi-Pe9iBxQhDvCYYIxaEeG3h0wUnGBaLjQz',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => 'Amenities for Properties',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 8,
          'locks' => array(),
          'uuid' => '19e0fbe1-2ea3-46b4-90a6-277567144465',
        ); /* WAS: '' */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->content['new-2c1d95f8-4ad9-4e43-b485-63efc38bba9a']->position = 5; /* WAS: 4 */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->content['new-2c1d95f8-4ad9-4e43-b485-63efc38bba9a']->shown = FALSE; /* WAS: TRUE */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->content['new-72d233c3-4436-4a0a-abf9-18d42762be8a']->position = 9; /* WAS: 7 */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->content['new-7d6ba4a9-6a11-4acd-b940-ef6e593c32f1']->position = 3; /* WAS: 2 */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->content['new-a511d181-afb2-4a91-948c-d6fd102cbebc']->position = 7; /* WAS: 6 */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->content['new-bf67e74a-e56c-4546-9bb9-199bf247a54e'] = (object) array(
          'pid' => 'new-bf67e74a-e56c-4546-9bb9-199bf247a54e',
          'panel' => 'left',
          'type' => 'block',
          'subtype' => 'facetapi-HOx10AFYkhTt7bcZC2DvS7IHBElHTUsM',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'override_title' => 1,
            'override_title_text' => 'Filter by price',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(),
          'extras' => array(),
          'position' => 2,
          'locks' => array(),
          'uuid' => 'bf67e74a-e56c-4546-9bb9-199bf247a54e',
        ); /* WAS: '' */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->content['new-fdb0b6f2-e201-4493-84ac-11fbb5f57a82']->position = 4; /* WAS: 3 */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->panels['left'][2] = 'new-bf67e74a-e56c-4546-9bb9-199bf247a54e'; /* WAS: 'new-7d6ba4a9-6a11-4acd-b940-ef6e593c32f1' */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->panels['left'][3] = 'new-7d6ba4a9-6a11-4acd-b940-ef6e593c32f1'; /* WAS: 'new-fdb0b6f2-e201-4493-84ac-11fbb5f57a82' */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->panels['left'][4] = 'new-fdb0b6f2-e201-4493-84ac-11fbb5f57a82'; /* WAS: 'new-2c1d95f8-4ad9-4e43-b485-63efc38bba9a' */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->panels['left'][5] = 'new-2c1d95f8-4ad9-4e43-b485-63efc38bba9a'; /* WAS: 'new-03f67cdb-5245-4ddc-a101-b6f79aa84ddc' */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->panels['left'][6] = 'new-03f67cdb-5245-4ddc-a101-b6f79aa84ddc'; /* WAS: 'new-a511d181-afb2-4a91-948c-d6fd102cbebc' */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->panels['left'][7] = 'new-a511d181-afb2-4a91-948c-d6fd102cbebc'; /* WAS: 'new-72d233c3-4436-4a0a-abf9-18d42762be8a' */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->panels['left'][8] = 'new-19e0fbe1-2ea3-46b4-90a6-277567144465'; /* WAS: '' */
    $data['page_availability_search__panel_context_0f5e2427-b581-4bed-98e0-e62195e3c369']->conf['display']->panels['left'][9] = 'new-72d233c3-4436-4a0a-abf9-18d42762be8a'; /* WAS: '' */
  }
  if (isset($data['page_listings__listing-travel'])) {
    $data['page_listings__listing-travel']->conf['display']->content['new-2afd9cbd-f378-4858-9cfe-31cd76925e38']->access['plugins'][0]['settings']['type']['casa_property'] = 'casa_property'; /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function ia_roomify_travel_theme_views_default_views_alter(&$data) {
  if (isset($data['property_travel'])) {
    $data['property_travel']->display['panel_pane_3']->display_options['fields']['beds']['exclude'] = TRUE; /* WAS: '' */
    $data['property_travel']->display['panel_pane_3']->display_options['fields']['field_st_double_bed'] = array(
      'id' => 'field_st_double_bed',
      'table' => 'field_data_field_st_double_bed',
      'field' => 'field_st_double_bed',
      'relationship' => 'property_bat_type_reference_target_id',
      'ui_name' => 'ia type double beds',
      'settings' => array(
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
      ),
    ); /* WAS: '' */
    $data['property_travel']->display['panel_pane_3']->display_options['fields']['field_st_single_bed'] = array(
      'id' => 'field_st_single_bed',
      'table' => 'field_data_field_st_single_bed',
      'field' => 'field_st_single_bed',
      'relationship' => 'property_bat_type_reference_target_id',
      'ui_name' => 'ia type single beds',
      'settings' => array(
        'conditions' => array(
          0 => array(
            'condition' => '',
          ),
        ),
      ),
    ); /* WAS: '' */
    $data['property_travel']->display['panel_pane_3']->display_options['style_options']['columns']['field_st_double_bed'] = 'field_st_double_bed'; /* WAS: '' */
    $data['property_travel']->display['panel_pane_3']->display_options['style_options']['columns']['field_st_single_bed'] = 'field_st_single_bed'; /* WAS: '' */
    $data['property_travel']->display['panel_pane_3']->display_options['style_options']['footable']['hide']['field_st_double_bed'] = array(
      'phone' => 'phone',
      'tablet' => 'tablet',
      'all' => 0,
    ); /* WAS: '' */
    $data['property_travel']->display['panel_pane_3']->display_options['style_options']['footable']['hide']['field_st_single_bed'] = array(
      'phone' => 'phone',
      'tablet' => 'tablet',
      'all' => 0,
    ); /* WAS: '' */
    $data['property_travel']->display['panel_pane_3']->display_options['style_options']['info']['field_st_double_bed'] = array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ); /* WAS: '' */
    $data['property_travel']->display['panel_pane_3']->display_options['style_options']['info']['field_st_single_bed'] = array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ); /* WAS: '' */
  }
}
