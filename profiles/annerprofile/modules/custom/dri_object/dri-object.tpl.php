<?php

/**
 * @file
 * Default theme implementation to display a single DRI object.
 *
 * Available variables:
 * - $main_image
 * - $title
 * - $description
 * - $creator - string, comma-separated if multi-valued.
 * - $dates - string, comma-separated if multi-valued.
 * - $places - string, comma-separated if multi-valued.
 * - $formats - string, comma-separated if multi-valued.
 * - $institution - single publisher (first-named, in case of multiple
 *     publishers.)
 * - $rights - string, comma-separated if multi-valued.
 * - $types - <ul> list of type metadata.
 * - $subjects - <ul> list of subject metadata.
 * - $languages - string, comma-separated if multi-valued.
 * - $eras - string, comma-separated if multi-valued.
 * - $contributors - string, comma-separated if multi-valued.
 * - $publishers - All publishers. String, comma-separated if multi-valued.
 *
 * @todo remove the relate objects logic, move to cutoms them function or block.
 */
?>
<article class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="od-image-wrapper">
    <?php if ($main_image): ?>
      <?php print $main_image ?>
    <?php endif; ?>
  </div>

  <div class="od-main-wrapper-outer">
    <div class="od-main-wrapper">
      <?php if ($title): ?>
        <div class="od-title"><h1><?php print $title; ?></h1></div>
      <?php endif; ?>

      <div class="od-back"><?php print t('Go Back'); ?></div>

      <?php if ($description): ?>
        <div class="od-description">
          <?php print $description; ?>
        </div>
      <?php endif; ?>
    </div><!-- /od-main-wrapper -->

    <div class="od-object-details-wrapper">
      <div class="od-object-details-block-title">
        <h2><?php print t('Object Details')?></h2>
      </div>

      <div class="od-object-details-block-content">
        <div class="od-object-details-block-content-less">

          <?php if ($creator): ?>
            <div class="od-item-label"><?php print t('Creator:'); ?></div>
            <div class="od-item-list"><?php print $creator; ?></div>
          <?php endif; ?>

          <?php if ($dates): ?>
            <div class="od-item-label"><?php print t('Date:'); ?></div>
            <div class="od-item-list"><?php print $dates; ?></div>
          <?php endif; ?>

          <?php if ($places): ?>
            <div class="od-item-label"><?php print t('Place:'); ?></div>
            <div class="od-item-list"><?php print $places; ?></div>
          <?php endif; ?>

          <?php if ($formats): ?>
            <div class="od-item-label"><?php print t('Format:'); ?></div>
            <div class="od-item-list"><?php print $formats; ?></div>
          <?php endif; ?>

          <?php if ($institution): ?>
            <div class="od-item-label"><?php print t('Institution:'); ?></div>
            <div class="od-item-list"><?php print $institution ?></div>
          <?php endif; ?>

          <?php if ($rights): ?>
            <div class="od-item-label"><?php print t('Rights:'); ?></div>
            <div class="od-item-list"><?php print $rights; ?></div>
          <?php endif; ?>
        </div><!-- /od-object-details-block-content-less -->

        <div class="od-items-more">More</div>
        <div class="od-object-details-block-content-more">

          <?php if ($types): ?>
            <div class="od-item-label"><?php print t('Type:'); ?></div>
            <?php print $types; ?>
          <?php endif; ?>

          <?php if ($subjects): ?>
            <div class="od-item-label"><?php print t('Subject:'); ?></div>
            <?php print $subjects; ?>
          <?php endif; ?>

          <?php if ($eras): ?>
            <div class="od-item-label"><?php print t('Era:'); ?></div>
            <div class="od-item-list"><?php print $eras; ?></div>
          <?php endif; ?>

          <?php if ($languages): ?>
            <div class="od-item-label"><?php print t('Language:'); ?></div>
            <div class="od-item-list"><?php print $languages; ?></div>
          <?php endif; ?>

          <?php if ($contributors): ?>
            <div class="od-item-label"><?php print t('Contributor:'); ?></div>
            <div class="od-item-list"><?php print $contributors; ?></div>
          <?php endif; ?>

          <?php if ($publishers): ?>
            <div class="od-item-label"><?php print t('Publisher:'); ?></div>
            <div class="od-item-list"><?php print $publishers; ?></div>
          <?php endif; ?>

        </div><!-- /od-object-details-block-content-more -->
      </div><!-- /od-object-details-block-content -->
    </div><!-- /od-object-details-wrapper -->
  </div><!-- /od-main-wrapper-outer -->

  <div class="od-related-objects-wrapper">
    <div class="od-related-objects-title"><h2><?php print t('Related Objects to Explore'); ?></h2></div>
    <div class="od-related-objects-item od-related-wrapper-1">
      <div class="od-related-image"><a href="/object-detail/<?php print $variables['elements']['related_objects']['0']['pid']; ?>"><img alt="" src="<?php print $variables['elements']['related_objects']['0']['files']['0']['thumbnail_medium']; ?>"></a></div>
      <div class="od-related-title"><a href="/object-detail/<?php print $variables['elements']['related_objects']['0']['pid']; ?>"><?php print $variables['elements']['related_objects']['0']['metadata']['title']['0']; ?></a></div>
      <div class="od-related-description"><?php print inspiring_ireland_tweaks_word_trim($variables['elements']['related_objects']['0']['metadata']['description']['0'], 22, '...'); ?></div>
    </div>

    <div class="od-related-objects-item od-related-wrapper-2">
      <div class="od-related-image"><a href="/object-detail/<?php print $variables['elements']['related_objects']['1']['pid']; ?>"><img alt="" src="<?php print $variables['elements']['related_objects']['1']['files']['0']['thumbnail_medium']; ?>"></a></div>
      <div class="od-related-title"><a href="/object-detail/<?php print $variables['elements']['related_objects']['1']['pid']; ?>"><?php print $variables['elements']['related_objects']['1']['metadata']['title']['0']; ?></a></div>
      <div class="od-related-description"><?php print inspiring_ireland_tweaks_word_trim($variables['elements']['related_objects']['1']['metadata']['description']['0'], 22, '...'); ?></div>
    </div>

    <div class="od-related-objects-item od-related-wrapper-3">
      <div class="od-related-image"><a href="/object-detail/<?php print $variables['elements']['related_objects']['2']['pid']; ?>"><img alt="" src="<?php print $variables['elements']['related_objects']['2']['files']['0']['thumbnail_medium']; ?>"></a></div>
      <div class="od-related-title"><a href="/object-detail/<?php print $variables['elements']['related_objects']['2']['pid']; ?>"><?php print $variables['elements']['related_objects']['2']['metadata']['title']['0']; ?></a></div>
      <div class="od-related-description"><?php print inspiring_ireland_tweaks_word_trim($variables['elements']['related_objects']['2']['metadata']['description']['0'], 22, '...'); ?></div>
    </div>

    <div class="od-related-objects-item od-related-wrapper-4">
      <div class="od-related-image"><a href="/object-detail/<?php print $variables['elements']['related_objects']['3']['pid']; ?>"><img alt="" src="<?php print $variables['elements']['related_objects']['3']['files']['0']['thumbnail_medium']; ?>"></a></div>
      <div class="od-related-title"><a href="/object-detail/<?php print $variables['elements']['related_objects']['3']['pid']; ?>"><?php print $variables['elements']['related_objects']['3']['metadata']['title']['0']; ?></a></div>
      <div class="od-related-description"><?php print inspiring_ireland_tweaks_word_trim($variables['elements']['related_objects']['3']['metadata']['description']['0'], 22, '...'); ?></div>
    </div>
  </div><!-- /od-related-objects-wrapper -->

</article>
