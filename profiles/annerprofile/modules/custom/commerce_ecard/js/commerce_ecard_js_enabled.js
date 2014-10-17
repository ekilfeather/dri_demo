/**
 * @file
 * A JavaScript file to hide some markup for nojs people and enable a form element.
 *
 */

(function ($) {
  Drupal.behaviors.commerceEcardJs = {
    attach: function (context) {
      $('input.ecard-type').removeAttr('disabled');
      $('#commerce-ecard-nojs-message').hide();
    }
  }
})(jQuery);
