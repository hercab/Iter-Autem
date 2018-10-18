<?php
/**
 * @file
 * iterautem_publicity_content_type.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function iterautem_publicity_content_type_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'publicity_highlights';
  $mini->category = '';
  $mini->admin_title = 'Publicity Highlights';
  $mini->admin_description = 'Publicity Highlights';
  $mini->requiredcontexts = array(
    1 => array(
      'identifier' => 'Publicity Node',
      'keyword' => 'publicity_node',
      'name' => 'entity:node',
      'entity_id' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_three_columns';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
      'left' => NULL,
      'center' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1e09bebb-734a-4beb-a33f-768445471118';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'publicity_highlights';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-64e1ec4f-18ce-4321-8616-eb3db5dd0796';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_highlight_image2';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'highlight',
      'image_link' => '',
    ),
    'context' => 'requiredcontext_entity:node_1',
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
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '64e1ec4f-18ce-4321-8616-eb3db5dd0796';
  $display->content['new-64e1ec4f-18ce-4321-8616-eb3db5dd0796'] = $pane;
  $display->panels['center'][0] = 'new-64e1ec4f-18ce-4321-8616-eb3db5dd0796';
  $pane = new stdClass();
  $pane->pid = 'new-967f8727-4def-4d88-9ebf-74101b31a78f';
  $pane->panel = 'center';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_highlight_image2_cap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '967f8727-4def-4d88-9ebf-74101b31a78f';
  $display->content['new-967f8727-4def-4d88-9ebf-74101b31a78f'] = $pane;
  $display->panels['center'][1] = 'new-967f8727-4def-4d88-9ebf-74101b31a78f';
  $pane = new stdClass();
  $pane->pid = 'new-2e57604b-3c25-4958-8d62-1d47bbd3521a';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_highlight_image1';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'highlight',
      'image_link' => '',
    ),
    'context' => 'requiredcontext_entity:node_1',
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
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '2e57604b-3c25-4958-8d62-1d47bbd3521a';
  $display->content['new-2e57604b-3c25-4958-8d62-1d47bbd3521a'] = $pane;
  $display->panels['left'][0] = 'new-2e57604b-3c25-4958-8d62-1d47bbd3521a';
  $pane = new stdClass();
  $pane->pid = 'new-e433661f-e668-4b52-b68a-d29981d95f5e';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_highlight_image1_cap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'e433661f-e668-4b52-b68a-d29981d95f5e';
  $display->content['new-e433661f-e668-4b52-b68a-d29981d95f5e'] = $pane;
  $display->panels['left'][1] = 'new-e433661f-e668-4b52-b68a-d29981d95f5e';
  $pane = new stdClass();
  $pane->pid = 'new-3ec9f1d4-a735-4f8d-96f8-6a833b813d40';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_highlight_image3';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'image',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(
      'conditions' => array(
        0 => array(
          'condition' => '',
        ),
      ),
      'image_style' => 'highlight',
      'image_link' => '',
    ),
    'context' => 'requiredcontext_entity:node_1',
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
    'css_class' => '',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '3ec9f1d4-a735-4f8d-96f8-6a833b813d40';
  $display->content['new-3ec9f1d4-a735-4f8d-96f8-6a833b813d40'] = $pane;
  $display->panels['right'][0] = 'new-3ec9f1d4-a735-4f8d-96f8-6a833b813d40';
  $pane = new stdClass();
  $pane->pid = 'new-12e77b00-436a-46c3-9173-32c1dd070dd3';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_highlight_image3_cap';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '12e77b00-436a-46c3-9173-32c1dd070dd3';
  $display->content['new-12e77b00-436a-46c3-9173-32c1dd070dd3'] = $pane;
  $display->panels['right'][1] = 'new-12e77b00-436a-46c3-9173-32c1dd070dd3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['publicity_highlights'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'publicity_location';
  $mini->category = '';
  $mini->admin_title = 'Publicity Location';
  $mini->admin_description = 'Mipanel para mostrar el tab Location cuando se despliega una propiedad en modo full';
  $mini->requiredcontexts = array(
    0 => array(
      'identifier' => 'Publicity Node',
      'keyword' => 'publicity_node',
      'name' => 'entity:node',
      'entity_id' => '',
      'optional' => 0,
      'id' => 1,
    ),
  );
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_two_columns';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3bc6abee-e568-4a3a-813b-19fc716e0b54';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'publicity_location';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-4e1c4a21-8e17-4dfd-8f0b-e369f0cd1068';
  $pane->panel = 'left';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_how_to_reach';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'title',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
    'override_title' => 1,
    'override_title_text' => 'How to reach the place',
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
  $pane->uuid = '4e1c4a21-8e17-4dfd-8f0b-e369f0cd1068';
  $display->content['new-4e1c4a21-8e17-4dfd-8f0b-e369f0cd1068'] = $pane;
  $display->panels['left'][0] = 'new-4e1c4a21-8e17-4dfd-8f0b-e369f0cd1068';
  $pane = new stdClass();
  $pane->pid = 'new-ff0e5509-225c-42bb-99f2-d6f0c16e06d0';
  $pane->panel = 'right';
  $pane->type = 'views_panes';
  $pane->subtype = 'publicity-panel_pane_1';
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
  $pane->uuid = 'ff0e5509-225c-42bb-99f2-d6f0c16e06d0';
  $display->content['new-ff0e5509-225c-42bb-99f2-d6f0c16e06d0'] = $pane;
  $display->panels['right'][0] = 'new-ff0e5509-225c-42bb-99f2-d6f0c16e06d0';
  $pane = new stdClass();
  $pane->pid = 'new-5ad00d99-390f-43d6-9ae5-b3f5bd88dd3c';
  $pane->panel = 'right';
  $pane->type = 'entity_field';
  $pane->subtype = 'node:field_sp_address';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => 'hidden',
    'formatter' => 'text_default',
    'delta_limit' => 0,
    'delta_offset' => '0',
    'delta_reversed' => FALSE,
    'formatter_settings' => array(),
    'context' => 'requiredcontext_entity:node_1',
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
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '5ad00d99-390f-43d6-9ae5-b3f5bd88dd3c';
  $display->content['new-5ad00d99-390f-43d6-9ae5-b3f5bd88dd3c'] = $pane;
  $display->panels['right'][1] = 'new-5ad00d99-390f-43d6-9ae5-b3f5bd88dd3c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['publicity_location'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'publicity_taps';
  $mini->category = '';
  $mini->admin_title = 'Publicity taps';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
  $display = new panels_display();
  $display->layout = 'bootstrap_one_column';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'bottom' => array(
        'region_title' => '',
        'region_title_tag' => 'none',
        'region_class' => '',
        'panel_tab_id_pattern' => 'region',
      ),
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'middle-second' => NULL,
      'down' => NULL,
    ),
    'bottom' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '3e63a2ba-2bff-44ff-9bdb-168960b1de14';
  $display->storage_type = 'panels_mini';
  $display->storage_id = 'publicity_taps';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-c85dd5e5-0993-4b3c-b471-591daa4439f8';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'publicity_index-panel_pane_publicity_details';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array(
    'css_id' => '',
    'css_class' => 'pane-properties-index-panel-pane-4',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'c85dd5e5-0993-4b3c-b471-591daa4439f8';
  $display->content['new-c85dd5e5-0993-4b3c-b471-591daa4439f8'] = $pane;
  $display->panels['bottom'][0] = 'new-c85dd5e5-0993-4b3c-b471-591daa4439f8';
  $pane = new stdClass();
  $pane->pid = 'new-fa6f66c7-509c-4ef6-998c-87b0982992b8';
  $pane->panel = 'bottom';
  $pane->type = 'views_panes';
  $pane->subtype = 'publicity_index-panel_pane_publicity_map';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array();
  $pane->cache = array();
  $pane->style = array(
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = 'fa6f66c7-509c-4ef6-998c-87b0982992b8';
  $display->content['new-fa6f66c7-509c-4ef6-998c-87b0982992b8'] = $pane;
  $display->panels['bottom'][1] = 'new-fa6f66c7-509c-4ef6-998c-87b0982992b8';
  $pane = new stdClass();
  $pane->pid = 'new-f1b09e99-a259-4a5b-9332-7dbe5b02fff5';
  $pane->panel = 'middle-second';
  $pane->type = 'block';
  $pane->subtype = 'views-a6c32c3b3f858c927307c35b5616b310';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'inherit_path' => 1,
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
    'css_class' => 'search-by-name',
  );
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'f1b09e99-a259-4a5b-9332-7dbe5b02fff5';
  $display->content['new-f1b09e99-a259-4a5b-9332-7dbe5b02fff5'] = $pane;
  $display->panels['middle-second'][0] = 'new-f1b09e99-a259-4a5b-9332-7dbe5b02fff5';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['publicity_taps'] = $mini;

  return $export;
}
