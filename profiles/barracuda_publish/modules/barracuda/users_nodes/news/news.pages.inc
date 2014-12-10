<?php

/**
 * @file
 * Page callback file for the news module.
 */

/**
 * Menu callback; displays a Drupal page containing recent news entries of a given user.
 */
function news_page_user($account) {
  global $user;

  drupal_set_title($title = t("@name's news", array('@name' => format_username($account))), PASS_THROUGH);

  $build = array();

  $query = db_select('node', 'n')->extend('PagerDefault');
  $nids = $query
    ->fields('n', array('nid', 'sticky', 'created'))
    ->condition('type', 'news')
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
      drupal_set_message(t('You have not created any news entries.'));
    }
    else {
      drupal_set_message(t('!author has not created any news entries.', array('!author' => theme('username', array('account' => $account)))));
    }
  }
  drupal_add_feed('news/' . $account->uid . '/feed', t('RSS - !title', array('!title' => $title)));

  return $build;
}

/**
 * Menu callback; displays a Drupal page containing recent news entries of all users.
 */
function news_page_last() {
  global $user;
  $build = array();

  $query = db_select('node', 'n')->extend('PagerDefault');
  $nids = $query
    ->fields('n', array('nid', 'sticky', 'created'))
    ->condition('type', 'news')
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
    drupal_set_message(t('No news entries have been created.'));
  }
  drupal_add_feed('news/feed', t('RSS - news'));

  return $build;
}

/**
 * Menu callback; displays an RSS feed containing recent news entries of a given user.
 */
function news_feed_user($account) {

  $nids = db_select('node', 'n')
    ->fields('n', array('nid', 'created'))
    ->condition('type', 'news')
    ->condition('uid', $account->uid)
    ->condition('status', 1)
    ->orderBy('created', 'DESC')
    ->range(0, variable_get('feed_default_items', 10))
    ->addTag('node_access')
    ->execute()
    ->fetchCol();

  $channel['title'] = t("!name's news", array('!name' => format_username($account)));
  $channel['link'] = url('news/' . $account->uid, array('absolute' => TRUE));

  node_feed($nids, $channel);
}

/**
 * Menu callback; displays an RSS feed containing recent news entries of all users.
 */
function news_feed_last() {
  $nids = db_select('node', 'n')
    ->fields('n', array('nid', 'created'))
    ->condition('type', 'news')
    ->condition('status', 1)
    ->orderBy('created', 'DESC')
    ->range(0, variable_get('feed_default_items', 10))
    ->addTag('node_access')
    ->execute()
    ->fetchCol();

  $channel['title'] = t('!site_name news', array('!site_name' => variable_get('site_name', 'Drupal')));
  $channel['link'] = url('news', array('absolute' => TRUE));

  node_feed($nids, $channel);
}
