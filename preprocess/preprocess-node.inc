<?php

/**
 * Preprocess node template variables.
 */
function ding2omega_alpha_preprocess_node(&$variables) {
  switch ($variables['view_mode']) {
    case 'teaser_highlight':
      $variables['theme_hook_suggestion'] = 'node__' . $variables['type'] . '__teaser_highlight';
      // INTENTIONALLY no break here
    case 'teaser':
      // Link title to node in teaser and teaser highlight view.
      $variables['title_prefix'] = '<a href="' . $variables['node_url'] . '">';
      $variables['title_suffix'] = '</a>';
      break;
  }
  if ($variables['view_mode'] == 'teaser') {
    $variables['node_type'] = check_plain(node_type_get_name($variables['node']));
    if (!empty($variables['content']['field_list_image'])) {
      $variables['classes_array'][] = 'has-image';
    }
  }

  switch ($variables['type']) {
    case 'ding_event':
      // timestamp on event nodes should be the event start time
      $date = new DateObject(
        $variables['field_event_date'][0]['value'],
        $variables['field_event_date'][0]['timezone_db'],
        date_type_format($variables['field_event_date'][0]['date_type'])
      );
      $variables['content']['artois_node_date'] = $date->format(DATE_FORMAT_UNIX); // to be put in subtheme?
      break;
    default:
      // timestamp on nodes default to the created timestamp
      $variables['content']['artois_node_date'] = $variables['created']; // to be put in subtheme?
      break;
  }
}
