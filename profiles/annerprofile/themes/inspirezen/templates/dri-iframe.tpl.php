<?php

/**
 * @file
 * Default theme implementation to display a single DRI object, suitable for use
 * as an <iframe>.
 *
 * Available variables:
 * @todo document available variables here.
 *   They should match the vars produced by dri_object_preprocess_dri_iframe().
 *
 * CUSTOM variables:
 * - $fc_item: The complete Field Collection Item
 * - $curated_text: Safe value of Curated Text field for this item
 */
?>
<?php global $base_url; ?>
<div class="iframe-object-wrapper">
  <div class="iframe-object-image">
  	<?php if ($colorbox_image): ?>
  	<?php print $colorbox_image; ?>      
	<?php endif; ?>
  	<?php print $audio_player; ?>  
	</div>
  <div class="iframe-object-inner">
    <div class="iframe-object-title"><?php print $title; ?></div>
    <div class="iframe-object-title">
    	<audio>
    		<source src="<?php print $elements['0']['files']['0']['mp3']; ?>" type="audio/mpeg">
    	</audio>
    </div>
    <div class="iframe-object-label"><?php print t('Creator:'); ?></div>
    <div class="iframe-object-creator"><?php print $creator; ?></div>
    <div class="iframe-object-label"><?php print t('Date:'); ?></div>
    <div class="iframe-object-date"><?php print $date; ?></div>
    <div class="iframe-object-description">
      <?php if ($curated_text): ?>
        <?php print $curated_text; ?>
      <?php endif; ?>
    </div>

    <div class="iframe-object-link"><a target="_top" href="/object-detail/<?php print $variables['elements']['0']['pid']; ?>"><?php print t('See Object Details'); ?></a></div>
  </div>
</div>







