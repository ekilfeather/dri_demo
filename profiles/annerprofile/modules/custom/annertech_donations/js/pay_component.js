(function ($) {

  Drupal.behaviors.annertechDonationsPayComponent = {
    attach: function (context) {

      // Hide / show the CVV and issue number fields according to card type
      // selected.
      var pmid = $('#pay-method-pmid').val();
      var card_type_key = 'select#edit-webform-pay-pay-method-' + pmid + '-cc-type';
      var issueno_key = '.form-item-webform-pay-pay-method-' + pmid + '-cc-issue-number';
      var ccv_key = '.pay-cc-ccv2';

      // On load.
      var card_type = $(card_type_key).val();
      if (card_type == 'switch') {
        $(issueno_key).show();
        $(ccv_key).hide();
      }
      else if (card_type == 'laser') {
        $(issueno_key).hide();
        $(ccv_key).hide();
      }
      else {
        $(issueno_key).hide();
        $(ccv_key).show();
      }

      // On change
      $(card_type_key).change(function () {
      var card_type = $(card_type_key).val();
        if ($(this).val() == 'switch') {
          $(issueno_key).show();
          $(ccv_key).hide();
        }
        else if ($(this).val() == 'laser') {
          $(issueno_key).hide();
          $(ccv_key).hide();
        }
        else {
          $(issueno_key).hide();
          $(ccv_key).show();
        }
      });
    }
  }
})(jQuery);
