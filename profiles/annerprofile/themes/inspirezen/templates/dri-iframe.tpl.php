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
<?php $api_base_url = variable_get('dri_api_endpoint_base_url'); ?>
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
      	<?php print $video_player; ?> 
    <?php if ($creator): ?>  	 
	    <div class="iframe-object-label"><?php print t('Creator:'); ?></div>
	    <div class="iframe-object-creator"><?php print $creator; ?></div>
    <?php endif; ?>
    <?php if ($date): ?> 
	    <div class="iframe-object-label"><?php print t('Date:'); ?></div>
	    <div class="iframe-object-date"><?php print $date; ?></div>
    <?php endif; ?>
    <?php if ($creation_date): ?> 
	    <div class="iframe-object-label"><?php print t('Creation Date:'); ?></div>
	    <div class="iframe-object-date"><?php print $creation_date; ?></div>
    <?php endif; ?>
    <?php if ($publication_date): ?> 
	    <div class="iframe-object-label"><?php print t('Published:'); ?></div>
	    <div class="iframe-object-date"><?php print $publication_date; ?></div>
    <?php endif; ?>
    <div class="iframe-object-description">
      <?php if ($curated_text): ?>
        <?php print $curated_text; ?>
      <?php endif; ?>
    </div>

    <div class="iframe-object-link"><a target="_top" href="/object-detail/<?php print $variables['elements']['0']['pid']; ?>"><?php print t('See Object Details'); ?></a></div>
    <br />
    <div class="iframe-object-link"><a target="_blank" href="<?php print $api_base_url  ?>catalog/<?php print $variables['elements']['0']['pid']  ?>"><?php print t('See Object On DRI'); ?></a></div>
  </div>
</div>







