<?php

/**
 * @file
 * Contains a Views field handler to take care of displaying edit links
 * as fields.
 */

/**
 *
 */
class feature_ia_roomify_search_handler_total_rooms extends views_handler_field {

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
    $this->ensure_my_table();
    $this->add_additional_fields();
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    if (isset($values->_entity_properties['property_id'])) {
      if ($property_types = $values->_entity_properties['entity object']->property_bat_type_reference[LANGUAGE_NONE]) {
        $rooms = 0;
        foreach ($property_types as $type_id) {
          $type = bat_type_load($type_id['target_id']);

          if ($type->status) {
            if ($values->_entity_properties['entity object']->type == 'casa_property') {
              $type = bat_type_load($type->type_id);
              $wrapper = $type->wrapper(); //get wrapper
              $rooms = $wrapper->field_st_bedrooms->value();
            }else{
              $units_count = db_select('bat_units', 'b')
                  ->fields('b', array('unit_id'))
                  ->condition('type_id',$type->type_id,'=')
                  ->execute()
                  ->rowCount();
              $rooms += $units_count;
            }


          }
        }
        return $rooms;
      }
    }
    return;

  }

}
