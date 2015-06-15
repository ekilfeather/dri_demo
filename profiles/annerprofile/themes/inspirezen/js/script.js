/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - https://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {


// To understand behaviors, see https://drupal.org/node/756722#behaviors
Drupal.behaviors.inspirezen = {
  attach: function(context, settings) {

    // Place your code here.

    // Code to toggle the overlay on the homepage slider
    // Don't show 'i' initially
    $('.toggle-wiii-i').hide();
    // Hide "What is Inspiring Ireland" when X is clicked
    $('.toggle-wiii-x').click(function() {
    $('.group-home-wiii').hide();
    // Show 'i' when 'X' is clicked
    $('.toggle-wiii-i').show();
    // Hide 'X' when 'X' is clicked
    $('.toggle-wiii-x').hide();
    });
    // Show "What is Inspiring Ireland" when i is clicked
    $('.toggle-wiii-i').click(function() {
    // Show 'X' when 'i' is clicked
    $('.toggle-wiii-i').hide();
    // Hide 'i' when 'i' is clicked
    $('.toggle-wiii-x').show();
    $('.group-home-wiii').show();
    });
    // Turn cursor to pointer on hover
    $('.toggle-wiii-x').hover(function() {
    $(this).css('cursor','pointer');
    });
    // Turn cursor to pointer on hover
    $('.toggle-wiii-i').hover(function() {
    $(this).css('cursor','pointer');
    });
    // End code to toggle the overlay on the homepage slider

    // Begin adding Flexslider
    // Make the Slider Image field on homepage a flexslider field
    var $slider = $('.field-name-field-home-slider-image');
      // Make carousel with config
      $slider.flexslider({
        selector: ".field-item",
        animation: "fade",
        animationSpeed: 1000,
        slideshowSpeed: 3500,
        controlNav: false,
        reverse: true,
        directionNav: false,
      });
    // End adding Flexslider

    // Begin code to toggle the main menu on tablets/phones
    // Hide menu items initially
    $('#block-menu-block-3 ul').hide();
    // Toggle menu on/off when title is clicked
    $('#block-menu-block-3 .block__title').click(function() {
    $('#block-menu-block-3 ul').slideToggle();
    });
    $('#block-menu-block-3 .block__title').hover(function() {
        $(this).css('cursor','pointer');
    });
    // End code to toggle the main menu on tablets/phones

    // Begin code to toggle the facet selectors on/off
    // Hide list items initially
    // This is for the Subject Facet
    $('#block-facetapi-5yehnzco1igll3iekufsppggjxeuzdzp ul').hide();
    $('#block-facetapi-5yehnzco1igll3iekufsppggjxeuzdzp .facetapi-limit-link').hide();
    $('#block-facetapi-5yehnzco1igll3iekufsppggjxeuzdzp .block__title').addClass('facet-title-unclicked');
    // $('#block-facetapi-5yehnzco1igll3iekufsppggjxeuzdzp .block__title').addClass('facet-title-clicked');
    // Toggle list on/off when title is clicked
    $('#block-facetapi-5yehnzco1igll3iekufsppggjxeuzdzp .block__title').click(function() {
    $('#block-facetapi-5yehnzco1igll3iekufsppggjxeuzdzp .block__title').toggleClass('facet-title-clicked');
    $('#block-facetapi-5yehnzco1igll3iekufsppggjxeuzdzp ul').slideToggle();
    $('#block-facetapi-5yehnzco1igll3iekufsppggjxeuzdzp .facetapi-limit-link').toggle();
    });
    $('#block-facetapi-5yehnzco1igll3iekufsppggjxeuzdzp .block__title').hover(function() {
        $(this).css('cursor','pointer');
    });
    // Hide list items initially
    // This is for the Type Facet
    $('#block-facetapi-l0femuxz9xndzv5pv0csbrxms4y1v576 ul').hide();
    $('#block-facetapi-l0femuxz9xndzv5pv0csbrxms4y1v576 .facetapi-limit-link').hide();
    $('#block-facetapi-l0femuxz9xndzv5pv0csbrxms4y1v576 .block__title').addClass('facet-title-unclicked');
    // Toggle list on/off when title is clicked
    $('#block-facetapi-l0femuxz9xndzv5pv0csbrxms4y1v576 .block__title').click(function() {
    $('#block-facetapi-l0femuxz9xndzv5pv0csbrxms4y1v576 .block__title').toggleClass('facet-title-clicked');
    $('#block-facetapi-l0femuxz9xndzv5pv0csbrxms4y1v576 ul').slideToggle();
    $('#block-facetapi-l0femuxz9xndzv5pv0csbrxms4y1v576 .facetapi-limit-link').toggle();
    });
    $('#block-facetapi-l0femuxz9xndzv5pv0csbrxms4y1v576 .block__title').hover(function() {
        $(this).css('cursor','pointer');
    });
    // Hide list items initially
    // This is for the Format Facet
    $('#block-facetapi-y1fsezkzyvvaxbxfjvqyaaxetf9zuj05 ul').hide();
    $('#block-facetapi-y1fsezkzyvvaxbxfjvqyaaxetf9zuj05 .facetapi-limit-link').hide();
    $('#block-facetapi-y1fsezkzyvvaxbxfjvqyaaxetf9zuj05 .block__title').addClass('facet-title-unclicked');
    // $('#block-facetapi-5yehnzco1igll3iekufsppggjxeuzdzp .block__title').addClass('facet-title-clicked');
    // Toggle list on/off when title is clicked
    $('#block-facetapi-y1fsezkzyvvaxbxfjvqyaaxetf9zuj05 .block__title').click(function() {
    $('#block-facetapi-y1fsezkzyvvaxbxfjvqyaaxetf9zuj05 .block__title').toggleClass('facet-title-clicked');
    $('#block-facetapi-y1fsezkzyvvaxbxfjvqyaaxetf9zuj05 ul').slideToggle();
    $('#block-facetapi-y1fsezkzyvvaxbxfjvqyaaxetf9zuj05 .facetapi-limit-link').toggle();
    });
    $('#block-facetapi-y1fsezkzyvvaxbxfjvqyaaxetf9zuj05 .block__title').hover(function() {
        $(this).css('cursor','pointer');
    });
    // Hide list items initially
    // This is for the Institute Facet
    $('#block-facetapi-sl4w1x0poar4lt1jr0ul1dukl3bzanni ul').hide();
    $('#block-facetapi-sl4w1x0poar4lt1jr0ul1dukl3bzanni .facetapi-limit-link').hide();
    $('#block-facetapi-sl4w1x0poar4lt1jr0ul1dukl3bzanni .block__title').addClass('facet-title-unclicked');
    // Toggle list on/off when title is clicked
    $('#block-facetapi-sl4w1x0poar4lt1jr0ul1dukl3bzanni .block__title').click(function() {
    $('#block-facetapi-sl4w1x0poar4lt1jr0ul1dukl3bzanni .block__title').toggleClass('facet-title-clicked');
    $('#block-facetapi-sl4w1x0poar4lt1jr0ul1dukl3bzanni ul').slideToggle();
    $('#block-facetapi-sl4w1x0poar4lt1jr0ul1dukl3bzanni .facetapi-limit-link').toggle();
    });
    $('#block-facetapi-sl4w1x0poar4lt1jr0ul1dukl3bzanni .block__title').hover(function() {
        $(this).css('cursor','pointer');
    });
    // Hide list items initially
    // This is for the Temporal Coverage Facet
    $('#block-facetapi-hvcq3ktffksi4l0xtojfj0kdaysfltpz ul').hide();
    $('#block-facetapi-hvcq3ktffksi4l0xtojfj0kdaysfltpz .facetapi-limit-link').hide();
    $('#block-facetapi-hvcq3ktffksi4l0xtojfj0kdaysfltpz .block__title').addClass('facet-title-unclicked');
    // Toggle list on/off when title is clicked
    $('#block-facetapi-hvcq3ktffksi4l0xtojfj0kdaysfltpz .block__title').click(function() {
    $('#block-facetapi-hvcq3ktffksi4l0xtojfj0kdaysfltpz .block__title').toggleClass('facet-title-clicked');
    $('#block-facetapi-hvcq3ktffksi4l0xtojfj0kdaysfltpz ul').slideToggle();
    $('#block-facetapi-hvcq3ktffksi4l0xtojfj0kdaysfltpz .facetapi-limit-link').toggle();
    });
    $('#block-facetapi-hvcq3ktffksi4l0xtojfj0kdaysfltpz .block__title').hover(function() {
        $(this).css('cursor','pointer');
    });
    // End code to toggle the facet selectors on/off

    // Begin code to turn object id field to isotope
    $(window).bind('load', function() {
        $('.field-name-field-lp-object-id').isotope({
        // options
        itemSelector : '.field-items',
        layoutMode : 'masonry',
        masonry: { columnWidth: 100 },
        });
        //$('.field-name-field-lp-object-id').isotope( 'reLayout', callback );
    });
    // End code to turn object id field to isotope

    // Begin code to open object in an iframe colorbox
        $('a.iframe-object-overlay').colorbox({
            opacity:0.5,
            iframe: 'TRUE',
            height: '600',
            width: '840',
            close: 'X',
    });

    // End code to open object in an iframe colorbox

    // Begin show/hide more object details on object details page
    // Don't show the more information area initially
    $('.od-object-details-block-content-more').hide();
    $('.od-items-more').addClass('od-items-more-unclicked');
    // Show the more information area when the more link is clicked
    $('.od-items-more').click(function() {
        $('.od-items-more').toggleClass('od-items-more-clicked');
        $('.od-object-details-block-content-more').slideToggle();
        // $('.od-items-more').addClass('.od-items-more-clicked');
    });
    $('.od-items-more').hover(function() {
        $(this).css('cursor','pointer');
    });
    // End show/hide more object details on object details page

    // Begin code for back button on Object Details page
    $('.od-back').click(function(){
        parent.history.back();
        return false;
    });
    // Turn cursor to pointer on hover for back button
    $('.od-back').hover(function() {
        $(this).css('cursor','pointer');
    });

    // Add CSS class to nth-child(3n+1) for IE8 support
    $('.view-dri-object-search .view-content .views-row:nth-child(3n +1)').addClass('nth-child-3np1');

    // Remove right-click functionality from images
    //$('img').bind('contextmenu', function(e) {
    //    return false;
    //});

      // When the user hovers inside the landing page content make image opaque
      $(".field-type-image").hover(function() {
          $(".field-type-image").addClass("opaque").removeClass("solid");
          $(this).removeClass("opaque").addClass("solid");
      }, function() {
          $(".field-type-image").removeClass("opaque").addClass("solid");
      });

    // Open external links in new window _blank
    $('a').each(function() {
        var a = new RegExp('/' + window.location.host + '/');
        if(!a.test(this.href)) {
            $(this).click(function(event) {
                event.preventDefault();
                event.stopPropagation();
                window.open(this.href, '_blank');
    });

   }
});

  }
};
})(jQuery, Drupal, this, this.document);
