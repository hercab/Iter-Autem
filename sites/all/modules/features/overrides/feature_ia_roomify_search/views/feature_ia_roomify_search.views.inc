<?php

function feature_ia_roomify_search_views_data_alter(&$data) {
   
    $data['search_api_index_properties_index']['property_types'] = array(
        'field' => array(
            'title' => t('Types List'),
            'help' => t('Display all types with info.'),
            'handler' => 'feature_ia_roomify_search_handler_type_property_types',
        ),

    );
    $data['search_api_index_properties_index']['total_bathrooms'] = array(
        'field' => array(
            'title' => t('Total bathrooms'),
            'help' => t('Display total bathrooms info.'),
            'handler' => 'feature_ia_roomify_search_handler_total_bathrooms',
        ),

    );
    $data['search_api_index_properties_index']['total_single_beds'] = array(
        'field' => array(
            'title' => t('Total Single Beds'),
            'help' => t('Display total single beds.'),
            'handler' => 'feature_ia_roomify_search_handler_total_single_beds',
        ),
    );
    $data['search_api_index_properties_index']['total_double_beds'] = array(
        'field' => array(
            'title' => t('Total Double Beds'),
            'help' => t('Display total double beds.'),
            'handler' => 'feature_ia_roomify_search_handler_total_double_beds',
        ),
    );
    $data['search_api_index_properties_index']['roomify_search_handler_property_capacity'] = array (
        'field' => array(
            'title' => t('The Property Capacity'),
            'help' => t('A sum of the capacities of the single room types.'),
            'handler' => 'feature_ia_roomify_search_handler_property_capacity',
        ),
    );
    $data['search_api_index_properties_index']['total_rooms'] = array (
        'field' => array(
            'title' => t('Total Rooms'),
            'help' => t('Display total rooms.'),
            'handler' => 'feature_ia_roomify_search_handler_total_rooms',
        ),
    );
    }