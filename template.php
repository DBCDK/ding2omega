<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 *
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */

 /**
  * Implements hooks_css_alter().
  */
 function ding2omega_css_alter(&$css) {
   // Remove a couple of unwanted CSS files.
   foreach (array_keys($css) as $filename) {
     if (strpos($filename, 'addressfield/addressfield.css')) {
       unset($css[$filename]);
     }
   }
 }


/**
 * Theme override function, to be able to show different
 * label text to each date popup field.
 *
 * @param Array $vars
 * @return Stringp
 */
function ding2omega_date_part_label_date($vars) {
  $element = $vars['element'];
  if (stristr($element['#date_title'], 'start')) {
    $date_string = 'Start date';
  }
  else {
    $date_string = 'End date';
  }

  return t($date_string, array(), array('context' => 'datetime'));
}


function ding2omega_form_alter(&$form, &$form_state, $form_id) {
  switch ($form_id) {
    // add a login link to the horizontal login bar block
    case 'user_login':
      $form['name']['#type'] = 'password';
      break;
    case 'user_login_block':
      $form['name']['#prefix'] = '<span class="lead-text">'.t('Log in:').'</span>';
      $form['actions']['submit']['form_id']['#suffix'] = '<div class="clearfix"></div>';
      // HTML5 placeholder attribute
      $form['name']['#attributes']['placeholder'] = t('Username');
      $form['name']['#type'] = 'password';
      $form['pass']['#attributes']['placeholder'] = t('Password');
      $form['links']['#markup'] = "";
      break;
    case 'search_block_form':
      $form['search_block_form']['#size'] = '25';
      // HTML5 placeholder attribute
      $form['search_block_form']['#attributes']['placeholder'] = t('Enter search terms');
      $form['actions']['#suffix'] = '<div class="clearfix"></div>';
      break;
    case 'comment_node_ding_news_form':
      $form['actions']['submit']['#prefix'] = '<div>';
      $form['actions']['submit']['#suffix'] = '</div>';
      $form['actions']['preview']['#prefix'] = '<div>';
      $form['actions']['preview']['#suffix'] = '</div>';
      $form['subject']['#type'] = 'hidden';
      break;
  }
}


/**
 * Overriding theme_breadcrumb().
 */
function ding2omega_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (count($breadcrumb) > 1) {
    // Provide a navigational heading to give context for breadcrumb links to
    // screen-reader users. Make the heading invisible with .element-invisible.
    end($breadcrumb);
    $key = key($breadcrumb);
    $breadcrumb[$key] = '<span class="last-breadcrumb">' . $breadcrumb[$key] . '</span>';

    $output = '<h2 class="title">' . t('You are here') . ':</h2>';
    $output .= '<div class="trail">' . implode(' › ', $breadcrumb) . '</div>';
    return $output;
  }
}


