<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2omega_ding2omega_2col_18_6_stacked_panels_layouts() {
  $items['ding2omega_2col_18_6_stacked'] = array(
    'title' => t('Two Column 18-6 stacked'),
    'category' => t('Ding2 Omega: 24 column grid'),
    'icon' => 'ding2omega_2col_18_6_stacked.png',
    'theme' => 'ding2omega_2col_18_6_stacked',
    'admin css' => '../ding2omega_panels_24.css',
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left'),
      'right' => t('Right'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}
