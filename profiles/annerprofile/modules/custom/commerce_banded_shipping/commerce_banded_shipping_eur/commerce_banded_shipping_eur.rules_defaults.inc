<?php
/**
 * @file
 * commerce_banded_shipping_eur.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function commerce_banded_shipping_eur_default_rules_configuration() {
  $items = array();
  $items['rules_calculate_shipping_based_on_weight_bands_eur'] = entity_import('rules_config', '{ "rules_calculate_shipping_based_on_weight_bands_eur" : {
      "LABEL" : "Calculate Shipping Based On Weight Bands EUR",
      "PLUGIN" : "reaction rule",
      "TAGS" : [ "shipping" ],
      "REQUIRES" : [ "rules", "commerce_calculate_weight", "commerce_shipping" ],
      "ON" : [ "commerce_shipping_collect_rates" ],
      "IF" : [
        { "data_is" : { "data" : [ "site:commerce-currency" ], "value" : "EUR" } }
      ],
      "DO" : [
        { "commerce_calculate_weight_action_calculate_total_weight" : {
            "USING" : { "commerce_order" : [ "commerce_order" ] },
            "PROVIDE" : { "commerce_order_total_weight" : { "commerce_order_total_weight" : "Commerce Total Order Weight" } }
          }
        },
        { "component_rules_check_total_weight_0_eur" : {
            "commerce_order" : [ "commerce_order" ],
            "total_order_weight" : [ "commerce-order-total-weight" ]
          }
        },
        { "component_rules_check_total_weight_under_40g_eur" : {
            "commerce_order" : [ "commerce_order" ],
            "total_order_weight" : [ "commerce-order-total-weight" ]
          }
        },
        { "component_rules_check_total_weight_under_220g_eur" : {
            "commerce_order" : [ "commerce_order" ],
            "total_order_weight" : [ "commerce-order-total-weight" ]
          }
        },
        { "component_rules_check_total_weight_under_470g_eur" : {
            "commerce_order" : [ "commerce_order" ],
            "total_order_weight" : [ "commerce-order-total-weight" ]
          }
        },
        { "component_rules_check_total_weight_under_950g_eur" : {
            "commerce_order" : [ "commerce_order" ],
            "total_order_weight" : [ "commerce-order-total-weight" ]
          }
        },
        { "component_rules_check_total_weight_under_1900g_eur" : {
            "commerce_order" : [ "commerce_order" ],
            "total_order_weight" : [ "commerce-order-total-weight" ]
          }
        },
        { "component_rules_check_total_weight_over_1900g_eur" : {
            "commerce_order" : [ "commerce_order" ],
            "total_order_weight" : [ "commerce-order-total-weight" ]
          }
        }
      ]
    }
  }');
  $items['rules_check_country_over_1900g_eur'] = entity_import('rules_config', '{ "rules_check_country_over_1900g_eur" : {
      "LABEL" : "Check Country over 1900g EUR",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "commerce_order", "commerce_shipping", "rules" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "commerce_order_compare_address" : {
                  "commerce_order" : [ "commerce_order" ],
                  "address_field" : "commerce_customer_shipping|commerce_customer_address",
                  "address_component" : "country",
                  "value" : "IE"
                }
              }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "ie_over_1900g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check Ireland"
          }
        },
        { "RULE" : {
            "IF" : [
              { "component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "eu_over_1900g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check Europe"
          }
        },
        { "RULE" : {
            "IF" : [
              { "NOT commerce_order_compare_address" : {
                  "commerce_order" : [ "commerce_order" ],
                  "address_field" : "commerce_customer_shipping|commerce_customer_address",
                  "address_component" : "country",
                  "value" : "IE"
                }
              },
              { "NOT component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "world_over_1900g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check rest of world"
          }
        }
      ]
    }
  }');
  $items['rules_check_country_under_1900g_eur'] = entity_import('rules_config', '{ "rules_check_country_under_1900g_eur" : {
      "LABEL" : "Check Country Under 1900g EUR",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "commerce_order", "commerce_shipping", "rules" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "commerce_order_compare_address" : {
                  "commerce_order" : [ "commerce_order" ],
                  "address_field" : "commerce_customer_shipping|commerce_customer_address",
                  "address_component" : "country",
                  "value" : "IE"
                }
              }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "ie_under_1900g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check Ireland"
          }
        },
        { "RULE" : {
            "IF" : [
              { "component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "eu_under_1900g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check Europe"
          }
        },
        { "RULE" : {
            "IF" : [
              { "NOT commerce_order_compare_address" : {
                  "commerce_order" : [ "commerce_order" ],
                  "address_field" : "commerce_customer_shipping|commerce_customer_address",
                  "address_component" : "country",
                  "value" : "IE"
                }
              },
              { "NOT component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "world_under_1900g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check rest of world"
          }
        }
      ]
    }
  }');
  $items['rules_check_country_under_220g_eur'] = entity_import('rules_config', '{ "rules_check_country_under_220g_eur" : {
      "LABEL" : "Check Country Under 220g EUR",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "commerce_order", "commerce_shipping", "rules" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "commerce_order_compare_address" : {
                  "commerce_order" : [ "commerce_order" ],
                  "address_field" : "commerce_customer_shipping|commerce_customer_address",
                  "address_component" : "country",
                  "value" : "IE"
                }
              }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "ie_under_220g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check Ireland"
          }
        },
        { "RULE" : {
            "IF" : [
              { "component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "eu_under_220g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check Europe"
          }
        },
        { "RULE" : {
            "IF" : [
              { "NOT commerce_order_compare_address" : {
                  "commerce_order" : [ "commerce_order" ],
                  "address_field" : "commerce_customer_shipping|commerce_customer_address",
                  "address_component" : "country",
                  "value" : "IE"
                }
              },
              { "NOT component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "world_under_220g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check rest of world"
          }
        }
      ]
    }
  }');
  $items['rules_check_country_under_40g_eur'] = entity_import('rules_config', '{ "rules_check_country_under_40g_eur" : {
      "LABEL" : "Check Country Under 40g EUR",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "commerce_order", "commerce_shipping", "rules" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "commerce_order_compare_address" : {
                  "commerce_order" : [ "commerce_order" ],
                  "address_field" : "commerce_customer_shipping|commerce_customer_address",
                  "address_component" : "country",
                  "value" : "IE"
                }
              }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "ie_under_40g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check Ireland"
          }
        },
        { "RULE" : {
            "IF" : [
              { "component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "eu_under_40g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check Europe"
          }
        },
        { "RULE" : {
            "IF" : [
              { "NOT commerce_order_compare_address" : {
                  "commerce_order" : [ "commerce_order" ],
                  "address_field" : "commerce_customer_shipping|commerce_customer_address",
                  "address_component" : "country",
                  "value" : "IE"
                }
              },
              { "NOT component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "world_under_40g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check rest of world"
          }
        }
      ]
    }
  }');
  $items['rules_check_country_under_470g_eur'] = entity_import('rules_config', '{ "rules_check_country_under_470g_eur" : {
      "LABEL" : "Check Country Under 470g EUR",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "commerce_order", "commerce_shipping", "rules" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "commerce_order_compare_address" : {
                  "commerce_order" : [ "commerce_order" ],
                  "address_field" : "commerce_customer_shipping|commerce_customer_address",
                  "address_component" : "country",
                  "value" : "IE"
                }
              }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "ie_under_470g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check Ireland"
          }
        },
        { "RULE" : {
            "IF" : [
              { "component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "eu_under_470g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check Europe"
          }
        },
        { "RULE" : {
            "IF" : [
              { "NOT commerce_order_compare_address" : {
                  "commerce_order" : [ "commerce_order" ],
                  "address_field" : "commerce_customer_shipping|commerce_customer_address",
                  "address_component" : "country",
                  "value" : "IE"
                }
              },
              { "NOT component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "world_under_470g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check rest of world"
          }
        }
      ]
    }
  }');
  $items['rules_check_country_under_950g_eur'] = entity_import('rules_config', '{ "rules_check_country_under_950g_eur" : {
      "LABEL" : "Check Country Under 950g EUR",
      "PLUGIN" : "rule set",
      "REQUIRES" : [ "commerce_order", "commerce_shipping", "rules" ],
      "USES VARIABLES" : { "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" } },
      "RULES" : [
        { "RULE" : {
            "IF" : [
              { "commerce_order_compare_address" : {
                  "commerce_order" : [ "commerce_order" ],
                  "address_field" : "commerce_customer_shipping|commerce_customer_address",
                  "address_component" : "country",
                  "value" : "IE"
                }
              }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "ie_under_950g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check Ireland"
          }
        },
        { "RULE" : {
            "IF" : [
              { "component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "eu_under_950g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check Europe"
          }
        },
        { "RULE" : {
            "IF" : [
              { "NOT commerce_order_compare_address" : {
                  "commerce_order" : [ "commerce_order" ],
                  "address_field" : "commerce_customer_shipping|commerce_customer_address",
                  "address_component" : "country",
                  "value" : "IE"
                }
              },
              { "NOT component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
            ],
            "DO" : [
              { "commerce_shipping_service_rate_order" : {
                  "shipping_service_name" : "world_under_950g_eur",
                  "commerce_order" : [ "commerce_order" ]
                }
              }
            ],
            "LABEL" : "Check rest of world"
          }
        }
      ]
    }
  }');
  $items['rules_check_total_weight_0_eur'] = entity_import('rules_config', '{ "rules_check_total_weight_0_eur" : {
      "LABEL" : "Check total weight 0 EUR",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules", "commerce_shipping" ],
      "USES VARIABLES" : {
        "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" },
        "total_order_weight" : { "label" : "Total order weight", "type" : "integer" }
      },
      "IF" : [ { "data_is" : { "data" : [ "total-order-weight" ], "value" : "0" } } ],
      "DO" : [
        { "commerce_shipping_service_rate_order" : {
            "shipping_service_name" : "free_shipping_eur",
            "commerce_order" : [ "commerce_order" ]
          }
        }
      ]
    }
  }');
  $items['rules_check_total_weight_over_1900g_eur'] = entity_import('rules_config', '{ "rules_check_total_weight_over_1900g_eur" : {
      "LABEL" : "Check total weight over 1900g EUR",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" },
        "total_order_weight" : { "label" : "Total order weight", "type" : "integer" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "total-order-weight" ], "op" : "\\u003E", "value" : "1899" } }
      ],
      "DO" : [
        { "component_rules_check_country_over_1900g_eur" : { "commerce_order" : [ "commerce_order" ] } }
      ]
    }
  }');
  $items['rules_check_total_weight_over_1900g_surcharge_eur'] = entity_import('rules_config', '{ "rules_check_total_weight_over_1900g_surcharge_eur" : {
      "LABEL" : "Check total weight over 1900g (surcharge) EUR",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" },
        "total_order_weight" : { "label" : "Total order weight", "type" : "integer" },
        "commerce_line_item" : { "label" : "LIne item", "type" : "commerce_line_item" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "total-order-weight" ], "op" : "\\u003E", "value" : "1899" } }
      ],
      "DO" : [
        { "component_rules_ie_extra_shipping_by_weight_eur" : {
            "USING" : {
              "line_item" : [ "commerce-line-item" ],
              "commerce_order" : [ "commerce_order" ]
            },
            "PROVIDE" : { "shipping_surcharge" : { "shipping_surcharge" : "Shipping surcharge" } }
          }
        },
        { "component_rules_eu_extra_shipping_by_weight_eur" : {
            "USING" : {
              "commerce_order" : [ "commerce_order" ],
              "line_item" : [ "commerce-line-item" ]
            },
            "PROVIDE" : { "shipping_surcharge" : { "eu_shipping_surcharge" : "Shipping surcharge" } }
          }
        },
        { "component_rules_world_extra_shipping_by_weight_eur" : {
            "USING" : {
              "commerce_order" : [ "commerce_order" ],
              "line_item" : [ "commerce-line-item" ]
            },
            "PROVIDE" : { "shipping_surcharge" : { "world_shipping_surcharge" : "Shipping surcharge" } }
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "commerce_order", "total_order_weight", "commerce_line_item" ]
    }
  }');
  $items['rules_check_total_weight_under_1900g_eur'] = entity_import('rules_config', '{ "rules_check_total_weight_under_1900g_eur" : {
      "LABEL" : "Check total weight under 1900g EUR",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" },
        "total_order_weight" : { "label" : "Total order weight", "type" : "integer" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "total-order-weight" ], "op" : "\\u003C", "value" : "1900" } },
        { "data_is" : { "data" : [ "total-order-weight" ], "op" : "\\u003E", "value" : "949" } }
      ],
      "DO" : [
        { "component_rules_check_country_under_1900g_eur" : { "commerce_order" : [ "commerce_order" ] } }
      ]
    }
  }');
  $items['rules_check_total_weight_under_220g_eur'] = entity_import('rules_config', '{ "rules_check_total_weight_under_220g_eur" : {
      "LABEL" : "Check total weight under 220g EUR",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" },
        "total_order_weight" : { "label" : "Total order weight", "type" : "integer" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "total-order-weight" ], "op" : "\\u003E", "value" : "39" } },
        { "data_is" : { "data" : [ "total-order-weight" ], "op" : "\\u003C", "value" : "220" } }
      ],
      "DO" : [
        { "component_rules_check_country_under_220g_eur" : { "commerce_order" : [ "commerce_order" ] } }
      ]
    }
  }');
  $items['rules_check_total_weight_under_40g_eur'] = entity_import('rules_config', '{ "rules_check_total_weight_under_40g_eur" : {
      "LABEL" : "Check total weight under 40g EUR",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" },
        "total_order_weight" : { "label" : "Total order weight", "type" : "integer" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "total-order-weight" ], "op" : "\\u003C", "value" : "40" } },
        { "data_is" : { "data" : [ "total-order-weight" ], "op" : "\\u003E", "value" : "0" } }
      ],
      "DO" : [
        { "component_rules_check_country_under_40g_eur" : { "commerce_order" : [ "commerce_order" ] } }
      ]
    }
  }');
  $items['rules_check_total_weight_under_470g_eur'] = entity_import('rules_config', '{ "rules_check_total_weight_under_470g_eur" : {
      "LABEL" : "Check total weight under 470g EUR",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" },
        "total_order_weight" : { "label" : "Total order weight", "type" : "integer" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "total-order-weight" ], "op" : "\\u003C", "value" : "470" } },
        { "data_is" : { "data" : [ "total-order-weight" ], "op" : "\\u003E", "value" : "219" } }
      ],
      "DO" : [
        { "component_rules_check_country_under_470g_eur" : { "commerce_order" : [ "commerce_order" ] } }
      ]
    }
  }');
  $items['rules_check_total_weight_under_950g_eur'] = entity_import('rules_config', '{ "rules_check_total_weight_under_950g_eur" : {
      "LABEL" : "Check total weight under 950g EUR",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules" ],
      "USES VARIABLES" : {
        "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" },
        "total_order_weight" : { "label" : "Total order weight", "type" : "integer" }
      },
      "IF" : [
        { "data_is" : { "data" : [ "total-order-weight" ], "op" : "\\u003C", "value" : "950" } },
        { "data_is" : { "data" : [ "total-order-weight" ], "op" : "\\u003E", "value" : "469" } }
      ],
      "DO" : [
        { "component_rules_check_country_under_950g_eur" : { "commerce_order" : [ "commerce_order" ] } }
      ]
    }
  }');
  $items['rules_eu_extra_shipping_by_weight_eur'] = entity_import('rules_config', '{ "rules_eu_extra_shipping_by_weight_eur" : {
      "LABEL" : "EU extra shipping by weight EUR",
      "PLUGIN" : "rule",
      "REQUIRES" : [ "rules", "commerce_calculate_weight", "commerce_line_item" ],
      "USES VARIABLES" : {
        "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" },
        "shipping_surcharge" : {
          "label" : "Shipping surcharge",
          "type" : "decimal",
          "parameter" : false
        },
        "line_item" : { "label" : "line item", "type" : "commerce_line_item" }
      },
      "IF" : [
        { "component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } }
      ],
      "DO" : [
        { "commerce_calculate_weight_action_calculate_total_weight" : {
            "USING" : { "commerce_order" : [ "commerce_order" ] },
            "PROVIDE" : { "commerce_order_total_weight" : { "commerce_order_total_weight" : "Commerce Total Order Weight" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "commerce-order-total-weight" ],
              "op" : "-",
              "input_2" : "1900"
            },
            "PROVIDE" : { "result" : { "extra_weight" : "Extra weight" } }
          }
        },
        { "data_calc" : {
            "USING" : { "input_1" : [ "extra-weight" ], "op" : "*", "input_2" : "0.0025" },
            "PROVIDE" : { "result" : { "euros_surcharge" : "euros-surcharge" } }
          }
        },
        { "data_set" : { "data" : [ "shipping-surcharge" ], "value" : [ "euros-surcharge" ] } },
        { "commerce_line_item_unit_price_add" : {
            "commerce_line_item" : [ "line-item" ],
            "amount" : [ "euros-surcharge" ],
            "component_name" : "flat_rate_eu_over_1900g_eur",
            "round_mode" : "1"
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "shipping_surcharge" ]
    }
  }');
  $items['rules_ie_extra_shipping_by_weight_eur'] = entity_import('rules_config', '{ "rules_ie_extra_shipping_by_weight_eur" : {
      "LABEL" : "IE extra shipping by weight EUR",
      "PLUGIN" : "rule",
      "REQUIRES" : [
        "commerce_order",
        "rules",
        "commerce_calculate_weight",
        "commerce_line_item"
      ],
      "USES VARIABLES" : {
        "shipping_surcharge" : {
          "label" : "Shipping surcharge",
          "type" : "decimal",
          "parameter" : false
        },
        "line_item" : { "label" : "line item", "type" : "commerce_line_item" },
        "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" }
      },
      "IF" : [
        { "commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "IE"
          }
        },
        { "data_is" : { "data" : [ "line-item:type" ], "value" : "shipping" } }
      ],
      "DO" : [
        { "commerce_calculate_weight_action_calculate_total_weight" : {
            "USING" : { "commerce_order" : [ "commerce_order" ] },
            "PROVIDE" : { "commerce_order_total_weight" : { "commerce_order_total_weight" : "Commerce Total Order Weight" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "commerce-order-total-weight" ],
              "op" : "-",
              "input_2" : "1900"
            },
            "PROVIDE" : { "result" : { "extra_weight" : "Extra weight" } }
          }
        },
        { "data_calc" : {
            "USING" : { "input_1" : [ "extra-weight" ], "op" : "*", "input_2" : "0.001" },
            "PROVIDE" : { "result" : { "euros_surcharge" : "euros-surcharge" } }
          }
        },
        { "data_set" : { "data" : [ "shipping-surcharge" ], "value" : [ "euros-surcharge" ] } },
        { "commerce_line_item_unit_price_add" : {
            "commerce_line_item" : [ "line-item" ],
            "amount" : [ "euros-surcharge" ],
            "component_name" : "flat_rate_ie_over_1900g_eur",
            "round_mode" : "1"
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "shipping_surcharge" ]
    }
  }');
  $items['rules_shipping_surcharge_by_weight_eur'] = entity_import('rules_config', '{ "rules_shipping_surcharge_by_weight_eur" : {
      "LABEL" : "Shipping surcharge by weight EUR",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "rules", "commerce_calculate_weight", "commerce_shipping" ],
      "ON" : [ "commerce_shipping_calculate_rate" ],
      "IF" : [
        { "data_is" : { "data" : [ "site:commerce-currency" ], "value" : "EUR" } }
      ],
      "DO" : [
        { "commerce_calculate_weight_action_calculate_total_weight" : {
            "USING" : { "commerce_order" : [ "site:current-cart-order" ] },
            "PROVIDE" : { "commerce_order_total_weight" : { "commerce_order_total_weight" : "Commerce Total Order Weight" } }
          }
        },
        { "component_rules_check_total_weight_over_1900g_surcharge_eur" : {
            "USING" : {
              "commerce_order" : [ "commerce-line-item:order" ],
              "total_order_weight" : [ "commerce-order-total-weight" ]
            },
            "PROVIDE" : {
              "commerce_order" : { "commerce_order" : "Commerce Order" },
              "total_order_weight" : { "total_order_weight" : "Total order weight" },
              "commerce_line_item" : { "commerce_line_item" : "LIne item" }
            }
          }
        }
      ]
    }
  }');
  $items['rules_world_extra_shipping_by_weight_eur'] = entity_import('rules_config', '{ "rules_world_extra_shipping_by_weight_eur" : {
      "LABEL" : "World extra shipping by weight EUR",
      "PLUGIN" : "rule",
      "REQUIRES" : [
        "rules",
        "commerce_order",
        "commerce_calculate_weight",
        "commerce_line_item"
      ],
      "USES VARIABLES" : {
        "commerce_order" : { "label" : "Commerce Order", "type" : "commerce_order" },
        "shipping_surcharge" : {
          "label" : "Shipping surcharge",
          "type" : "decimal",
          "parameter" : false
        },
        "line_item" : { "label" : "line item", "type" : "commerce_line_item" }
      },
      "IF" : [
        { "NOT component_rules_country_in_europe" : { "commerce_order" : [ "commerce_order" ] } },
        { "NOT commerce_order_compare_address" : {
            "commerce_order" : [ "commerce_order" ],
            "address_field" : "commerce_customer_shipping|commerce_customer_address",
            "address_component" : "country",
            "value" : "IE"
          }
        }
      ],
      "DO" : [
        { "commerce_calculate_weight_action_calculate_total_weight" : {
            "USING" : { "commerce_order" : [ "commerce_order" ] },
            "PROVIDE" : { "commerce_order_total_weight" : { "commerce_order_total_weight" : "Commerce Total Order Weight" } }
          }
        },
        { "data_calc" : {
            "USING" : {
              "input_1" : [ "commerce-order-total-weight" ],
              "op" : "-",
              "input_2" : "1900"
            },
            "PROVIDE" : { "result" : { "extra_weight" : "Extra weight" } }
          }
        },
        { "data_calc" : {
            "USING" : { "input_1" : [ "extra-weight" ], "op" : "*", "input_2" : "0.004" },
            "PROVIDE" : { "result" : { "euros_surcharge" : "euros-surcharge" } }
          }
        },
        { "data_set" : { "data" : [ "shipping-surcharge" ], "value" : [ "euros-surcharge" ] } },
        { "commerce_line_item_unit_price_add" : {
            "commerce_line_item" : [ "line-item" ],
            "amount" : [ "euros-surcharge" ],
            "component_name" : "flat_rate_world_over_1900g_eur",
            "round_mode" : "1"
          }
        }
      ],
      "PROVIDES VARIABLES" : [ "shipping_surcharge" ]
    }
  }');
  return $items;
}
