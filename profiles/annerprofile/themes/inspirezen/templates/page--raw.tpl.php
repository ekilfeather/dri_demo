<?php

/**
 * @file
 * Special-case page template, suitable for delivering content in an iFrame.
 * Only prints the main content - not messages, tabs, or anything else.
 */
?>
<?php print render($page['content']); ?>
