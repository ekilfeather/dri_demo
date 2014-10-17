<?php

/**
 * @file
 * CUSTOM theme implementation for field collection items.
 *
 * Available variables:
 * - $content: An array of comment items. Use render($content) to print them all, or
 *   print a subset such as render($content['field_example']). Use
 *   hide($content['field_example']) to temporarily suppress the printing of a
 *   given element.
 * - $title: The (sanitized) field collection item label.
 * - $url: Direct url of the current entity if specified.
 * - $page: Flag for the full page state.
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. By default the following classes are available, where
 *   the parts enclosed by {} are replaced by the appropriate values:
 *   - entity-field-collection-item
 *   - field-collection-item-{field_name}
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess()
 * @see template_preprocess_entity()
 * @see template_process()
 */
?>
<?php
  /**
   * Set up a template variable for the DRI Object iFrame URL.
   *
   * Field collections are VERY difficult handle in preprocess hooks,
   * so we're getting the URL directly from this template. To avoid including
   * complex logic here in the template, the heavy lifting is done by a helper
   * function in the theme's template.php file.
   */
  $dri_iframe_url = _inspirezen_get_dri_iframe_link($content);
?>
<div class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>

    <?php if ($dri_iframe_url): ?>
      <a class="iframe-object-overlay" href="<?php print $dri_iframe_url; ?>">
    <?php endif; ?>

    <?php print render($content);?>

    <?php if ($dri_iframe_url): ?>
      </a>
    <?php endif; ?>

  </div>
</div>
