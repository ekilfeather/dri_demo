<?php

/**
 * @file
 * Default theme implementation to display a single DRI object, suitable for use
 * as an <iframe>.
 *
 * Available variables:
 * @todo document available variables here.
 *   They should match the vars produced by dri_object_preprocess_dri_iframe().
 */
?>
<div class="iframe-object-wrapper">
  <div class="iframe-object-image"><?php print $colorbox_image; ?></div>
  <div class="iframe-object-inner">
    <div class="iframe-object-title"><?php print $title; ?>!!!!!</div>
    <div class="iframe-object-label"><?php print t('Creator:'); ?></div>
    <div class="iframe-object-creator"><?php print $creator; ?></div>
    <?php if ($date): ?>
      <div class="iframe-object-label"><?php print t('Date:'); ?></div>
      <div class="iframe-object-date"><?php print $date; ?></div>
    <?php endif; ?>
    <div class="iframe-object-description"><?php print $description; ?></div>
    <div class="iframe-object-link"><a target="_top" href="/object-detail/<?php print $variables['elements']['0']['pid']; ?>"><?php print t('See Object Details!!!'); ?></a></div>
    <div class="iframe-object-link"><a target="_blank" href="http://dri.dmc.dit.ie/catalog/<?php print $variables['elements']['0']['pid']; ?>"><?php print t('See Object On DRI'); ?></a></div>
  </div>
</div>
