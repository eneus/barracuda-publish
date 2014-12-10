<?php

/**
 * @file
 * Page callback file for the gallery module.
 */

/**
 * Menu callback; displays a Drupal page containing recent gallery entries of a given user.
 */
function gallery_page_user($account) {
  global $user;

  drupal_set_title($title = t("@name's gallery", array('@name' => format_username($account))), PASS_THROUGH);

  $build = array();

  $query = db_select('node', 'n')->extend('PagerDefault');
  $nids = $query
    ->fields('n', array('nid', 'sticky', 'created'))
    ->condition('type', 'gallery')
    ->condition('uid', $account->uid)
    ->condition('status', 1)
    ->orderBy('sticky', 'DESC')
    ->orderBy('created', 'DESC')
    ->limit(variable_get('default_nodes_main', 10))
    ->addTag('node_access')
    ->execute()
    ->fetchCol();

  if (!empty($nids)) {
    $nodes = node_load_multiple($nids);
    $build += node_view_multiple($nodes);
    $build['pager'] = array(
      '#theme' => 'pager',
      '#weight' => 5,
    );
  }
  else {
    if ($account->uid == $user->uid) {
      drupal_set_message(t('You have not created any gallery entries.'));
    }
    else {
      drupal_set_message(t('!author has not created any gallery entries.', array('!author' => theme('username', array('account' => $account)))));
    }
  }
  drupal_add_feed('gallery/' . $account->uid . '/feed', t('RSS - !title', array('!title' => $title)));

  return $build;
}

/**
 * Menu callback; displays a Drupal page containing recent gallery entries of all users.
 */
function gallery_page_last() {
  global $user;
  $build = array();

  $query = db_select('node', 'n')->extend('PagerDefault');
  $nids = $query
    ->fields('n', array('nid', 'sticky', 'created'))
    ->condition('type', 'gallery')
    ->condition('status', 1)
    ->orderBy('sticky', 'DESC')
    ->orderBy('created', 'DESC')
    ->limit(variable_get('default_nodes_main', 10))
    ->addTag('node_access')
    ->execute()
    ->fetchCol();

  if (!empty($nids)) {
    $nodes = node_load_multiple($nids);
    $build += node_view_multiple($nodes);
    $build['pager'] = array(
      '#theme' => 'pager',
      '#weight' => 5,
    );
  }
  else {
    drupal_set_message(t('No gallery entries have been created.'));
  }
  drupal_add_feed('gallery/feed', t('RSS - galleries'));

  return $build;
}

/**
 * Menu callback; displays an RSS feed containing recent gallery entries of a given user.
 */
function gallery_feed_user($account) {

  $nids = db_select('node', 'n')
    ->fields('n', array('nid', 'created'))
    ->condition('type', 'gallery')
    ->condition('uid', $account->uid)
    ->condition('status', 1)
    ->orderBy('created', 'DESC')
    ->range(0, variable_get('feed_default_items', 10))
    ->addTag('node_access')
    ->execute()
    ->fetchCol();

  $channel['title'] = t("!name's gallery", array('!name' => format_username($account)));
  $channel['link'] = url('gallery/' . $account->uid, array('absolute' => TRUE));

  node_feed($nids, $channel);
}

/**
 * Menu callback; displays an RSS feed containing recent gallery entries of all users.
 */
function gallery_feed_last() {
  $nids = db_select('node', 'n')
    ->fields('n', array('nid', 'created'))
    ->condition('type', 'gallery')
    ->condition('status', 1)
    ->orderBy('created', 'DESC')
    ->range(0, variable_get('feed_default_items', 10))
    ->addTag('node_access')
    ->execute()
    ->fetchCol();

  $channel['title'] = t('!site_name galleries', array('!site_name' => variable_get('site_name', 'Drupal')));
  $channel['link'] = url('gallery', array('absolute' => TRUE));

  node_feed($nids, $channel);
}
