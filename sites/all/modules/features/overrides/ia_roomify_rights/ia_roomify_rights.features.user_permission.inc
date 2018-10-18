<?php
/**
 * @file
 * ia_roomify_rights.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ia_roomify_rights_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create activity content'.
  $permissions['create activity content'] = array(
    'name' => 'create activity content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create homepage content'.
  $permissions['create homepage content'] = array(
    'name' => 'create homepage content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create landing_page content'.
  $permissions['create landing_page content'] = array(
    'name' => 'create landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create location content'.
  $permissions['create location content'] = array(
    'name' => 'create location content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create offer content'.
  $permissions['create offer content'] = array(
    'name' => 'create offer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create properties_list content'.
  $permissions['create properties_list content'] = array(
    'name' => 'create properties_list content',
    'roles' => array(
      'administrator' => 'administrator',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create review content'.
  $permissions['create review content'] = array(
    'name' => 'create review content',
    'roles' => array(
      'administrator' => 'administrator',
      'guest' => 'guest',
      'property owner' => 'property owner',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any activity content'.
  $permissions['delete any activity content'] = array(
    'name' => 'delete any activity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any homepage content'.
  $permissions['delete any homepage content'] = array(
    'name' => 'delete any homepage content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any landing_page content'.
  $permissions['delete any landing_page content'] = array(
    'name' => 'delete any landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any location content'.
  $permissions['delete any location content'] = array(
    'name' => 'delete any location content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any offer content'.
  $permissions['delete any offer content'] = array(
    'name' => 'delete any offer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any properties_list content'.
  $permissions['delete any properties_list content'] = array(
    'name' => 'delete any properties_list content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any review content'.
  $permissions['delete any review content'] = array(
    'name' => 'delete any review content',
    'roles' => array(
      'administrator' => 'administrator',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own activity content'.
  $permissions['delete own activity content'] = array(
    'name' => 'delete own activity content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own audio files'.
  $permissions['delete own audio files'] = array(
    'name' => 'delete own audio files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own bat_booking entities'.
  $permissions['delete own bat_booking entities'] = array(
    'name' => 'delete own bat_booking entities',
    'roles' => array(
      'administrator' => 'administrator',
      'property owner' => 'property owner',
    ),
    'module' => 'bat_booking',
  );

  // Exported permission: 'delete own bat_booking entities of bundle booking_com'.
  $permissions['delete own bat_booking entities of bundle booking_com'] = array(
    'name' => 'delete own bat_booking entities of bundle booking_com',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_booking',
  );

  // Exported permission: 'delete own bat_booking entities of bundle conversation_booking'.
  $permissions['delete own bat_booking entities of bundle conversation_booking'] = array(
    'name' => 'delete own bat_booking entities of bundle conversation_booking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_booking',
  );

  // Exported permission: 'delete own bat_booking entities of bundle ical'.
  $permissions['delete own bat_booking entities of bundle ical'] = array(
    'name' => 'delete own bat_booking entities of bundle ical',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_booking',
  );

  // Exported permission: 'delete own bat_booking entities of bundle roomify_accommodation_booking'.
  $permissions['delete own bat_booking entities of bundle roomify_accommodation_booking'] = array(
    'name' => 'delete own bat_booking entities of bundle roomify_accommodation_booking',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_booking',
  );

  // Exported permission: 'delete own bat_booking entities of bundle standard'.
  $permissions['delete own bat_booking entities of bundle standard'] = array(
    'name' => 'delete own bat_booking entities of bundle standard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_booking',
  );

  // Exported permission: 'delete own bat_event entities'.
  $permissions['delete own bat_event entities'] = array(
    'name' => 'delete own bat_event entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_event',
  );

  // Exported permission: 'delete own bat_event entities of bundle availability'.
  $permissions['delete own bat_event entities of bundle availability'] = array(
    'name' => 'delete own bat_event entities of bundle availability',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_event',
  );

  // Exported permission: 'delete own bat_event entities of bundle percentage_discount'.
  $permissions['delete own bat_event entities of bundle percentage_discount'] = array(
    'name' => 'delete own bat_event entities of bundle percentage_discount',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_event',
  );

  // Exported permission: 'delete own bat_event entities of bundle pricing'.
  $permissions['delete own bat_event entities of bundle pricing'] = array(
    'name' => 'delete own bat_event entities of bundle pricing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_event',
  );

  // Exported permission: 'delete own bat_type entities'.
  $permissions['delete own bat_type entities'] = array(
    'name' => 'delete own bat_type entities',
    'roles' => array(
      'administrator' => 'administrator',
      'property owner' => 'property owner',
    ),
    'module' => 'bat_unit',
  );

  // Exported permission: 'delete own bat_type entities of bundle home'.
  $permissions['delete own bat_type entities of bundle home'] = array(
    'name' => 'delete own bat_type entities of bundle home',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_unit',
  );

  // Exported permission: 'delete own bat_type entities of bundle room'.
  $permissions['delete own bat_type entities of bundle room'] = array(
    'name' => 'delete own bat_type entities of bundle room',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_unit',
  );

  // Exported permission: 'delete own bat_unit entities'.
  $permissions['delete own bat_unit entities'] = array(
    'name' => 'delete own bat_unit entities',
    'roles' => array(
      'administrator' => 'administrator',
      'property owner' => 'property owner',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'bat_unit',
  );

  // Exported permission: 'delete own bat_unit entities of bundle default'.
  $permissions['delete own bat_unit entities of bundle default'] = array(
    'name' => 'delete own bat_unit entities of bundle default',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bat_unit',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own document files'.
  $permissions['delete own document files'] = array(
    'name' => 'delete own document files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own entityform'.
  $permissions['delete own entityform'] = array(
    'name' => 'delete own entityform',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'entityform',
  );

  // Exported permission: 'delete own homepage content'.
  $permissions['delete own homepage content'] = array(
    'name' => 'delete own homepage content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own image files'.
  $permissions['delete own image files'] = array(
    'name' => 'delete own image files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete own landing_page content'.
  $permissions['delete own landing_page content'] = array(
    'name' => 'delete own landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own location content'.
  $permissions['delete own location content'] = array(
    'name' => 'delete own location content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own offer content'.
  $permissions['delete own offer content'] = array(
    'name' => 'delete own offer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own properties_list content'.
  $permissions['delete own properties_list content'] = array(
    'name' => 'delete own properties_list content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own review content'.
  $permissions['delete own review content'] = array(
    'name' => 'delete own review content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own roomify_channel_map entities'.
  $permissions['delete own roomify_channel_map entities'] = array(
    'name' => 'delete own roomify_channel_map entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'roomify_channel_map',
  );

  // Exported permission: 'delete own roomify_channel_map entities of bundle bookingcom'.
  $permissions['delete own roomify_channel_map entities of bundle bookingcom'] = array(
    'name' => 'delete own roomify_channel_map entities of bundle bookingcom',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'roomify_channel_map',
  );

  // Exported permission: 'delete own roomify_conversation entities'.
  $permissions['delete own roomify_conversation entities'] = array(
    'name' => 'delete own roomify_conversation entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'roomify_conversations',
  );

  // Exported permission: 'delete own roomify_conversation entities of bundle standard'.
  $permissions['delete own roomify_conversation entities of bundle standard'] = array(
    'name' => 'delete own roomify_conversation entities of bundle standard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'roomify_conversations',
  );

  // Exported permission: 'delete own roomify_property entities'.
  $permissions['delete own roomify_property entities'] = array(
    'name' => 'delete own roomify_property entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'roomify_property',
  );

  // Exported permission: 'delete own roomify_property entities of bundle casa_property'.
  $permissions['delete own roomify_property entities of bundle casa_property'] = array(
    'name' => 'delete own roomify_property entities of bundle casa_property',
    'roles' => array(
      'administrator' => 'administrator',
      'property owner' => 'property owner',
    ),
    'module' => 'roomify_property',
  );

  // Exported permission: 'delete own roomify_property entities of bundle locanda_property'.
  $permissions['delete own roomify_property entities of bundle locanda_property'] = array(
    'name' => 'delete own roomify_property entities of bundle locanda_property',
    'roles' => array(
      'administrator' => 'administrator',
      'property owner' => 'property owner',
    ),
    'module' => 'roomify_property',
  );

  // Exported permission: 'delete own roomify_rate entities'.
  $permissions['delete own roomify_rate entities'] = array(
    'name' => 'delete own roomify_rate entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'roomify_rate',
  );

  // Exported permission: 'delete own roomify_rate entities of bundle special_offer'.
  $permissions['delete own roomify_rate entities of bundle special_offer'] = array(
    'name' => 'delete own roomify_rate entities of bundle special_offer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'roomify_rate',
  );

  // Exported permission: 'delete own roomify_rate entities of bundle special_offer_percentage'.
  $permissions['delete own roomify_rate entities of bundle special_offer_percentage'] = array(
    'name' => 'delete own roomify_rate entities of bundle special_offer_percentage',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'roomify_rate',
  );

  // Exported permission: 'delete own roomify_rate entities of bundle standard'.
  $permissions['delete own roomify_rate entities of bundle standard'] = array(
    'name' => 'delete own roomify_rate entities of bundle standard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'roomify_rate',
  );

  // Exported permission: 'delete own roomify_rate_restriction entities'.
  $permissions['delete own roomify_rate_restriction entities'] = array(
    'name' => 'delete own roomify_rate_restriction entities',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'roomify_rate',
  );

  // Exported permission: 'delete own roomify_rate_restriction entities of bundle standard'.
  $permissions['delete own roomify_rate_restriction entities of bundle standard'] = array(
    'name' => 'delete own roomify_rate_restriction entities of bundle standard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'roomify_rate',
  );

  // Exported permission: 'delete own video files'.
  $permissions['delete own video files'] = array(
    'name' => 'delete own video files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any activity content'.
  $permissions['edit any activity content'] = array(
    'name' => 'edit any activity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any homepage content'.
  $permissions['edit any homepage content'] = array(
    'name' => 'edit any homepage content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any landing_page content'.
  $permissions['edit any landing_page content'] = array(
    'name' => 'edit any landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any location content'.
  $permissions['edit any location content'] = array(
    'name' => 'edit any location content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any offer content'.
  $permissions['edit any offer content'] = array(
    'name' => 'edit any offer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any properties_list content'.
  $permissions['edit any properties_list content'] = array(
    'name' => 'edit any properties_list content',
    'roles' => array(
      'administrator' => 'administrator',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any review content'.
  $permissions['edit any review content'] = array(
    'name' => 'edit any review content',
    'roles' => array(
      'administrator' => 'administrator',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own activity content'.
  $permissions['edit own activity content'] = array(
    'name' => 'edit own activity content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own homepage content'.
  $permissions['edit own homepage content'] = array(
    'name' => 'edit own homepage content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own landing_page content'.
  $permissions['edit own landing_page content'] = array(
    'name' => 'edit own landing_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own location content'.
  $permissions['edit own location content'] = array(
    'name' => 'edit own location content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own offer content'.
  $permissions['edit own offer content'] = array(
    'name' => 'edit own offer content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own properties_list content'.
  $permissions['edit own properties_list content'] = array(
    'name' => 'edit own properties_list content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own review content'.
  $permissions['edit own review content'] = array(
    'name' => 'edit own review content',
    'roles' => array(
      'administrator' => 'administrator',
      'guest' => 'guest',
      'property owner' => 'property owner',
    ),
    'module' => 'node',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'property owner' => 'property owner',
      'roomify manager' => 'roomify manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
