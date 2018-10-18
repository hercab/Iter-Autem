<?php
/**
 * @file
 * iterautem_publicity_content_type.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function iterautem_publicity_content_type_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_508c5d22-0676-4cbe-93c1-450a0dff2fdf';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 8;
  $handler->conf = array(
    'title' => 'Publicity',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-listing',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'publicity' => 'publicity',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'roomify_travel_two_columns';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'left' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'right' => NULL,
      'main-left' => NULL,
      'main-right' => NULL,
      'main-center' => NULL,
      'bottom' => NULL,
    ),
    'bottom' => array(
      'style' => '-1',
    ),
    'left' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title_field';
  $display->uuid = '9ef84618-1857-465c-a31a-7230c09fde85';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'node_view__panel_context_508c5d22-0676-4cbe-93c1-450a0dff2fdf';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-23da9860-c74b-4f9e-b1b4-7820f679ed4b';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'featured_publicity-panel_pane_1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => 'Featured Places in %node:field-sp-area',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-featured-properties-panel-pane-3',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '23da9860-c74b-4f9e-b1b4-7820f679ed4b';
  $display->content['new-23da9860-c74b-4f9e-b1b4-7820f679ed4b'] = $pane;
  $display->panels['bottom'][0] = 'new-23da9860-c74b-4f9e-b1b4-7820f679ed4b';
  $pane = new stdClass();
  $pane->pid = 'new-614ac5a6-7257-4a8e-b0bc-21df45a1ce11';
  $pane->panel = 'left';
  $pane->type = 'node_body';
  $pane->subtype = 'node_body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<span id="property-description-tab"></span>Description',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '614ac5a6-7257-4a8e-b0bc-21df45a1ce11';
  $display->content['new-614ac5a6-7257-4a8e-b0bc-21df45a1ce11'] = $pane;
  $display->panels['left'][0] = 'new-614ac5a6-7257-4a8e-b0bc-21df45a1ce11';
  $pane = new stdClass();
  $pane->pid = 'new-8cb776b7-16f4-492b-87f0-f6deeb998721';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_services';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<span id="property-amenities-tab"></span>Services',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '8cb776b7-16f4-492b-87f0-f6deeb998721';
  $display->content['new-8cb776b7-16f4-492b-87f0-f6deeb998721'] = $pane;
  $display->panels['left'][1] = 'new-8cb776b7-16f4-492b-87f0-f6deeb998721';
  $pane = new stdClass();
  $pane->pid = 'new-b78396e2-40ea-4e4e-8ab9-39bb2f8b695d';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_policies';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '<span id="property-policies-tab"></span>Policies',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'b78396e2-40ea-4e4e-8ab9-39bb2f8b695d';
  $display->content['new-b78396e2-40ea-4e4e-8ab9-39bb2f8b695d'] = $pane;
  $display->panels['left'][2] = 'new-b78396e2-40ea-4e4e-8ab9-39bb2f8b695d';
  $pane = new stdClass();
  $pane->pid = 'new-543d0a86-1533-4cfb-9a38-00927fcf89eb';
  $pane->panel = 'left';
  $pane->type = 'panels_mini';
  $pane->subtype = 'publicity_location';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 1,
    'override_title_text' => '<span id="property-location-tab"></span>Location',
    'override_title_heading' => 'h3',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-property-location',
  );
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '543d0a86-1533-4cfb-9a38-00927fcf89eb';
  $display->content['new-543d0a86-1533-4cfb-9a38-00927fcf89eb'] = $pane;
  $display->panels['left'][3] = 'new-543d0a86-1533-4cfb-9a38-00927fcf89eb';
  $pane = new stdClass();
  $pane->pid = 'new-cd333669-9875-4536-a6a0-4b053dc08a14';
  $pane->panel = 'main-center';
  $pane->type = 'panels_mini';
  $pane->subtype = 'publicity_highlights';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => array(
      0 => 'argument_entity_id:node_1',
    ),
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-roomify-property-field-sp-highlight-image1',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'cd333669-9875-4536-a6a0-4b053dc08a14';
  $display->content['new-cd333669-9875-4536-a6a0-4b053dc08a14'] = $pane;
  $display->panels['main-center'][0] = 'new-cd333669-9875-4536-a6a0-4b053dc08a14';
  $pane = new stdClass();
  $pane->pid = 'new-1a379d3a-f99a-49ab-a484-556c58f611da';
  $pane->panel = 'main-left';
  $pane->type = 'token';
  $pane->subtype = 'node:flag-bookmarks-link';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'sanitize' => 1,
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '1a379d3a-f99a-49ab-a484-556c58f611da';
  $display->content['new-1a379d3a-f99a-49ab-a484-556c58f611da'] = $pane;
  $display->panels['main-left'][0] = 'new-1a379d3a-f99a-49ab-a484-556c58f611da';
  $pane = new stdClass();
  $pane->pid = 'new-2667e2bf-df33-4b39-94e0-a5b66fdb7f9e';
  $pane->panel = 'main-left';
  $pane->type = 'views';
  $pane->subtype = 'publicity_slideshow';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_pager_settings' => 0,
    'use_pager' => 0,
    'nodes_per_page' => '0',
    'pager_id' => '0',
    'offset' => '0',
    'more_link' => 0,
    'feed_icons' => 0,
    'panel_args' => 0,
    'link_to_view' => 0,
    'args' => '',
    'url' => '',
    'display' => 'default',
    'context' => array(
      0 => '',
    ),
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-property-slideshow',
  );
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '2667e2bf-df33-4b39-94e0-a5b66fdb7f9e';
  $display->content['new-2667e2bf-df33-4b39-94e0-a5b66fdb7f9e'] = $pane;
  $display->panels['main-left'][1] = 'new-2667e2bf-df33-4b39-94e0-a5b66fdb7f9e';
  $pane = new stdClass();
  $pane->pid = 'new-5876e582-a6e9-4ed1-ac55-424ac5f7a346';
  $pane->panel = 'main-right';
  $pane->type = 'node_title';
  $pane->subtype = 'node_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'link' => 0,
    'markup' => 'h2',
    'id' => '',
    'class' => '',
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '5876e582-a6e9-4ed1-ac55-424ac5f7a346';
  $display->content['new-5876e582-a6e9-4ed1-ac55-424ac5f7a346'] = $pane;
  $display->panels['main-right'][0] = 'new-5876e582-a6e9-4ed1-ac55-424ac5f7a346';
  $pane = new stdClass();
  $pane->pid = 'new-5131177f-036a-4c3c-b391-2aef8835286c';
  $pane->panel = 'main-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_review_rating';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'fivestar_formatter_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'widget' => array(
        'fivestar_widget' => 'default',
      ),
      'style' => 'average',
      'text' => 'average',
      'expose' => 1,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5131177f-036a-4c3c-b391-2aef8835286c';
  $display->content['new-5131177f-036a-4c3c-b391-2aef8835286c'] = $pane;
  $display->panels['main-right'][1] = 'new-5131177f-036a-4c3c-b391-2aef8835286c';
  $pane = new stdClass();
  $pane->pid = 'new-5b591932-3c91-4022-bfc8-88727ee97d3f';
  $pane->panel = 'main-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_area';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'default',
      'links' => 1,
      'use_content_language' => 1,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '5b591932-3c91-4022-bfc8-88727ee97d3f';
  $display->content['new-5b591932-3c91-4022-bfc8-88727ee97d3f'] = $pane;
  $display->panels['main-right'][2] = 'new-5b591932-3c91-4022-bfc8-88727ee97d3f';
  $pane = new stdClass();
  $pane->pid = 'new-9a0527c2-8fc9-47ec-ae3f-e6ae0b74de86';
  $pane->panel = 'main-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_bussiness_type';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'taxonomy_term_reference_plain',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'view_mode' => 'default',
      'links' => 1,
      'use_content_language' => 1,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '9a0527c2-8fc9-47ec-ae3f-e6ae0b74de86';
  $display->content['new-9a0527c2-8fc9-47ec-ae3f-e6ae0b74de86'] = $pane;
  $display->panels['main-right'][3] = 'new-9a0527c2-8fc9-47ec-ae3f-e6ae0b74de86';
  $pane = new stdClass();
  $pane->pid = 'new-c0bdf37d-95e7-49e1-88d7-63557ba7f4b8';
  $pane->panel = 'main-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_full_time_work';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'list_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c0bdf37d-95e7-49e1-88d7-63557ba7f4b8';
  $display->content['new-c0bdf37d-95e7-49e1-88d7-63557ba7f4b8'] = $pane;
  $display->panels['main-right'][4] = 'new-c0bdf37d-95e7-49e1-88d7-63557ba7f4b8';
  $pane = new stdClass();
  $pane->pid = 'new-43908cfd-a3e9-48ca-9bb7-12f3067e74d6';
  $pane->panel = 'main-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_work_hours';
  $pane->shown = TRUE;
  $pane->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'entity_field_value:node:publicity:field_full_time_work',
        'settings' => array(
          'field_full_time_work' => array(
            'und' => array(
              0 => array(
                'value' => 0,
              ),
            ),
          ),
          'field_full_time_work_value' => array(
            0 => 0,
          ),
        ),
        'context' => 'argument_entity_id:node_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'office_hours',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'daysformat' => 'short',
      'hoursformat' => '1',
      'compress' => 1,
      'grouped' => 1,
      'showclosed' => 'open',
      'closedformat' => 'Closed',
      'separator_days' => '<br />',
      'separator_grouped_days' => ' - ',
      'separator_day_hours' => ': ',
      'separator_hours_hours' => '-',
      'separator_more_hours' => ', ',
      'current_status' => array(
        'position' => 'before',
        'open_text' => 'Currently open!',
        'closed_text' => 'Currently closed',
      ),
      'date_first_day' => '0',
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 0,
    'override_title_text' => 'Work hours',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '43908cfd-a3e9-48ca-9bb7-12f3067e74d6';
  $display->content['new-43908cfd-a3e9-48ca-9bb7-12f3067e74d6'] = $pane;
  $display->panels['main-right'][5] = 'new-43908cfd-a3e9-48ca-9bb7-12f3067e74d6';
  $pane = new stdClass();
  $pane->pid = 'new-c0e35562-9ec4-4b1b-9b1b-89ac9708b99a';
  $pane->panel = 'main-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_short_description';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'c0e35562-9ec4-4b1b-9b1b-89ac9708b99a';
  $display->content['new-c0e35562-9ec4-4b1b-9b1b-89ac9708b99a'] = $pane;
  $display->panels['main-right'][6] = 'new-c0e35562-9ec4-4b1b-9b1b-89ac9708b99a';
  $pane = new stdClass();
  $pane->pid = 'new-1d562417-45ae-41eb-8157-adac2df31bed';
  $pane->panel = 'main-right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_social_links';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'socialfield_formatter',
    'delta_limit' => '0',
    'delta_offset' => '0',
    'delta_reversed' => 0,
    'formatter_settings' => array(
      'link_text' => 0,
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
    ),
    'context' => 'argument_entity_id:node_1',
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 7;
  $pane->locks = array();
  $pane->uuid = '1d562417-45ae-41eb-8157-adac2df31bed';
  $display->content['new-1d562417-45ae-41eb-8157-adac2df31bed'] = $pane;
  $display->panels['main-right'][7] = 'new-1d562417-45ae-41eb-8157-adac2df31bed';
  $pane = new stdClass();
  $pane->pid = 'new-8bf3eb16-bf1b-44f7-96f9-2871fc3ab5ac';
  $pane->panel = 'right';
  $pane->type = 'iterautem_user_profile_on_listing';
  $pane->subtype = 'iterautem_user_profile_on_listing';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '8bf3eb16-bf1b-44f7-96f9-2871fc3ab5ac';
  $display->content['new-8bf3eb16-bf1b-44f7-96f9-2871fc3ab5ac'] = $pane;
  $display->panels['right'][0] = 'new-8bf3eb16-bf1b-44f7-96f9-2871fc3ab5ac';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_508c5d22-0676-4cbe-93c1-450a0dff2fdf'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function iterautem_publicity_content_type_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'publicity_directory';
  $page->task = 'page';
  $page->admin_title = 'Publicity Directory';
  $page->admin_description = '';
  $page->path = 'directory-search';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Directory',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_publicity_directory__panel';
  $handler->task = 'page';
  $handler->subtask = 'publicity_directory';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Publicity search',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-availability-search',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_strict_sidebar_left';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '32b384b8-126e-45e5-9f3d-961c470ce301';
  $display->storage_type = 'page_manager';
  $display->storage_id = 'page_publicity_directory__panel';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-6b5b925d-e5fa-4604-a86a-66c18ec837b3';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'current_search-publicity';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-current-search-properties',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '6b5b925d-e5fa-4604-a86a-66c18ec837b3';
  $display->content['new-6b5b925d-e5fa-4604-a86a-66c18ec837b3'] = $pane;
  $display->panels['left'][0] = 'new-6b5b925d-e5fa-4604-a86a-66c18ec837b3';
  $pane = new stdClass();
  $pane->pid = 'new-5fdfa090-1095-4e0d-9c1d-919f557d21ce';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-xqJioBeWD5RmZ5nUh1YIytdd4gwFUtE0';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-check"></span>Area',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5fdfa090-1095-4e0d-9c1d-919f557d21ce';
  $display->content['new-5fdfa090-1095-4e0d-9c1d-919f557d21ce'] = $pane;
  $display->panels['left'][1] = 'new-5fdfa090-1095-4e0d-9c1d-919f557d21ce';
  $pane = new stdClass();
  $pane->pid = 'new-813a234a-b50d-4fac-99c3-652f1b927650';
  $pane->panel = 'left';
  $pane->type = 'block';
  $pane->subtype = 'facetapi-K1UDxRYs3Q3Y82IK1rp1s2Hyg2HdG1qz';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '<span class="glyphicon glyphicon-check"></span>Bussiness Type',
    'override_title_heading' => 'h4',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = '813a234a-b50d-4fac-99c3-652f1b927650';
  $display->content['new-813a234a-b50d-4fac-99c3-652f1b927650'] = $pane;
  $display->panels['left'][2] = 'new-813a234a-b50d-4fac-99c3-652f1b927650';
  $pane = new stdClass();
  $pane->pid = 'new-655faaba-9b95-41ef-97b0-c798db6e672a';
  $pane->panel = 'right';
  $pane->type = 'panels_mini';
  $pane->subtype = 'publicity_taps';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'override_title' => 1,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => 'properties-tabs',
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '655faaba-9b95-41ef-97b0-c798db6e672a';
  $display->content['new-655faaba-9b95-41ef-97b0-c798db6e672a'] = $pane;
  $display->panels['right'][0] = 'new-655faaba-9b95-41ef-97b0-c798db6e672a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-5fdfa090-1095-4e0d-9c1d-919f557d21ce';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['publicity_directory'] = $page;

  return $pages;

}
