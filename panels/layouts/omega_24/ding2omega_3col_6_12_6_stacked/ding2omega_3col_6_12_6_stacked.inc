<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2_basetheme_ding2omega_3col_6_12_6_stacked_panels_layouts() {
  $items['ding2omega_3col_6_12_6_stacked'] = array(
    'title' => t('Three column 6-12-6 stacked'),
    'category' => t('Ding2 Omega: 24 column grid'),
    'icon' => 'ding2omega_3col_6_12_6_stacked.png',
    'theme' => 'ding2omega_3col_6_12_6_stacked',
    'admin css' => '../ding2omega_panels_24.css',
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
