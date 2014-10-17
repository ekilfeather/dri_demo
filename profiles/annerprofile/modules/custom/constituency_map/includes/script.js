(function ($) {

  Drupal.behaviors.constituencyMap = {
    attach: function (context) {
      
      // Have to wait for all images to load
      $(window).load(function() {
        $('#campaign-image-maps').find('img').maphilight({
          fillColor: '61a534',
          fillOpacity: 0.8,
          strokeColor: '817F74',
          strokeOpacity: 0.3
        });
      });

      $('body').addClass('js-campaign-node-map-page');
      
      var $countrySelect = $('#edit-activism-signup-country');
      var $constituencySelect = $('#edit-activism-signup-map-constituencies');
      var $recipientLabels = $('.activism-recipient-wrapper .form-radios').find('label.option');
      
      var $radioPlaceholder = $('#radio-placeholder');
      
      var selectTrigger = "change";
      if (jQuery.browser.msie) {
        selectTrigger = "click";
      }
      
      var onlyOneRecipient = true;
      if ($recipientLabels.length > 1) {
        onlyOneRecipient = false;
      }
      
      $constituencySelect.val('');
      
      var mainText = Drupal.t('Your email will be sent to following representatives');
      //mainText = $('#replace-text').hide().html();
      
      $('map').find('area').click(function(event) {
        
        $('body').addClass('campaign-map-clicked');

        // Reset previous options
        $radioPlaceholder.hide().html('');
        $('#hidden-map-radiogroups').find('input').attr('checked',false);
        
        // Fade out previous text content
        $('#map-help').fadeOut(400, function() {
          $radioPlaceholder.fadeIn(400);
        });
        
        var clickedArea = $(this);
        var $parent = clickedArea.parent();
        
        var selector = clickedArea.attr('href');
        var $radioGroup = $('#hidden-map-radiogroups').find(selector);
        
        // Select relevant data in the form
        var constituency = clickedArea.attr('alt');
        $constituencySelect.val(constituency);
        
        if ($parent.attr('name') == 'roi') {
          $countrySelect.val('IE');
        }
        else if ($parent.attr('name') == 'north') {
          $countrySelect.val('GB');
        }
        
        // Fire change event so other event handles will pick up the val change
        // Need to fire click for IE
        // Only fire if there are two or more recipients
        if (!onlyOneRecipient) {
          if ($parent.attr('name') == 'roi') {
            $recipientLabels.filter(":contains('Ireland')")
              .children('input')
              .attr('checked', true)
              .trigger(selectTrigger);
          }
          else if ($parent.attr('name') == 'north') {
            $recipientLabels.filter(":contains('United Kingdom')")
              .children('input')
              .attr('checked', true)
              .trigger(selectTrigger);
          }
        }

        // Mark as selected all from clicked consituencies
        $radioGroup.find('input').each(function() {
          $(this).attr('checked',true);
        });
        
        // Add content to page
        // Create dummy radios
        var radio = '';
        $('#hidden-map-radiogroups').find(selector).find('label').each(function(index, val) {
          
          radio += '<label class="option"><input type="checkbox" checked="checked" value ="' + index + '"/>' + $(val).text() + '</label>';
          
        });
        
        $radioPlaceholder
          .append('<h3>' + constituency + '</h3>')
          .append('<p>' + mainText + '</p>')
          .append(radio);
        
        // Sync dummy radios with real radio buttons
        $radioPlaceholder.find('input').change(function(event) {
          
          var domPos = $(this).val();
          var checkedValue = $(this).attr('checked');
          
          $radioGroup.find('input').eq( $(this).val() );
          
          $radioGroup.find('input')
            .eq(domPos)
            .attr('checked',checkedValue);
        });
        
        return false;
      });
    }
  };
})(jQuery);
