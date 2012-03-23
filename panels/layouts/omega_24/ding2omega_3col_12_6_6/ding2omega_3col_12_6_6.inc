<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2omega_ding2omega_3col_12_6_6_panels_layouts() {
  $items['ding2omega_3col_12_6_6'] = array(
    'title' => t('Three column 12-6-6'),
    'category' => t('Ding2 Omega: 24 column grid'),
    'icon' => 'ding2omega_3col_12_6_6.png',
    'theme' => 'ding2omega_3col_12_6_6',
    'admin css' => '../ding2omega_panels_24.css',
    'regions' => array(
      'left' => t('Left side'),
      'middle' => t('Middle column'),
      'right' => t('Right side'),
    ),
  );

  return $items;
}
