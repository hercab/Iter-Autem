<?php
/**
 * @file
 * ia_guest_reports.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ia_guest_reports_default_rules_configuration() {
  $items = array();
  $items['roomify_accommodation_booking_send_mail_with_tour_guide'] = entity_import('rules_config', '{ "roomify_accommodation_booking_send_mail_with_tour_guide" : {
      "LABEL" : "Send e-mail with Tour Guide",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "4",
      "OWNER" : "rules",
      "TAGS" : [ "Commerce Checkout", "Guest Report", "Tour Guide" ],
      "REQUIRES" : [ "rules_conditional", "rules", "pet", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "LOOP" : {
            "USING" : { "list" : [ "commerce-order:commerce-line-items" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "data_is" : {
                        "data" : [ "list-item:type" ],
                        "value" : "roomify_accommodation_booking"
                      }
                    },
                    "DO" : [
                      { "entity_fetch" : {
                          "USING" : {
                            "type" : "bat_booking",
                            "id" : [ "list-item:commerce-booking-reference:booking-id" ]
                          },
                          "PROVIDE" : { "entity_fetched" : { "bat_booking" : "Bat Booking" } }
                        }
                      },
                      { "pet_action_send_pet" : {
                          "pet_name" : "tour_guide_pet",
                          "to_text" : "[commerce-order:mail]",
                          "to_account" : [ "" ],
                          "account_subs" : [ "commerce-order:owner" ],
                          "node_subs" : [ "" ]
                        }
                      }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  return $items;
}
