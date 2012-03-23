<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2omega_ding2omega_3col_3_6_3_stacked_panels_layouts() {
  $items['ding2omega_3col_3_6_3_stacked'] = array(
    'title' => t('Three column 3-6-3 stacked'),
    'category' => t('Ding2 Omega: 12 column grid'),
    'icon' => 'ding2omega_3col_3_6_3_stacked.png',
    'theme' => 'ding2omega_3col_3_6_3_stacked',
    'admin css' => '../ding2omega_panels_12.css',
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}
