<?php
/**
 * @file
 * feature_ia_roomify_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_ia_roomify_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_facetapi_default_facet_settings_alter().
 */
function feature_ia_roomify_search_facetapi_default_facet_settings_alter(&$data) {
  if (isset($data['search_api@properties_index:block:property_bat_type_reference:field_st_amenities'])) {
    $data['search_api@properties_index:block:property_bat_type_reference:field_st_amenities']->settings['filters']['amenities_filter'] = array(
      'status' => 1,
      'weight' => -48,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_default_panels_mini_alter().
 */
function feature_ia_roomify_search_default_panels_mini_alter(&$data) {
  if (isset($data['properties_tabs'])) {
    $data['properties_tabs']->display->content['new-9a6e2e41-b24b-4fbd-8236-741e960f1c03'] = (object) array(
          'pid' => 'new-9a6e2e41-b24b-4fbd-8236-741e960f1c03',
          'panel' => 'middle-second',
          'type' => 'block',
          'subtype' => 'views-cca12937c475a72cf9b228fb8ef664eb',
          'shown' => TRUE,
          'access' => array(),
          'configuration' => array(
            'inherit_path' => 1,
            'override_title' => 0,
            'override_title_text' => 'Search by name',
            'override_title_heading' => 'h2',
          ),
          'cache' => array(),
          'style' => array(
            'settings' => NULL,
          ),
          'css' => array(
            'css_id' => '',
            'css_class' => 'search-by-name',
          ),
          'extras' => array(),
          'position' => 0,
          'locks' => array(),
          'uuid' => '9a6e2e41-b24b-4fbd-8236-741e960f1c03',
        ); /* WAS: '' */
    $data['properties_tabs']->display->panel_settings['style_settings']['down'] = NULL; /* WAS: '' */
    $data['properties_tabs']->display->panel_settings['style_settings']['middle-second'] = NULL; /* WAS: '' */
    $data['properties_tabs']->display->panels['middle-second'] = array(
      0 => 'new-9a6e2e41-b24b-4fbd-8236-741e960f1c03',
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_default_search_api_index_alter().
 */
function feature_ia_roomify_search_default_search_api_index_alter(&$data) {
  if (isset($data['properties_index'])) {
    $data['properties_index']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_1']['separator'] = '
                                
                                '; /* WAS: '' */
    $data['properties_index']->options['data_alter_callbacks']['search_api_alter_add_aggregation']['settings']['fields']['search_api_aggregation_2'] = array(
      'name' => 'Cost',
      'type' => 'min',
      'separator' => '
                                                
                                                ',
      'fields' => array(
        0 => 'property_bat_type_reference:field_st_default_price:amount_decimal',
      ),
      'description' => 'A Minimum aggregation of the following fields: Type » Default Cost » Amount (decimal).',
    ); /* WAS: '' */
    $data['properties_index']->options['data_alter_callbacks']['search_api_alter_add_viewed_entity']['settings']['mode'] = 'display'; /* WAS: 'Tokens' */
    $data['properties_index']->options['data_alter_callbacks']['search_api_metatag_alter_callback'] = array(
      'status' => 0,
      'weight' => 0,
      'settings' => array(),
    ); /* WAS: '' */
    $data['properties_index']->options['fields']['field_sp_amenities'] = array(
      'type' => 'list<integer>',
      'entity_type' => 'taxonomy_term',
    ); /* WAS: '' */
    $data['properties_index']->options['fields']['search_api_aggregation_2'] = array(
      'type' => 'decimal',
    ); /* WAS: '' */
    $data['properties_index']->options['processors']['search_api_highlighting']['settings']['highlight_partial'] = 0; /* WAS: '' */
    $data['properties_index']->options['processors']['search_api_porter_stemmer'] = array(
      'status' => 0,
      'weight' => 35,
      'settings' => array(
        'fields' => array(
          'name' => TRUE,
          'field_sp_short_description' => TRUE,
        ),
        'exceptions' => 'texan=texa',
      ),
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_default_search_api_server_alter().
 */
function feature_ia_roomify_search_default_search_api_server_alter(&$data) {
  if (isset($data['properties'])) {
    $data['properties']->options['indexes']['properties_index']['field_sp_amenities'] = array(
      'table' => 'search_api_db_properties_index_field_sp_amenities',
      'column' => 'value',
      'type' => 'list<integer>',
      'boost' => '1.0',
    ); /* WAS: '' */
    $data['properties']->options['indexes']['properties_index']['search_api_aggregation_2'] = array(
      'table' => 'search_api_db_properties_index',
      'column' => 'search_api_aggregation_2',
      'type' => 'decimal',
      'boost' => '1.0',
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function feature_ia_roomify_search_views_default_views_alter(&$data) {
  if (isset($data['properties_index'])) {
    $data['properties_index']->display['default']->display_options['exposed_form']['options'] = array(
      'reset_button' => TRUE,
      'expose_sort_order' => FALSE,
    ); /* WAS: '' */
    $data['properties_index']->display['default']->display_options['filters']['search_api_views_fulltext'] = array(
      'id' => 'search_api_views_fulltext',
      'table' => 'search_api_index_properties_index',
      'field' => 'search_api_views_fulltext',
      'operator' => 'OR',
      'exposed' => TRUE,
      'expose' => array(
        'operator_id' => 'search_api_views_fulltext_op',
        'label' => 'Search by name',
        'operator' => 'search_api_views_fulltext_op',
        'identifier' => 'search_api_views_fulltext',
        'remember_roles' => array(
          2 => 2,
          1 => 0,
          30037204 => 0,
          4 => 0,
          5 => 0,
          6 => 0,
          7 => 0,
          8 => 0,
          163670334 => 0,
        ),
        'autocomplete_raw_suggestion' => 1,
        'autocomplete_raw_dropdown' => 1,
        'autocomplete_dependent' => 0,
      ),
      'fields' => array(
        'name' => 'name',
      ),
    ); /* WAS: '' */
    $data['properties_index']->display['panel_pane_2']->display_options['defaults']['filter_groups'] = FALSE; /* WAS: '' */
    $data['properties_index']->display['panel_pane_2']->display_options['defaults']['filters'] = FALSE; /* WAS: '' */
    $data['properties_index']->display['panel_pane_2']->display_options['exposed_block'] = TRUE; /* WAS: '' */
    $data['properties_index']->display['panel_pane_2']->display_options['fields']['nothing']['alter']['text'] = '<div class="property-info">
                                <div class="property-types-table">[property_types]</div>
                              </div>'; /* WAS: '<div class="roomify-property-short-description">[field_sp_short_description]</div>
          <div class="roomify-property-image">[field_sp_featured_image]</div>' */
    $data['properties_index']->display['panel_pane_2']->display_options['filters'] = array(
      'status' => array(
        'id' => 'status',
        'table' => 'search_api_index_properties_index',
        'field' => 'status',
        'value' => 1,
      ),
      'search_api_views_fulltext' => array(
        'id' => 'search_api_views_fulltext',
        'table' => 'search_api_index_properties_index',
        'field' => 'search_api_views_fulltext',
        'operator' => 'OR',
        'exposed' => TRUE,
        'expose' => array(
          'operator_id' => 'search_api_views_fulltext_op',
          'label' => 'Fulltext search',
          'operator' => 'search_api_views_fulltext_op',
          'identifier' => 'search_api_views_fulltext',
          'remember_roles' => array(
            2 => 2,
            1 => 0,
            30037204 => 0,
            4 => 0,
            5 => 0,
            6 => 0,
            7 => 0,
            8 => 0,
            163670334 => 0,
          ),
          'autocomplete_raw_suggestion' => 1,
          'autocomplete_raw_dropdown' => 1,
          'autocomplete_dependent' => 0,
        ),
        'fields' => array(
          'name' => 'name',
        ),
      ),
    ); /* WAS: '' */
    $data['properties_index']->display['panel_pane_3']->display_options['exposed_block'] = TRUE; /* WAS: '' */
    $data['properties_index']->display['panel_pane_3']->display_options['fields']['field_sp_featured_image']['alter']['text'] = '<div class="featured-image-with-description">
                              [field_sp_featured_image] 
                              <div class="property-info">
                                <div class="property-types-table">[property_types]</div>
                              </div>
                            </div>'; /* WAS: '<div class="featured-image-with-description">
              [field_sp_featured_image] 
              <div class="property-info">
                <div class="description">[field_sp_short_description]</div>
                <div class="property-types-table">[property_types]</div>
              </div>
            </div>' */
    $data['properties_index']->display['panel_pane_4']->display_options['exposed_block'] = TRUE; /* WAS: '' */
    $data['properties_index']->display['panel_pane_4']->display_options['fields']['nothing']['alter']['text'] = '<div class="name">[name]</div>
                        <div class="short-description">[field_sp_short_description]</div>
                        <table>
                          <tbody>
                            <tr>
                              <td data-toggle="tooltip" data-html="true" title="Max Capacity" data-placement="top" class="capacity">[roomify_search_handler_property_capacity]</td>
                              <td data-toggle="tooltip" data-html="true" title="Rooms" data-placement="top" class="property-type">[total_rooms]</td>
                              <td data-toggle="tooltip" data-html="true" title="Single Beds" data-placement="top" class="single-beds">[total_single_beds]</td>
                              <td data-toggle="tooltip" data-html="true" title="Double Beds" data-placement="top" class="double-beds">[total_double_beds]</td>
                              <td data-toggle="tooltip" data-html="true" title="Bathrooms" data-placement="top" class="bathrooms">[total_bathrooms]</td>
                            </tr>
                            <tr>
                              <td data-toggle="tooltip" data-html="true" title="Area" data-placement="top" class="area">[field_sp_area]</td>
                              <td data-toggle="tooltip" data-html="true" title="Area Type" data-placement="top" class="area-type">[field_sp_area_type]</td>
                              <td data-toggle="tooltip" data-html="true" title="Property Type" data-placement="top" class="property-type">[field_sp_property_type]</td>
                             </tr>
                           </tbody>
                          </table>'; /* WAS: '<div class="name">[name]</div>
        <div class="short-description">[field_sp_short_description]</div>
        <table>
          <tbody>
            <tr>
              <td data-toggle="tooltip" data-html="true" title="Max Capacity" data-placement="top" class="capacity">[roomify_search_handler_property_capacity]</td>
              <td data-toggle="tooltip" data-html="true" title="Single Beds" data-placement="top" class="single-beds">[roomify_search_handler_beds_largest_room]</td>
              <td data-toggle="tooltip" data-html="true" title="Double Beds" data-placement="top" class="double-beds">[roomify_search_handler_double_beds_largest_room]</td>
              <td data-toggle="tooltip" data-html="true" title="Bathrooms" data-placement="top" class="bathrooms">[roomify_search_handler_bathrooms_largest_room]</td>
            </tr>
            <tr>
              <td data-toggle="tooltip" data-html="true" title="Area" data-placement="top" class="area">[field_sp_area]</td>
              <td data-toggle="tooltip" data-html="true" title="Area Type" data-placement="top" class="area-type">[field_sp_area_type]</td>
              <td data-toggle="tooltip" data-html="true" title="Property Type" data-placement="top" class="property-type">[field_sp_property_type]</td>
             </tr>
           </tbody>
          </table>' */
    $data['properties_index']->display['panel_pane_4']->display_options['fields']['nothing']['exclude'] = TRUE; /* WAS: '' */
    $data['properties_index']->display['panel_pane_4']->display_options['fields']['total_bathrooms'] = array(
      'id' => 'total_bathrooms',
      'table' => 'search_api_index_properties_index',
      'field' => 'total_bathrooms',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
    ); /* WAS: '' */
    $data['properties_index']->display['panel_pane_4']->display_options['fields']['total_double_beds'] = array(
      'id' => 'total_double_beds',
      'table' => 'search_api_index_properties_index',
      'field' => 'total_double_beds',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
    ); /* WAS: '' */
    $data['properties_index']->display['panel_pane_4']->display_options['fields']['total_rooms'] = array(
      'id' => 'total_rooms',
      'table' => 'search_api_index_properties_index',
      'field' => 'total_rooms',
      'label' => '',
      'exclude' => TRUE,
      'element_label_colon' => FALSE,
    ); /* WAS: '' */
    $data['properties_index']->display['panel_pane_4']->display_options['fields']['total_single_beds'] = array(
      'id' => 'total_single_beds',
      'table' => 'search_api_index_properties_index',
      'field' => 'total_single_beds',
      'label' => '',
      'alter' => array(
        'alter_text' => TRUE,
        'text' => '<div class="name">[name]</div>
                                <div class="short-description">[field_sp_short_description]</div>
                                <table>
                                  <tbody>
                                    <tr>
                                      <td data-toggle="tooltip" data-html="true" title="Max Capacity" data-placement="top" class="capacity">[roomify_search_handler_property_capacity]</td>
                                      <td data-toggle="tooltip" data-html="true" title="Rooms" data-placement="top" class="property-type">[total_rooms]</td>
                                      <td data-toggle="tooltip" data-html="true" title="Single Beds" data-placement="top" class="single-beds">[total_single_beds]</td>
                                      <td data-toggle="tooltip" data-html="true" title="Double Beds" data-placement="top" class="double-beds">[total_double_beds]</td>
                                      <td data-toggle="tooltip" data-html="true" title="Bathrooms" data-placement="top" class="bathrooms">[total_bathrooms]</td>
                                    </tr>
                                    <tr>
                                      <td data-toggle="tooltip" data-html="true" title="Area" data-placement="top" class="area">[field_sp_area]</td>
                                      <td data-toggle="tooltip" data-html="true" title="Area Type" data-placement="top" class="area-type">[field_sp_area_type]</td>
                                      <td data-toggle="tooltip" data-html="true" title="Property Type" data-placement="top" class="property-type">[field_sp_property_type]</td>
                                     </tr>
                                   </tbody>
                                  </table>',
      ),
      'element_label_colon' => FALSE,
      'element_wrapper_class' => 'property-details',
    ); /* WAS: '' */
    $data['properties_index']->display['panel_pane_4']->display_options['inherit_panels_path'] = 1; /* WAS: '' */
    unset($data['properties_index']->display['default']->display_options['use_ajax']);
  }
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function feature_ia_roomify_search_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_properties_index'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_properties_index",
    "name" : "Properties Index",
    "index_id" : "properties_index",
    "suggester_id" : "server",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : {
      "suggester_configuration" : { "fields" : [ "name" ] },
      "min_length" : "1",
      "results" : 1,
      "custom" : { "display" : "default" },
      "submit_button_selector" : ":submit",
      "autosubmit" : 1
    },
    "rdf_mapping" : []
  }');
  return $items;
}
