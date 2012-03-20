<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2_basetheme_ding2omega_3col_6_12_6_panels_layouts() {
  $items['ding2omega_3col_6_12_6'] = array(
    'title' => t('Three column 6-12-6'),
    'category' => t('Ding2 Omega: 24 column grid'),
    'icon' => 'ding2omega_3col_6_12_6.png',
    'theme' => 'ding2omega_3col_6_12_6',
    'admin css' => '../ding2omega_panels_24.css',
    'regions' => array(
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side'),
    ),
  );

  return $items;
}
