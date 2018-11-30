<?php
/**
 * @file
 * iterautem_publicity_content_type.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function iterautem_publicity_content_type_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'featured_publicity';
  $view->description = 'Featured Publicity in the area';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Featured Publicity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Featured Publicity';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 0;
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['mousewheel'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'properties_carousel';
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 'arrows',
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_sp_featured_image' => 0,
    'title' => 0,
  );
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'homepage_features',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_review_rating']['id'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['table'] = 'field_data_field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['field'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['label'] = '';
  $handler->display->display_options['fields']['field_review_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_rating']['element_wrapper_class'] = 'views-field-starting-price';
  $handler->display->display_options['fields']['field_review_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_review_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_class'] = 'views-field-name';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Entity translation: Property Short Description: translated */
  $handler->display->display_options['fields']['field_sp_short_description_et']['id'] = 'field_sp_short_description_et';
  $handler->display->display_options['fields']['field_sp_short_description_et']['table'] = 'field_data_field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description_et']['field'] = 'field_sp_short_description_et';
  $handler->display->display_options['fields']['field_sp_short_description_et']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description_et']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['use_alias'] = TRUE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'location' => 'location',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publicity' => 'publicity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  $handler->display->display_options['filters']['sticky']['group'] = 2;
  /* Filter criterion: Content: Rating (field_review_rating:rating) */
  $handler->display->display_options['filters']['field_review_rating_rating']['id'] = 'field_review_rating_rating';
  $handler->display->display_options['filters']['field_review_rating_rating']['table'] = 'field_data_field_review_rating';
  $handler->display->display_options['filters']['field_review_rating_rating']['field'] = 'field_review_rating_rating';
  $handler->display->display_options['filters']['field_review_rating_rating']['operator'] = '>=';
  $handler->display->display_options['filters']['field_review_rating_rating']['value']['value'] = '4';
  $handler->display->display_options['filters']['field_review_rating_rating']['group'] = 2;

  /* Display: Carousel */
  $handler = $view->new_display('panel_pane', 'Carousel', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Carousel of publicity items';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'none',
      'context' => 'entity:node.field_blog_area',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );
  $translatables['featured_publicity'] = array(
    t('Master'),
    t('Featured Publicity'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Carousel'),
    t('Carousel of publicity items'),
    t('View panes'),
  );
  $export['featured_publicity'] = $view;

  $view = new view();
  $view->name = 'my_bookmarks';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'My Bookmarks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bookmarks Places';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['use_more_always'] = TRUE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'infinite_scroll';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Relationship: Flags: bookmarks */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bookmarks';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Field: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'square',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Publicity short description */
  $handler->display->display_options['fields']['field_sp_short_description_et']['id'] = 'field_sp_short_description_et';
  $handler->display->display_options['fields']['field_sp_short_description_et']['table'] = 'field_data_field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description_et']['field'] = 'field_sp_short_description_et';
  $handler->display->display_options['fields']['field_sp_short_description_et']['ui_name'] = 'Publicity short description';
  $handler->display->display_options['fields']['field_sp_short_description_et']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description_et']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Body_description (Publicity, Activity) */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['ui_name'] = 'Body_description (Publicity, Activity)';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '120',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Description Location */
  $handler->display->display_options['fields']['field_location_description']['id'] = 'field_location_description';
  $handler->display->display_options['fields']['field_location_description']['table'] = 'field_data_field_location_description';
  $handler->display->display_options['fields']['field_location_description']['field'] = 'field_location_description';
  $handler->display->display_options['fields']['field_location_description']['ui_name'] = 'Description Location';
  $handler->display->display_options['fields']['field_location_description']['label'] = '';
  $handler->display->display_options['fields']['field_location_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_description']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_location_description']['settings'] = array(
    'trim_length' => '120',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Flags: Flag link */
  $handler->display->display_options['fields']['ops']['id'] = 'ops';
  $handler->display->display_options['fields']['ops']['table'] = 'flagging';
  $handler->display->display_options['fields']['ops']['field'] = 'ops';
  $handler->display->display_options['fields']['ops']['relationship'] = 'flag_content_rel';
  /* Field: Flags: Flagged */
  $handler->display->display_options['fields']['flagged']['id'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['table'] = 'flagging';
  $handler->display->display_options['fields']['flagged']['field'] = 'flagged';
  $handler->display->display_options['fields']['flagged']['relationship'] = 'flag_content_rel';
  $handler->display->display_options['fields']['flagged']['label'] = '';
  $handler->display->display_options['fields']['flagged']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flagged']['type'] = 'unicode-yes-no';
  $handler->display->display_options['fields']['flagged']['not'] = 0;
  /* Sort criterion: Content: Business Type (field_bussiness_type) */
  $handler->display->display_options['sorts']['field_bussiness_type_tid']['id'] = 'field_bussiness_type_tid';
  $handler->display->display_options['sorts']['field_bussiness_type_tid']['table'] = 'field_data_field_bussiness_type';
  $handler->display->display_options['sorts']['field_bussiness_type_tid']['field'] = 'field_bussiness_type_tid';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publicity' => 'publicity',
  );

  /* Display: My Bookmarks */
  $handler = $view->new_display('panel_pane', 'My Bookmarks', 'panel_my_bookmarks');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My Bookmarks';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'view-favorite-properties';
  $handler->display->display_options['display_description'] = 'Content bookmarked';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'custom_url';
  $handler->display->display_options['link_url'] = '/directory-search';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'flag_ops_entity' => 'flag_ops_entity',
    'field_sp_featured_image' => 'field_sp_featured_image',
    'title' => 'title',
    'field_sp_short_description_et' => 'field_sp_short_description_et',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'flag_ops_entity' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sp_featured_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sp_short_description_et' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = 'Bellow there are a list of places, by tourist destination, that have been bookmarked by you. This places will be taken in account, to build the tour guide that will send to  you after booking. You can visit the <a href="/directory-search">Directory</a> and pickup other places.';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'It has no marked place yet!. Visit the <a href="/directory-search">Directorio</a> and pickup some.';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Flags: bookmarks */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['flag'] = 'bookmarks';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'location' => 'location',
    'activity' => 0,
    'amenities' => 0,
    'area_type' => 0,
    'business_type' => 0,
    'category' => 0,
    'property_type' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Content: Flag link for entities */
  $handler->display->display_options['fields']['flag_ops_entity']['id'] = 'flag_ops_entity';
  $handler->display->display_options['fields']['flag_ops_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['flag_ops_entity']['field'] = 'flag_ops_entity';
  $handler->display->display_options['fields']['flag_ops_entity']['label'] = '';
  $handler->display->display_options['fields']['flag_ops_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['flag_ops_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flag_ops_entity']['flag'] = 'bookmarks';
  /* Field: Field: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['text'] = '[flag_ops_entity] 
[field_sp_featured_image]';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'square',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Short description */
  $handler->display->display_options['fields']['field_sp_short_description_et']['id'] = 'field_sp_short_description_et';
  $handler->display->display_options['fields']['field_sp_short_description_et']['table'] = 'field_data_field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description_et']['field'] = 'field_sp_short_description_et';
  $handler->display->display_options['fields']['field_sp_short_description_et']['ui_name'] = 'Short description';
  $handler->display->display_options['fields']['field_sp_short_description_et']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description_et']['type'] = 'text_trimmed';
  $handler->display->display_options['fields']['field_sp_short_description_et']['settings'] = array(
    'trim_length' => '120',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publicity' => 'publicity',
  );
  /* Filter criterion: Taxonomy term: Tourist Destination (field_tourist_destination_area) */
  $handler->display->display_options['filters']['field_tourist_destination_area_value']['id'] = 'field_tourist_destination_area_value';
  $handler->display->display_options['filters']['field_tourist_destination_area_value']['table'] = 'field_data_field_tourist_destination_area';
  $handler->display->display_options['filters']['field_tourist_destination_area_value']['field'] = 'field_tourist_destination_area_value';
  $handler->display->display_options['filters']['field_tourist_destination_area_value']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_tourist_destination_area_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;

  /* Display: Bookmark Content */
  $handler = $view->new_display('panel_pane', 'Bookmark Content', 'panel_bookmark_content');
  $handler->display->display_options['display_description'] = 'List Content to bookmarks';
  $handler->display->display_options['link_url'] = '/directory-search';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'name',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns_horizontal'] = '0';
  $handler->display->display_options['style_options']['columns_vertical'] = '4';
  $handler->display->display_options['style_options']['columns_xs'] = '12';
  $handler->display->display_options['style_options']['columns_sm'] = '12';
  $handler->display->display_options['style_options']['columns_md'] = '4';
  $handler->display->display_options['style_options']['columns_lg'] = '3';
  $handler->display->display_options['style_options']['column_class'] = 'pub-content';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = 'A continuacion le sugerimos algunos lugares que usted puede visitar en %1. Aqui puede encontrar Restaurantes, Bares, Excursiones... Si desea ver una lista completa de opciones visite el <a href="/directory-search/area/%1">Directorio</a>. Para ver los lugares marcados visite su <a href="/user?destination=user#tabs-dashboard-top-5">Dashboard</a>.';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Unfiltered text */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'En estos momentos no se ha registrado ningun lugar en %1.';
  $handler->display->display_options['empty']['area_text_custom']['tokenize'] = TRUE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['relationship'] = 'reverse_field_sp_area_node';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'location' => 'location',
    'activity' => 0,
    'amenities' => 0,
    'area_type' => 0,
    'business_type' => 0,
    'category' => 0,
    'property_type' => 0,
    'tags' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Flag link for entities */
  $handler->display->display_options['fields']['flag_ops_entity']['id'] = 'flag_ops_entity';
  $handler->display->display_options['fields']['flag_ops_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['flag_ops_entity']['field'] = 'flag_ops_entity';
  $handler->display->display_options['fields']['flag_ops_entity']['label'] = '';
  $handler->display->display_options['fields']['flag_ops_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['flag_ops_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flag_ops_entity']['flag'] = 'bookmarks';
  /* Field: Content: Business Type */
  $handler->display->display_options['fields']['field_bussiness_type']['id'] = 'field_bussiness_type';
  $handler->display->display_options['fields']['field_bussiness_type']['table'] = 'field_data_field_bussiness_type';
  $handler->display->display_options['fields']['field_bussiness_type']['field'] = 'field_bussiness_type';
  $handler->display->display_options['fields']['field_bussiness_type']['label'] = '';
  $handler->display->display_options['fields']['field_bussiness_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bussiness_type']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_bussiness_type']['alter']['text'] = '<div class="views-field-field-bussiness-type">[field_bussiness_type]</div>';
  $handler->display->display_options['fields']['field_bussiness_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bussiness_type']['type'] = 'i18n_taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_bussiness_type']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_bussiness_type']['delta_offset'] = '0';
  /* Field: Field: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['text'] = '[field_bussiness_type] 
[flag_ops_entity]
[field_sp_featured_image] 
';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'square',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Area */
  $handler->display->display_options['fields']['field_sp_area']['id'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['table'] = 'field_data_field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['field'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['label'] = '';
  $handler->display->display_options['fields']['field_sp_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_area']['element_wrapper_class'] = 'pull-left';
  $handler->display->display_options['fields']['field_sp_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_sp_area']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sp_area']['delta_offset'] = '0';
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_review_rating']['id'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['table'] = 'field_data_field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['field'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['label'] = '';
  $handler->display->display_options['fields']['field_review_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_rating']['element_wrapper_class'] = 'pull-right';
  $handler->display->display_options['fields']['field_review_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_review_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'none',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Short description */
  $handler->display->display_options['fields']['field_sp_short_description_et']['id'] = 'field_sp_short_description_et';
  $handler->display->display_options['fields']['field_sp_short_description_et']['table'] = 'field_data_field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description_et']['field'] = 'field_sp_short_description_et';
  $handler->display->display_options['fields']['field_sp_short_description_et']['ui_name'] = 'Short description';
  $handler->display->display_options['fields']['field_sp_short_description_et']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description_et']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_sp_short_description_et']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description_et']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description_et']['element_wrapper_class'] = 'pull-left';
  $handler->display->display_options['fields']['field_sp_short_description_et']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: destiny name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['ui_name'] = 'destiny name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'location' => 'location',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'tids';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publicity' => 'publicity',
  );
  /* Filter criterion: Taxonomy term: Tourist Destination (field_tourist_destination_area) */
  $handler->display->display_options['filters']['field_tourist_destination_area_value']['id'] = 'field_tourist_destination_area_value';
  $handler->display->display_options['filters']['field_tourist_destination_area_value']['table'] = 'field_data_field_tourist_destination_area';
  $handler->display->display_options['filters']['field_tourist_destination_area_value']['field'] = 'field_tourist_destination_area_value';
  $handler->display->display_options['filters']['field_tourist_destination_area_value']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['field_tourist_destination_area_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'tid' => array(
      'type' => 'none',
      'context' => 'entity:roomify_property.field-sp-area',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Has taxonomy term ID',
    ),
  );
  $translatables['my_bookmarks'] = array(
    t('Master'),
    t('Bookmarks Places'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Show More'),
    t('flag'),
    t('Flag link'),
    t('My Bookmarks'),
    t('Content bookmarked'),
    t('Bellow there are a list of places, by tourist destination, that have been bookmarked by you. This places will be taken in account, to build the tour guide that will send to  you after booking. You can visit the <a href="/directory-search">Directory</a> and pickup other places.'),
    t('It has no marked place yet!. Visit the <a href="/directory-search">Directorio</a> and pickup some.'),
    t('term'),
    t('[flag_ops_entity] 
[field_sp_featured_image]'),
    t('View panes'),
    t('Bookmark Content'),
    t('List Content to bookmarks'),
    t('A continuacion le sugerimos algunos lugares que usted puede visitar en %1. Aqui puede encontrar Restaurantes, Bares, Excursiones... Si desea ver una lista completa de opciones visite el <a href="/directory-search/area/%1">Directorio</a>. Para ver los lugares marcados visite su <a href="/user?destination=user#tabs-dashboard-top-5">Dashboard</a>.'),
    t('En estos momentos no se ha registrado ningun lugar en %1.'),
    t('<div class="views-field-field-bussiness-type">[field_bussiness_type]</div>'),
    t('[field_bussiness_type] 
[flag_ops_entity]
[field_sp_featured_image] 
'),
    t('All'),
  );
  $export['my_bookmarks'] = $view;

  $view = new view();
  $view->name = 'publicities_admin';
  $view->description = 'List publicity for admin';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publicities Admin';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publicities';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'footable';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_sp_featured_image' => 'field_sp_featured_image',
    'title' => 'title',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_sp_featured_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['footable'] = array(
    'striping' => 0,
    'expand' => 'title',
    'icon' => '',
    'icon_size' => '',
    'hide' => array(
      'field_sp_featured_image' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'title' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
      'edit_node' => array(
        'all' => 0,
        'phone' => 0,
        'tablet' => 0,
      ),
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div><a class="ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/node/add/publicity">+ Add Publicity</a></div>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_text';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2>You don\'t have any publicities yet! Please add a Publicity. </h2><div><a class="ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/node/add/publicity">+ Add Publicity</a></div>.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_text';
  /* Field: Field: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'field_data_field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'roomify_thumbnail_rectangled',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Author uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'node';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['uid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['uid']['validate']['type'] = 'php';
  $handler->display->display_options['arguments']['uid']['validate_options']['code'] = 'if (user_access(\'access content overview\')) {
        return FALSE;
        }
        else {
        return TRUE;
        }';
  $handler->display->display_options['arguments']['uid']['validate']['fail'] = 'ignore';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publicity' => 'publicity',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Publicity title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['title']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_field'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_dependent'] = 0;

  /* Display: Publicities View All */
  $handler = $view->new_display('page', 'Publicities View All', 'publicity_view_all');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['php_output'] = '<div><a class="ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href=<?php global $base_url; print $base_url . "/node/add/publicity" ?>>+ Add Publicity</a></div>
';
  $handler->display->display_options['path'] = 'admin/publicity/view-all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Publicities';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'roomify_dashboard_menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $translatables['publicities_admin'] = array(
    t('Master'),
    t('Publicities'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('<div><a class="ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/node/add/publicity">+ Add Publicity</a></div>'),
    t('<h2>You don\'t have any publicities yet! Please add a Publicity. </h2><div><a class="ctools-use-modal ctools-modal-roomify-dashboard-modal-style" href="/node/add/publicity">+ Add Publicity</a></div>.'),
    t('All'),
    t('Publicity title'),
    t('Publicities View All'),
  );
  $export['publicities_admin'] = $view;

  $view = new view();
  $view->name = 'publicity';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publicity';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'publicity' => 'publicity',
  );

  /* Display: Publicity Map */
  $handler = $view->new_display('panel_pane', 'Publicity Map', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_sp_location';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'nothing';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['hide_empty'] = 1;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '11';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['zoom']['scrollWheelZoom'] = 0;
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Field: Location */
  $handler->display->display_options['fields']['field_sp_location']['id'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['table'] = 'field_data_field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['field'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['label'] = '';
  $handler->display->display_options['fields']['field_sp_location']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_sp_location']['settings'] = array(
    'data' => 'full',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: location_1 */
  $handler->display->display_options['fields']['field_sp_location_1']['id'] = 'field_sp_location_1';
  $handler->display->display_options['fields']['field_sp_location_1']['table'] = 'field_data_field_sp_location';
  $handler->display->display_options['fields']['field_sp_location_1']['field'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location_1']['ui_name'] = 'location_1';
  $handler->display->display_options['fields']['field_sp_location_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_location_1']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_sp_location_1']['type'] = 'geofield_latlon';
  $handler->display->display_options['fields']['field_sp_location_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
    'labels' => 1,
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Field: Address */
  $handler->display->display_options['fields']['field_sp_address']['id'] = 'field_sp_address';
  $handler->display->display_options['fields']['field_sp_address']['table'] = 'field_data_field_sp_address';
  $handler->display->display_options['fields']['field_sp_address']['field'] = 'field_sp_address';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="address">[field_sp_address]</div>
<div class="point">[field_sp_location_1]</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $translatables['publicity'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Publicity Map'),
    t('Location'),
    t('Address'),
    t('<div class="address">[field_sp_address]</div>
<div class="point">[field_sp_location_1]</div>'),
    t('All'),
    t('View panes'),
  );
  $export['publicity'] = $view;

  $view = new view();
  $view->name = 'publicity_index';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_info_publicidad';
  $view->human_name = 'Publicity Index';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Map view';
  $handler->display->display_options['css_class'] = 'view-properties-index';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'Select any filter and click on Apply to see results',
          'format' => 'filtered_text',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Field: Indexed Content: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'roomify_4_3',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: Area */
  $handler->display->display_options['fields']['field_sp_area']['id'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_sp_area']['field'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_area']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_sp_area']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_sp_area']['bypass_access'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Business Type */
  $handler->display->display_options['fields']['field_bussiness_type']['id'] = 'field_bussiness_type';
  $handler->display->display_options['fields']['field_bussiness_type']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_bussiness_type']['field'] = 'field_bussiness_type';
  $handler->display->display_options['fields']['field_bussiness_type']['label'] = '';
  $handler->display->display_options['fields']['field_bussiness_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bussiness_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bussiness_type']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_bussiness_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_bussiness_type']['bypass_access'] = 0;
  /* Field: Indexed Content: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = 'Tel';
  $handler->display->display_options['fields']['field_telephone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_telephone']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_telephone']['settings'] = array(
    'title' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_telephone']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_telephone']['multi_type'] = 'ul';
  /* Field: Indexed Content: Work Hours */
  $handler->display->display_options['fields']['field_work_hours']['id'] = 'field_work_hours';
  $handler->display->display_options['fields']['field_work_hours']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_work_hours']['field'] = 'field_work_hours';
  $handler->display->display_options['fields']['field_work_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_hours']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_work_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_work_hours']['settings'] = array(
    'showclosed' => 'all',
    'date_first_day' => '0',
    'daysformat' => 'short',
    'hoursformat' => '1',
    'compress' => 1,
    'grouped' => 1,
    'closedformat' => 'Closed',
    'separator_days' => '<br />',
    'separator_grouped_days' => ' - ',
    'separator_day_hours' => ': ',
    'separator_hours_hours' => '-',
    'separator_more_hours' => ', ',
    'current_status' => array(
      'position' => 'after',
      'open_text' => 'Currently open!',
      'closed_text' => 'Currently closed',
    ),
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_work_hours']['delta_offset'] = '0';
  /* Field: Indexed Content: 24 hours / 7 days */
  $handler->display->display_options['fields']['field_full_time_work']['id'] = 'field_full_time_work';
  $handler->display->display_options['fields']['field_full_time_work']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_full_time_work']['field'] = 'field_full_time_work';
  $handler->display->display_options['fields']['field_full_time_work']['label'] = 'Work Hours';
  $handler->display->display_options['fields']['field_full_time_work']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_time_work']['empty'] = '[field_work_hours]';
  $handler->display->display_options['fields']['field_full_time_work']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_full_time_work']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: Publicity Short Description */
  $handler->display->display_options['fields']['field_sp_short_description']['id'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_sp_short_description']['field'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Contextual filter: Indexed Content: Area */
  $handler->display->display_options['arguments']['field_sp_area']['id'] = 'field_sp_area';
  $handler->display->display_options['arguments']['field_sp_area']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['arguments']['field_sp_area']['field'] = 'field_sp_area';
  $handler->display->display_options['arguments']['field_sp_area']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_sp_area']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_sp_area']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_sp_area']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_sp_area']['validate_options']['vocabularies'] = array(
    'location' => 'location',
  );
  $handler->display->display_options['arguments']['field_sp_area']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['field_sp_area']['not'] = 0;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Fulltext search';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext';

  /* Display: Publicity details */
  $handler = $view->new_display('panel_pane', 'Publicity details', 'panel_pane_publicity_details');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Details view';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'input_required' => 0,
      'text_input_required' => array(
        'text_input_required' => array(
          'value' => 'type',
          'format' => 'filtered_text',
        ),
      ),
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'secondary_collapse_override' => '0',
    ),
    'search_api_views_fulltext' => array(
      'bef_format' => 'default',
      'more_options' => array(
        'autosubmit' => 0,
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
          ),
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
        ),
      ),
    ),
  );
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Flag link for entities */
  $handler->display->display_options['fields']['flag_ops_entity']['id'] = 'flag_ops_entity';
  $handler->display->display_options['fields']['flag_ops_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['flag_ops_entity']['field'] = 'flag_ops_entity';
  $handler->display->display_options['fields']['flag_ops_entity']['label'] = '';
  $handler->display->display_options['fields']['flag_ops_entity']['exclude'] = TRUE;
  $handler->display->display_options['fields']['flag_ops_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['flag_ops_entity']['flag'] = 'bookmarks';
  /* Field: Indexed Content: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['alter']['text'] = '[flag_ops_entity]
[field_sp_featured_image]';
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'roomify_4_3',
    'image_link' => 'content',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: Area */
  $handler->display->display_options['fields']['field_sp_area']['id'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_sp_area']['field'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_area']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_sp_area']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_sp_area']['bypass_access'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Business Type */
  $handler->display->display_options['fields']['field_bussiness_type']['id'] = 'field_bussiness_type';
  $handler->display->display_options['fields']['field_bussiness_type']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_bussiness_type']['field'] = 'field_bussiness_type';
  $handler->display->display_options['fields']['field_bussiness_type']['label'] = '';
  $handler->display->display_options['fields']['field_bussiness_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bussiness_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bussiness_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_bussiness_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_bussiness_type']['bypass_access'] = 0;
  /* Field: Indexed Content: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_telephone']['alter']['text'] = 'Tel:  [field_telephone]';
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_telephone']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_telephone']['settings'] = array(
    'title' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_telephone']['delta_offset'] = '0';
  /* Field: Indexed Content: Work Hours */
  $handler->display->display_options['fields']['field_work_hours']['id'] = 'field_work_hours';
  $handler->display->display_options['fields']['field_work_hours']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_work_hours']['field'] = 'field_work_hours';
  $handler->display->display_options['fields']['field_work_hours']['label'] = '';
  $handler->display->display_options['fields']['field_work_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_hours']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_work_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_work_hours']['settings'] = array(
    'showclosed' => 'open',
    'date_first_day' => '0',
    'daysformat' => 'short',
    'hoursformat' => '1',
    'compress' => 1,
    'grouped' => 1,
    'closedformat' => 'Closed',
    'separator_days' => '<br />',
    'separator_grouped_days' => ' - ',
    'separator_day_hours' => ': ',
    'separator_hours_hours' => '-',
    'separator_more_hours' => ', ',
    'current_status' => array(
      'position' => 'after',
      'open_text' => 'Currently open!',
      'closed_text' => 'Currently closed',
    ),
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_work_hours']['delta_offset'] = '0';
  /* Field: Indexed Content: 24 hours / 7 days */
  $handler->display->display_options['fields']['field_full_time_work']['id'] = 'field_full_time_work';
  $handler->display->display_options['fields']['field_full_time_work']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_full_time_work']['field'] = 'field_full_time_work';
  $handler->display->display_options['fields']['field_full_time_work']['label'] = '';
  $handler->display->display_options['fields']['field_full_time_work']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_time_work']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_full_time_work']['alter']['text'] = '<span class="full-time">[field_full_time_work]</span>';
  $handler->display->display_options['fields']['field_full_time_work']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_time_work']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_full_time_work']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: Area Type */
  $handler->display->display_options['fields']['field_sp_area_type']['id'] = 'field_sp_area_type';
  $handler->display->display_options['fields']['field_sp_area_type']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_sp_area_type']['field'] = 'field_sp_area_type';
  $handler->display->display_options['fields']['field_sp_area_type']['label'] = '';
  $handler->display->display_options['fields']['field_sp_area_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_area_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_area_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_sp_area_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_sp_area_type']['bypass_access'] = 0;
  /* Field: Indexed Content: Node ID */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['separator'] = '';
  $handler->display->display_options['fields']['nid']['link_to_entity'] = 0;
  /* Field: Indexed Content: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = '<a class="book-now btn btn-default btn-primary" href="[url]">Details</a>';
  $handler->display->display_options['fields']['url']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['url']['alter']['alt'] = 'Details';
  $handler->display->display_options['fields']['url']['alter']['link_class'] = 'book-now btn btn-default btn-primary';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['display_as_link'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 0;
  /* Field: Indexed Content: Rating */
  $handler->display->display_options['fields']['field_review_rating']['id'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_review_rating']['field'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['label'] = '';
  $handler->display->display_options['fields']['field_review_rating']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_rating']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_review_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_review_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: Publicity Short Description */
  $handler->display->display_options['fields']['field_sp_short_description']['id'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_sp_short_description']['field'] = 'field_sp_short_description';
  $handler->display->display_options['fields']['field_sp_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_sp_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['max_length'] = '160';
  $handler->display->display_options['fields']['field_sp_short_description']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_sp_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_short_description']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Views: Views Conditional */
  $handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
  $handler->display->display_options['fields']['views_conditional']['label'] = '';
  $handler->display->display_options['fields']['views_conditional']['exclude'] = TRUE;
  $handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_conditional']['if'] = 'field_full_time_work';
  $handler->display->display_options['fields']['views_conditional']['condition'] = '5';
  $handler->display->display_options['fields']['views_conditional']['then'] = '[field_work_hours]
';
  $handler->display->display_options['fields']['views_conditional']['or'] = '[field_full_time_work]';
  $handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="name">[title]</div>
<table class="tags-publicity">
        <tbody>
		<tr>
		   <td data-toggle="tooltip" data-html="true" title="Bussiness Type" data-placement="top" class="property-type publicity-type">[field_bussiness_type]</td>
           <td data-toggle="tooltip" data-html="true" title="Area" data-placement="top" class="area">[field_sp_area]</td>
           <td data-toggle="tooltip" data-html="true" title="Area Type" data-placement="top" class="area-type">[field_sp_area_type]</td>
        </tr></tbody></table>
<div class="short-description">[field_sp_short_description]</div>
<table class="full-horary">
<tbody>
<tr>
<td data-toggle="tooltip" data-html="true" title="Telephone" data-placement="top" class="tel list-group-item-text"><span>Tel: </span> [field_telephone]</td>
</tr>
<tr><td data-toggle="tooltip" data-html="true" title="Work Horary" data-placement="top" class="full-horary list-group-item-text">[views_conditional] </td></tr>
   </tbody>
</table>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_wrapper_class'] = 'property-details';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = '<div class="reviews">[field_review_rating]</div>

 [url]';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing_1']['element_wrapper_class'] = 'property-details-2';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search by Name';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext_publicity';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['autocomplete_min_chars'] = '';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
  );

  /* Display: Publicity map */
  $handler = $view->new_display('panel_pane', 'Publicity map', 'panel_pane_publicity_map');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_sp_location';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'nothing';
  $handler->display->display_options['style_options']['map'] = 'google-roadmap';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '0';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '18';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Indexed Content: Search/Featured Image */
  $handler->display->display_options['fields']['field_sp_featured_image']['id'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_sp_featured_image']['field'] = 'field_sp_featured_image';
  $handler->display->display_options['fields']['field_sp_featured_image']['label'] = '';
  $handler->display->display_options['fields']['field_sp_featured_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_featured_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_featured_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_featured_image']['settings'] = array(
    'image_style' => 'homepage_features',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: Area */
  $handler->display->display_options['fields']['field_sp_area']['id'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_sp_area']['field'] = 'field_sp_area';
  $handler->display->display_options['fields']['field_sp_area']['label'] = '';
  $handler->display->display_options['fields']['field_sp_area']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_area']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_area']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_sp_area']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_sp_area']['bypass_access'] = 0;
  /* Field: Indexed Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Content: Business Type */
  $handler->display->display_options['fields']['field_bussiness_type']['id'] = 'field_bussiness_type';
  $handler->display->display_options['fields']['field_bussiness_type']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_bussiness_type']['field'] = 'field_bussiness_type';
  $handler->display->display_options['fields']['field_bussiness_type']['label'] = '';
  $handler->display->display_options['fields']['field_bussiness_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bussiness_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_bussiness_type']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_bussiness_type']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_bussiness_type']['bypass_access'] = 0;
  /* Field: Indexed Content: Telephone */
  $handler->display->display_options['fields']['field_telephone']['id'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_telephone']['field'] = 'field_telephone';
  $handler->display->display_options['fields']['field_telephone']['label'] = '';
  $handler->display->display_options['fields']['field_telephone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_telephone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_telephone']['type'] = 'telephone_link';
  $handler->display->display_options['fields']['field_telephone']['settings'] = array(
    'title' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_telephone']['delta_offset'] = '0';
  /* Field: Indexed Content: Work Hours */
  $handler->display->display_options['fields']['field_work_hours']['id'] = 'field_work_hours';
  $handler->display->display_options['fields']['field_work_hours']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_work_hours']['field'] = 'field_work_hours';
  $handler->display->display_options['fields']['field_work_hours']['label'] = '';
  $handler->display->display_options['fields']['field_work_hours']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_work_hours']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_work_hours']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_work_hours']['click_sort_column'] = 'day';
  $handler->display->display_options['fields']['field_work_hours']['settings'] = array(
    'showclosed' => 'open',
    'date_first_day' => '0',
    'daysformat' => 'short',
    'hoursformat' => '1',
    'compress' => 1,
    'grouped' => 1,
    'closedformat' => 'Closed',
    'separator_days' => '<br />',
    'separator_grouped_days' => ' - ',
    'separator_day_hours' => ': ',
    'separator_hours_hours' => '-',
    'separator_more_hours' => ', ',
    'current_status' => array(
      'position' => 'after',
      'open_text' => 'Currently open!',
      'closed_text' => 'Currently closed',
    ),
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_work_hours']['delta_offset'] = '0';
  /* Field: Indexed Content: 24 hours / 7 days */
  $handler->display->display_options['fields']['field_full_time_work']['id'] = 'field_full_time_work';
  $handler->display->display_options['fields']['field_full_time_work']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_full_time_work']['field'] = 'field_full_time_work';
  $handler->display->display_options['fields']['field_full_time_work']['label'] = '';
  $handler->display->display_options['fields']['field_full_time_work']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_full_time_work']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_full_time_work']['empty'] = '[field_work_hours]';
  $handler->display->display_options['fields']['field_full_time_work']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_full_time_work']['settings'] = array(
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: Location */
  $handler->display->display_options['fields']['field_sp_location']['id'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_sp_location']['field'] = 'field_sp_location';
  $handler->display->display_options['fields']['field_sp_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_sp_location']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_sp_location']['settings'] = array(
    'data' => 'full',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Indexed Content: Rating */
  $handler->display->display_options['fields']['field_review_rating']['id'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['fields']['field_review_rating']['field'] = 'field_review_rating';
  $handler->display->display_options['fields']['field_review_rating']['label'] = '';
  $handler->display->display_options['fields']['field_review_rating']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_review_rating']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_review_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_review_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="publicity-featured-image">[field_sp_featured_image]</div>
<div class="publicity-bussiness-type">[field_bussiness_type]</div>
[field_review_rating]
<div class="publicity-phone"><span>Tel:</span>[field_telephone]</div>
<div class="publicity-work-hours">[field_full_time_work]</div>


';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_info_publicidad';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';
  $handler->display->display_options['filters']['search_api_views_fulltext']['exposed'] = TRUE;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator_id'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['label'] = 'Search by Name';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['operator'] = 'search_api_views_fulltext_op';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['identifier'] = 'search_api_views_fulltext_publicity';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    30037204 => 0,
    4 => 0,
    5 => 0,
    6 => 0,
    7 => 0,
    8 => 0,
    163670334 => 0,
  );
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['autocomplete_min_chars'] = '';
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['search_api_views_fulltext']['expose']['autocomplete_dependent'] = 0;
  $handler->display->display_options['filters']['search_api_views_fulltext']['fields'] = array(
    'title' => 'title',
  );
  $translatables['publicity_index'] = array(
    t('Master'),
    t('Map view'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Select any filter and click on Apply to see results'),
    t('Advanced options'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Area'),
    t('Tel'),
    t('Work Hours'),
    t('[field_work_hours]'),
    t('All'),
    t('Fulltext search'),
    t('Publicity details'),
    t('Details view'),
    t('type'),
    t('[flag_ops_entity]
[field_sp_featured_image]'),
    t('Tel:  [field_telephone]'),
    t('<span class="full-time">[field_full_time_work]</span>'),
    t('.'),
    t('<a class="book-now btn btn-default btn-primary" href="[url]">Details</a>'),
    t('Details'),
    t('<div class="name">[title]</div>
<table class="tags-publicity">
        <tbody>
		<tr>
		   <td data-toggle="tooltip" data-html="true" title="Bussiness Type" data-placement="top" class="property-type publicity-type">[field_bussiness_type]</td>
           <td data-toggle="tooltip" data-html="true" title="Area" data-placement="top" class="area">[field_sp_area]</td>
           <td data-toggle="tooltip" data-html="true" title="Area Type" data-placement="top" class="area-type">[field_sp_area_type]</td>
        </tr></tbody></table>
<div class="short-description">[field_sp_short_description]</div>
<table class="full-horary">
<tbody>
<tr>
<td data-toggle="tooltip" data-html="true" title="Telephone" data-placement="top" class="tel list-group-item-text"><span>Tel: </span> [field_telephone]</td>
</tr>
<tr><td data-toggle="tooltip" data-html="true" title="Work Horary" data-placement="top" class="full-horary list-group-item-text">[views_conditional] </td></tr>
   </tbody>
</table>'),
    t('<div class="reviews">[field_review_rating]</div>

 [url]'),
    t('Search by Name'),
    t('View panes'),
    t('Publicity map'),
    t('Location'),
    t('<div class="publicity-featured-image">[field_sp_featured_image]</div>
<div class="publicity-bussiness-type">[field_bussiness_type]</div>
[field_review_rating]
<div class="publicity-phone"><span>Tel:</span>[field_telephone]</div>
<div class="publicity-work-hours">[field_full_time_work]</div>


'),
  );
  $export['publicity_index'] = $view;

  $view = new view();
  $view->name = 'publicity_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Publicity Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'slick';
  $handler->display->display_options['style_options']['slide_thumbnail'] = 'field_sp_gallery_2';
  $handler->display->display_options['style_options']['slide_field_wrapper'] = 1;
  $handler->display->display_options['style_options']['id'] = 'slick-asnavfor';
  $handler->display->display_options['style_options']['cache'] = '';
  $handler->display->display_options['style_options']['mousewheel'] = 0;
  $handler->display->display_options['style_options']['optionset'] = 'property_slideshow';
  $handler->display->display_options['style_options']['optionset_thumbnail'] = 'property_slideshow_nav';
  $handler->display->display_options['style_options']['override'] = 0;
  $handler->display->display_options['style_options']['overridables'] = array(
    'arrows' => 0,
    'autoplay' => 0,
    'dots' => 0,
    'draggable' => 0,
  );
  $handler->display->display_options['style_options']['skin'] = 'default';
  $handler->display->display_options['style_options']['skin_thumbnail'] = 'default';
  $handler->display->display_options['style_options']['slide_caption'] = array(
    'field_sp_gallery' => 0,
    'field_sp_gallery_1' => 0,
    'field_sp_gallery_2' => 0,
  );
  $handler->display->display_options['style_options']['slide_image'] = 'field_sp_gallery';
  $handler->display->display_options['style_options']['slide_overlay'] = '';
  $handler->display->display_options['style_options']['preserve_keys'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field: Image Gallery */
  $handler->display->display_options['fields']['field_sp_gallery']['id'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery']['table'] = 'field_data_field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery']['field'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery']['label'] = '';
  $handler->display->display_options['fields']['field_sp_gallery']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_gallery']['settings'] = array(
    'image_style' => 'roomify_1200x720',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sp_gallery']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery']['delta_offset'] = '0';
  /* Field: Field: Image Gallery */
  $handler->display->display_options['fields']['field_sp_gallery_1']['id'] = 'field_sp_gallery_1';
  $handler->display->display_options['fields']['field_sp_gallery_1']['table'] = 'field_data_field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery_1']['field'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery_1']['label'] = '';
  $handler->display->display_options['fields']['field_sp_gallery_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_gallery_1']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sp_gallery_1']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery_1']['delta_offset'] = '0';
  /* Field: Field: Image Gallery */
  $handler->display->display_options['fields']['field_sp_gallery_2']['id'] = 'field_sp_gallery_2';
  $handler->display->display_options['fields']['field_sp_gallery_2']['table'] = 'field_data_field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery_2']['field'] = 'field_sp_gallery';
  $handler->display->display_options['fields']['field_sp_gallery_2']['label'] = '';
  $handler->display->display_options['fields']['field_sp_gallery_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sp_gallery_2']['settings'] = array(
    'image_style' => 'slideshow_thumbnail',
    'image_link' => '',
    'conditions' => array(
      0 => array(
        'condition' => '',
      ),
    ),
  );
  $handler->display->display_options['fields']['field_sp_gallery_2']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sp_gallery_2']['delta_offset'] = '0';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $translatables['publicity_slideshow'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
  );
  $export['publicity_slideshow'] = $view;

  return $export;
}
