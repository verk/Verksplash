<?php
/**
 * @file
 * verk_views.views_default.inc
 */

/**
 * Implementation of hook_views_default_views().
 */
function verk_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'front_page_welcome';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Front page welcome';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'front-page-welcome';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['empty'] = 'Currently no items to view.';
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Front page welcome';
  $translatables['front_page_welcome'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Currently no items to view.'),
    t('Content pane'),
    t('Front page welcome'),
    t('View panes'),
  );
  $export['front_page_welcome'] = $view;

  $view = new view;
  $view->name = 'people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'People';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'The people of NodeOne DK';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['row_class'] = 'views-ro';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['style_options']['summary'] = 'Employees at NodeOne DK';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No one works here yet.';
  /* Field: Content: Drupal.org */
  $handler->display->display_options['fields']['field_link_drupal']['id'] = 'field_link_drupal';
  $handler->display->display_options['fields']['field_link_drupal']['table'] = 'field_data_field_link_drupal';
  $handler->display->display_options['fields']['field_link_drupal']['field'] = 'field_link_drupal';
  $handler->display->display_options['fields']['field_link_drupal']['label'] = '';
  $handler->display->display_options['fields']['field_link_drupal']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_drupal']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_drupal']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_drupal']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_drupal']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_drupal']['field_api_classes'] = 0;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['label'] = '';
  $handler->display->display_options['fields']['field_email']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_email']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_email']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_email']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_email']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_email']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_email']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_email']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_email']['click_sort_column'] = 'email';
  $handler->display->display_options['fields']['field_email']['type'] = 'email_default';
  $handler->display->display_options['fields']['field_email']['field_api_classes'] = 0;
  /* Field: Content: Facebook */
  $handler->display->display_options['fields']['field_link_facebook']['id'] = 'field_link_facebook';
  $handler->display->display_options['fields']['field_link_facebook']['table'] = 'field_data_field_link_facebook';
  $handler->display->display_options['fields']['field_link_facebook']['field'] = 'field_link_facebook';
  $handler->display->display_options['fields']['field_link_facebook']['label'] = '';
  $handler->display->display_options['fields']['field_link_facebook']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_facebook']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_facebook']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_facebook']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_facebook']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_facebook']['field_api_classes'] = 0;
  /* Field: Content: Github */
  $handler->display->display_options['fields']['field_link_github']['id'] = 'field_link_github';
  $handler->display->display_options['fields']['field_link_github']['table'] = 'field_data_field_link_github';
  $handler->display->display_options['fields']['field_link_github']['field'] = 'field_link_github';
  $handler->display->display_options['fields']['field_link_github']['label'] = '';
  $handler->display->display_options['fields']['field_link_github']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_github']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_github']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_github']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_github']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_github']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_github']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_github']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_github']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_github']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_github']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_github']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_github']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_link_github']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_link_github']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_github']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_github']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_github']['field_api_classes'] = 0;
  /* Field: Content: LinkedIn */
  $handler->display->display_options['fields']['field_link_linkedin']['id'] = 'field_link_linkedin';
  $handler->display->display_options['fields']['field_link_linkedin']['table'] = 'field_data_field_link_linkedin';
  $handler->display->display_options['fields']['field_link_linkedin']['field'] = 'field_link_linkedin';
  $handler->display->display_options['fields']['field_link_linkedin']['label'] = '';
  $handler->display->display_options['fields']['field_link_linkedin']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_linkedin']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_linkedin']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_linkedin']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_linkedin']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_linkedin']['field_api_classes'] = 0;
  /* Field: Content: Twitter */
  $handler->display->display_options['fields']['field_link_twitter']['id'] = 'field_link_twitter';
  $handler->display->display_options['fields']['field_link_twitter']['table'] = 'field_data_field_link_twitter';
  $handler->display->display_options['fields']['field_link_twitter']['field'] = 'field_link_twitter';
  $handler->display->display_options['fields']['field_link_twitter']['label'] = '';
  $handler->display->display_options['fields']['field_link_twitter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_twitter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_link_twitter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_link_twitter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_link_twitter']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_link_twitter']['field_api_classes'] = 0;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<span class="email">[field_email]</span>
<span class="drupal">[field_link_drupal]</span>
<span class="twitter">[field_link_twitter]</span>
<span class="linkedin">[field_link_linkedin]</span>
<span class="facebook">[field_link_facebook]</span>
<span class="github">[field_link_github]</span>';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_class'] = 'social-links';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'div';
  $handler->display->display_options['fields']['title']['element_class'] = 'name';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Job title */
  $handler->display->display_options['fields']['field_role']['id'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['table'] = 'field_data_field_role';
  $handler->display->display_options['fields']['field_role']['field'] = 'field_role';
  $handler->display->display_options['fields']['field_role']['label'] = '';
  $handler->display->display_options['fields']['field_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_role']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_role']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_role']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_role']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_role']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_role']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_role']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_role']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_role']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_role']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_role']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_role']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_role']['element_class'] = 'job-title';
  $handler->display->display_options['fields']['field_role']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_role']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_role']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_role']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_role']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_role']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_role']['field_api_classes'] = 0;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['text'] = '[field_image]
<div class="social-links">[nothing]</div>
<div class="name">
<div class="name-inner">
<h3 class="title">[title]</h3>
<div class="job-title">[field_role]</div>
</div>
</div>';
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '300x150',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_type'] = 'div';
  $handler->display->display_options['fields']['body']['element_class'] = 'body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['body']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['body']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'employee' => 'employee',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status_1']['id'] = 'status_1';
  $handler->display->display_options['filters']['status_1']['table'] = 'node';
  $handler->display->display_options['filters']['status_1']['field'] = 'status';
  $handler->display->display_options['filters']['status_1']['value'] = '1';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'People';
  $translatables['people'] = array(
    t('Master'),
    t('The people of NodeOne DK'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('No one works here yet.'),
    t('<span class="email">[field_email]</span>
<span class="drupal">[field_link_drupal]</span>
<span class="twitter">[field_link_twitter]</span>
<span class="linkedin">[field_link_linkedin]</span>
<span class="facebook">[field_link_facebook]</span>
<span class="github">[field_link_github]</span>'),
    t('[field_image]
<div class="social-links">[nothing]</div>
<div class="name">
<div class="name-inner">
<h3 class="title">[title]</h3>
<div class="job-title">[field_role]</div>
</div>
</div>'),
    t('Content pane'),
    t('People'),
    t('View panes'),
  );
  $export['people'] = $view;

  $view = new view;
  $view->name = 'projects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Projects';
  $view->core = 7;
  $view->api_version = '3.0-alpha1';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recently we have been working on...';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'We are not doing anything right now.';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_image']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_image']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_image']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_image']['element_class'] = 'image';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_image']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_image']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_image']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_image']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '300x150',
    'image_link' => 'content',
  );
  $handler->display->display_options['fields']['field_image']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Projects';
  $translatables['projects'] = array(
    t('Master'),
    t('Recently we have been working on...'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('We are not doing anything right now.'),
    t('Content pane'),
    t('Projects'),
    t('View panes'),
  );
  $export['projects'] = $view;

  return $export;
}
