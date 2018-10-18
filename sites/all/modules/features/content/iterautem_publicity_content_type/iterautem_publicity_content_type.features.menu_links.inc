<?php
/**
 * @file
 * iterautem_publicity_content_type.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function iterautem_publicity_content_type_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_directory:directory-search.
  $menu_links['main-menu_directory:directory-search'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'directory-search',
    'router_path' => 'directory-search',
    'link_title' => 'Directory',
    'options' => array(
      'identifier' => 'main-menu_directory:directory-search',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Directory');

  return $menu_links;
}
