<?php
/**
 * @file
 * stock_threshold_notification_rule.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function stock_threshold_notification_rule_default_rules_configuration() {
  $items = array();
  $items['rules_notify_when_reorder_threshold_reached'] = entity_import('rules_config', '{ "rules_notify_when_reorder_threshold_reached" : {
      "LABEL" : "Notify when reorder threshold reached",
      "PLUGIN" : "reaction rule",
      "WEIGHT" : "1",
      "TAGS" : [ "commerce" ],
      "REQUIRES" : [ "rules", "entity" ],
      "ON" : [ "commerce_product_update" ],
      "IF" : [
        { "entity_has_field" : { "entity" : [ "commerce-product" ], "field" : "commerce_stock" } },
        { "data_is" : {
            "data" : [ "commerce-product:commerce-stock" ],
            "op" : "\\u003C",
            "value" : "10"
          }
        },
        { "data_is" : {
            "data" : [ "commerce-product-unchanged:commerce-stock" ],
            "op" : "\\u003E",
            "value" : "9"
          }
        }
      ],
      "DO" : [
        { "mail_to_users_of_role" : {
            "roles" : { "value" : { "3" : "3" } },
            "subject" : "[commerce-product:title] Stock Threshold Reached",
            "message" : "Time to re-order some [commerce-product:title].\\u000D\\u000A\\u000D\\u000AThe stock level is now [commerce-product:commerce-stock]."
          }
        }
      ]
    }
  }');
  return $items;
}
