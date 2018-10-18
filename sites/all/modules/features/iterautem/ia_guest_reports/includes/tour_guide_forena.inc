<?php
/**
 * Created by PhpStorm.
 * User: yunior
 * Date: 7/29/2018
 * Time: 2:55 PM
 */

function ia_guest_reports_forena_controls() {

    $controls[] = array('file' => 'renderers/FrxMap.inc',

        'class' => 'FrxMap',

    );
    $controls[] = array('file' => 'renderers/FrxImageStyle.inc',

        'class' => 'FrxImageStyle',

    );

    return $controls;

}

function ia_guest_reports_forena_repos_alter(&$repos) {
    $m_path = drupal_get_path('module', 'ia_guest_reports');
    $repos['guest'] = array(
        'path' => $m_path . '/data',
        'title' => 'Guest Repository',
        'access callback' => 'user_access',
        'user callback' => 'forena_current_user_id',
        'data provider' => 'FrxDrupal',
    );
}

function ia_guest_reports_forena_report_directory() {
    return drupal_get_path('module', 'ia_guest_reports') . '/reports';
}

function ia_guest_reports_forena_parameters_alter($report_name, &$parms) {
    // Set a data context for use in reports
    if ($report_name == "tour/tour_guide" && !empty($parms['order_id'])){

        $order_id = $parms['order_id'];
        $order = commerce_order_load($order_id);

        $items = get_items_order($order);
        $parms['areas'] = $items['areas'];
        $parms['properties'] = $items['casas'];
        $parms['order_date'] = $order->placed;

        $site_email['site_email'] = variable_get('site_mail', '');
        Frx::Data()->setContext('mail_from', $site_email);
    }

}

function ia_guest_reports_forena_data_alter(&$data, $context) {
    /*if ($context['provider'] == 'guest' && $context['block']=="guest/areas" && $data ) {

    }*/
}

/**
 * @param $order_id
 * @return array conteniendo las casas y las areas que contiene la order
 */

function get_items_order($order){

    $wrapper = entity_metadata_wrapper('commerce_order', $order);
    $casas = array();
    $areas = array();

    $query = new EntityFieldQuery();
    $result = $query->entityCondition('entity_type', 'taxonomy_term')
        ->entityCondition('bundle', 'location')
        ->fieldCondition('field_tourist_destination_area', 'value', 1, '=')
        ->execute();

    $destiny = !empty($result['taxonomy_term']) ? array_keys($result['taxonomy_term']) : array();

    foreach ($wrapper->commerce_line_items as $delta => $line_item_wrapper){
        $type = $line_item_wrapper->commerce_product->value()->type;
        if($type=='roomify_accommodation_product'){

            $bat_type = bat_type_load($line_item_wrapper->commerce_booking_reference->booking_event_reference->event_bat_unit_reference->type_id->value());
            $property_reference = field_get_items('bat_type', $bat_type, 'field_st_property_reference');
            $property = roomify_property_load($property_reference[0]['target_id']);

            $aid = array();

            foreach($property->field_sp_area['und'] as $value){
                $aid[] = $value['tid'];
            }

            $areas[] = array_values(array_intersect($aid, $destiny))[0];
            $casas[] = $property->property_id;
        }
    }


    return array('casas' => array_unique($casas, SORT_NUMERIC), 'areas' => array_unique($areas, SORT_NUMERIC));

}