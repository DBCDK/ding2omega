<?php

/**
 * Implements hook_panels_layouts().
 */
function ding2_basetheme_ding2omega_2col_6_6_stacked_panels_layouts() {
  $items['ding2omega_2col_6_6_stacked'] = array(
    'title' => t('Two Column 6-6 stacked'),
    'category' => t('Ding2 Omega: 12 column grid'),
    'icon' => 'ding2omega_2col_6_6_stacked.png',
    'theme' => 'ding2omega_2col_6_6_stacked',
    'admin css' => '../ding2omega_panels_12.css',
    'regions' => array(
      'top' => t('Top'),
      'left' => t('Left'),
      'right' => t('Right'),
      'bottom' => t('Bottom'),
    ),
  );

  return $items;
}
