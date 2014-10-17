For this module to work, the field_campaign_mapping_entry field needs to be added to
the Campaign content type provided by the Activism module.  It needs to be a
boolean select (yes / no radios), defaulting to No and hidden from display.

Additional changes need to be made to the theme, including the printing of
$vars['maps_ui'] html code.  Whether or not the node is a mapping campaign or
not can be checked by looking at $vars['is_map_campaign'] - you may need this to
toggle classes as to whether or not to show the map or not.
