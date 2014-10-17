(function ($) {

  Drupal.behaviors.annertechDonationsRegularDonation = {
    attach: function (context) {
      // On load
      var currency = $('#edit-submitted-your-donation-currency').val();
      var $frequency_options = $('#edit-submitted-your-donation-direct-debit-frequency');
      var eur_freq_options = '<option value="week" style="display: none;">Weekly</option><option value="month" selected="selected">Monthly</option><option value="year">Annually</option>';
      var gbp_freq_options = '<option value="month" selected="selected">Monthly</option>';
      if (currency == 'GBP') {
        $('.pseudo-date-wrapper').hide();
        $frequency_options.html(gbp_freq_options);
      }
      else {
        $('.pseudo-date-wrapper').show();
        $frequency_options.html(eur_freq_options);
      }
      // On change
      $('#edit-submitted-your-donation-currency').change(function () {
        if ($(this).val() == 'GBP') {
          $('.pseudo-date-wrapper').hide();
          $frequency_options.html(gbp_freq_options);
        }
        else {
          $('.pseudo-date-wrapper').show();
          $frequency_options.html(eur_freq_options);
        }
      });
      // Pre seed the donation frequency with a future date.
      var $year_input = $('#edit-submitted-your-donation-starting-year');
      var $month_input = $('#edit-submitted-your-donation-starting-month');
      var month_names_short = ['jan', 'feb', 'mar', 'apr', 'may', 'jun', 'jul', 'aug', 'sep', 'oct', 'nov', 'dec'];
      var now = new Date();
      var y = now.getFullYear();
      var m = now.getMonth();
      m++;
      var d = now.getDate();
      $year_input.val(y);
      $month_input.val(month_names_short[m]);
    }
  }
})(jQuery);
