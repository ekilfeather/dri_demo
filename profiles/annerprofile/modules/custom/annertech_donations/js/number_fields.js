(function ($) {

  Drupal.behaviors.annertechDonationsNumberFields = {
    attach: function (context) {
      $("#edit-submitted-bank-details-bank-building-society-acc-no").keydown(function (event) {
        validate_number(event);
      });
      $("#edit-submitted-bank-details-branch-sort-code").keydown(function (event) {
        validate_number(event)
      });
    }
  }

  function validate_number(event) {
    // Allow: backspace, delete, tab, escape, and enter
    if ( event.keyCode == 46 || event.keyCode == 8 || event.keyCode == 9 || event.keyCode == 27 || event.keyCode == 13 ||
       // Allow: Ctrl+A
      (event.keyCode == 65 && event.ctrlKey === true) ||
       // Allow: home, end, left, right
      (event.keyCode >= 35 && event.keyCode <= 39)) {
           // let it happen, don't do anything
           return;
    }
    else {
      // Ensure that it is a number and stop the keypress
      if (event.shiftKey || (event.keyCode < 48 || event.keyCode > 57) && (event.keyCode < 96 || event.keyCode > 105 )) {
        event.preventDefault();
      }  
    }
  }

})(jQuery);
