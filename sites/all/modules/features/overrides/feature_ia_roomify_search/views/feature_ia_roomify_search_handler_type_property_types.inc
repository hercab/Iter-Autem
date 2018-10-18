<?php
/**
 * Created by PhpStorm.
 * User: yunior
 * Date: 8/24/2018
 * Time: 2:32 PM
 */

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields.
 */


class feature_ia_roomify_search_handler_type_property_types extends views_handler_field {

    /**
     * {@inheritdoc}
     */
    public function construct() {
        parent::construct();
    }

    /**
     * {@inheritdoc}
     */
    public function query() {
        // Do nothing -- to override the parent query.
    }

    /**
     * {@inheritdoc}
     */
    public function render($values) {
        $types = '';

        if ($property_types = $values->_entity_properties['entity object']->property_bat_type_reference[LANGUAGE_NONE]) {
            $types = '<div class="types">
                <table>
                  <thead>
                    <tr class="type-icons">
                      <th class="name icon">n</th>
                      <th data-toggle="tooltip" data-html="true" title="" data-placement="top" data-original-title="Max Capacity" class="capacity icon">n</th>
                      <th data-toggle="tooltip" data-html="true" title="" data-placement="top" data-original-title="Single Beds" class="bedrooms single-beds icon">n</th>
                      <th data-toggle="tooltip" data-html="true" title="" data-placement="top" data-original-title="Double Beds" class="bedrooms double-beds icon">n</th>
                      <th data-toggle="tooltip" data-html="true" title="" data-placement="top" data-original-title="Price" class="price icon">n</th>
                    </tr>
                  </thead>
                  <tbody>';

            foreach ($property_types as $type_id) {
                $type = bat_type_load($type_id['target_id']);

                if ($type->status) {
                    $name = $type->name;
                    $capacity = field_get_items('bat_type', $type, 'field_st_max_capacity');
                    $single_beds = field_get_items('bat_type', $type, 'field_st_single_bed');
                    $double_beds = field_get_items('bat_type', $type, 'field_st_double_bed');
//                    $beds = $single_beds[0]['value'] + $double_beds[0]['value'];
                    $price = field_get_items('bat_type', $type, 'field_st_default_price');

                    // Build the types.
                    $types .= '<tr class="type-row">
                      <td class="name row-element">' . $name . '</td>
                      <td data-toggle="tooltip" data-html="true" title="" data-placement="top" data-original-title="Max Capacity" class="capacity row-element">' . $capacity[0]['value'] . '</td>
                      <td data-toggle="tooltip" data-html="true" title="" data-placement="top" data-original-title="Single Beds" class="bedrooms row-element">' . $single_beds[0]['value'] . '</td>
                      <td data-toggle="tooltip" data-html="true" title="" data-placement="top" data-original-title="Double Beds" class="bedrooms row-element">' . $double_beds[0]['value'] . '</td>
                      <td data-toggle="tooltip" data-html="true" title="" data-placement="top" data-original-title="Price" class="price row-element">' . commerce_currency_format($price[0]['amount'], $price[0]['currency_code']) . '</td>
                    </tr>';
                }
            }

            $types .= '</tbody></table></div>';
        }

        return $types;
    }

}
