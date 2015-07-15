<?php
/**
 * @file
 * icc_commerce.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function icc_commerce_default_rules_configuration() {
  $items = array();
  $items['rules_update_price_to_donation_amount'] = entity_import('rules_config', '{ "rules_update_price_to_donation_amount" : {
      "LABEL" : "Update price to donation amount",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "commerce_line_item", "commerce_product_reference" ],
      "ON" : { "commerce_product_calculate_sell_price" : [] },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-line-item" ], "field" : "field_donation_amount" } }
      ],
      "DO" : [
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "commerce-line-item:field-donation-amount" ],
              "op" : "*",
              "input_2" : "100"
            },
            "PROVIDE" : { "result" : { "donation_in_dollars" : "Donation amount in dollars" } }
          }
        },
        { "commerce_line_item_unit_price_amount" : {
            "commerce_line_item" : [ "commerce_line_item" ],
            "amount" : [ "donation-in-dollars" ],
            "component_name" : "base_price",
            "round_mode" : "1"
          }
        }
      ]
    }
  }');
  return $items;
}
