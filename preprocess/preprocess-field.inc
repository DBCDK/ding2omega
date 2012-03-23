<?php

/**
 * Preprocess field template variables.
 *
 * If we want to alter fields which deviate from core/module field behaviour.
 */
function ding2omega_alpha_preprocess_field(&$variables, $hook) {
  switch ($variables['element']['#field_type']) {
    case 'ting_series':
    case 'ting_subjects':
      // Remove the clearfix on fields with class field-label-inline, since it
      // breaks the layout in this theme.
      unset($variables['classes_array'][array_search('clearfix', $variables['classes_array'])]);
    break;
  }
  if ($variables['element']['#field_name'] == 'ding_library_opening_hours') {
    $variables['items'][0]['#markup'] = str_replace("\n", '<br />', $variables['items'][0]['#markup']);
  }
}

