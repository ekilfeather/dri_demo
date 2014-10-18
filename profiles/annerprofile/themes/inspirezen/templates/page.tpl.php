<?php
/**
 * @file
 * Returns the HTML for a single Drupal page.
 *
 * Complete documentation for this file is available online.
 * @see https://drupal.org/node/1728148
 */
?>
<?php global $language ;
$lang_name = $language->language ; ?>
<div class="header-wrapper clearfix">
  <div class="header-outer clearfix">
    <header class="header" id="header" role="banner">

        <?php if ($logo): ?>
          <a href="<?php print $front_page; ?>" title="<?php print $site_name; ?>" rel="home" class="header__logo" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" class="header__logo-image" /></a>
        <?php endif; ?>

        <?php if ($site_name || $site_slogan): ?>
          <div class="header__name-and-slogan" id="name-and-slogan">
            <?php if ($site_name): ?>
              <h1 class="header__site-name" id="site-name">
                <a href="<?php print $front_page; ?>" title="<?php print $site_name; ?>" class="header__site-link" rel="home"><span><?php print $site_name; ?></span></a>
              </h1>
            <?php endif; ?>

            <?php if ($site_slogan): ?>
              <div class="header__site-slogan" id="site-slogan"><?php print $site_slogan; ?></div>
            <?php endif; ?>
          </div>
        <?php endif; ?>

        <?php if ($secondary_menu): ?>
          <nav class="header__secondary-menu" id="secondary-menu" role="navigation">
            <?php print theme('links__system_secondary_menu', array(
              'links' => $secondary_menu,
              'attributes' => array(
                'class' => array('links', 'inline', 'clearfix'),
              ),
              'heading' => array(
                'text' => $secondary_menu_heading,
                'level' => 'h2',
                'class' => array('element-invisible'),
              ),
            )); ?>

          </nav>
        <?php endif; ?>

        <?php print render($page['header']); ?>
		<?php
			$block = module_invoke('locale', 'block_view', 'language');
			print $block['content'];
		?>

        <div id="navigation">

          <?php if ($main_menu): ?>
            <nav id="main-menu" role="navigation" tabindex="-1">

            </nav>
          <?php endif; ?>

          <?php print render($page['navigation']); ?>
          

        </div>

      </header>
  </div>
</div>
<div id="page">

  <div id="main">

    <div id="content" class="column" role="main">
      <?php print render($page['highlighted']); ?>
    <!--
      <?php print $breadcrumb; ?>
       -->
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <h1 class="page__title title" id="page-title">  
        <?php if ($title): ?>
    		<?php print t($title); ?>
  		<?php endif; ?>
  		</h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>

      <?php
      // Render the sidebars to see if there's anything in them.
      $content_inset_upper  = render($page['content_inset_upper']);
      $content_inset_left = render($page['content_inset_left']);
    ?>


      <?php if ($content_inset_upper): ?>
      <div id="content-inset-upper">
        <?php print $content_inset_upper; ?>
      </div>
    <?php endif; ?>
    <?php if ($content_inset_left): ?>
      <div id="content-inset-left">
        <?php print $content_inset_left; ?>
      </div>
    <?php endif; ?>
      <div id="content-main-area">
        <?php print render($page['content']); ?>
      </div>
      <?php print $feed_icons; ?>
    </div>

    <!-- <div id="navigation">

      <?php if ($main_menu): ?>
        <nav id="main-menu" role="navigation" tabindex="-1"></nav>
      <?php endif; ?>

      <?php print render($page['navigation']); ?>

    </div> -->

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside>
    <?php endif; ?>

  </div>
  <?php print render($page['footer']); ?>


<?php print render($page['bottom']); ?>
</div>
<div id="sub-footer" class="clearfix">
  <div class="sub-footer-inner">
    <div id="sub-footer-left">
      <div class="footer-copyright"><?php print t('Digital Repository of Ireland') ?></div>
      <!-- <div class="footer-divider">|
      </div> -->
      <div class="footer-terms"><a href="/terms">Terms & Conditions</a></div>
      <div class="footer-divider">|
      </div>
      <div class="footer-contact"><a href="/contact"><?php print t('Contact'); ?></a></div>
    </div>
    <div id="sub-footer-right">
      <div class="footer-design-credits"><?php print t('Powered by <a href="@url">Digital Repository of Ireland</a>', array('@url' => url('http://www.dri.ie/'))); ?><br >
        <?php print t('Designed by') . ' '; ?><a href="http://www.daracreative.ie">dara creative</a> | <?php print t('Built by') . ' '; ?> <a href="http://www.annertech.com">Annertech</a>
      </div>


    </div>
  </div>
</div>
