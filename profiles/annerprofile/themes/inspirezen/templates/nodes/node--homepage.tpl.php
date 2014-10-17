<?php
/**
 * @file
 * Returns the HTML for a node.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728164
 */
?>
<article class="node-<?php print $node->nid; ?> <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <?php if ($title_prefix || $title_suffix || $display_submitted || $unpublished || !$page && $title): ?>
    <header>
      <?php print render($title_prefix); ?>
      <?php if (!$page && $title): ?>
        <h2<?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h2>
      <?php endif; ?>
      <?php print render($title_suffix); ?>

      <?php if ($display_submitted): ?>
        <p class="submitted">
          <?php print $user_picture; ?>
          <?php print $submitted; ?>
        </p>
      <?php endif; ?>

      <?php if ($unpublished): ?>
        <mark class="unpublished"><?php print t('Unpublished'); ?></mark>
      <?php endif; ?>
    </header>
  <?php endif; ?>
  <div class="toggle-wiii">
    <div class="toggle-wiii-x">X</div>
    <div class="toggle-wiii-i">i</div>
  </div>

  <?php
    // We hide the comments and links now so that we can render them later.
    hide($content['comments']);
    hide($content['links']);
    ?>
  <div class="group-home-wiii-wrapper">
  <?php
    print render($content['group_home_wiii']);
    ?>
  </div>
  <?php
    // This is the image field using the object ID to display the image
    // print render($content['field_home_slider_id']);
    print render($content['field_home_slider_image']);
    ?>
  <div class="group-home-slider-wrapper">
    <?php
    // This is the text within the slider, set as a group on the manage display settings page
    print render($content['group_home_slider']);
  ?>
  <!-- Removing the more link temporarily
    <div id="more"><a name="#more">More
      <div class="more-down-arrow">^</div></a>
    </div> -->
  </div>
<div id="below-the-fold">
  <?php
    print render($content['group_home_left']);
    print render($content['group_home_center']);
    print render($content['group_home_news']);
    print render($content['group_home_partners']);

    //print render($content);
  ?>
</div>

  <?php print render($content['links']); ?>

  <?php print render($content['comments']); ?>

</article>
