<?php

/**
 * Preprocess function for page.
 */
function ding2omega_alpha_preprocess_page(&$vars) {
  // Don't show title for panel pages, we assume they provide their
  // own as part of the panel.
  if ($panel_page = page_manager_get_current_page()) {
    $vars['title'] = '';
  }
}

