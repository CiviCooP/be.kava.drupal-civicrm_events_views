<?php
$view = new view();
$view->name = 'myevents_attended';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'civicrm_participant';
$view->human_name = 'Mijn evenementen (historie)';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Mijn deelgenomen evenementen';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  2 => '2',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren op';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '0';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
$handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
$handler->display->display_options['style_plugin'] = 'views_aggregator';
$handler->display->display_options['style_options']['columns'] = array(
  'id' => 'id',
  'start_date' => 'start_date',
  'title' => 'title',
  'role' => 'role',
  'status' => 'status',
  'accreditatiepunten_9' => 'accreditatiepunten_9',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'start_date' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'role' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 0,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
  'accreditatiepunten_9' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
    'has_aggr' => 0,
    'aggr' => array(
      'views_aggregator_first' => 'views_aggregator_first',
    ),
    'aggr_par' => '',
    'has_aggr_column' => 1,
    'aggr_column' => 'views_aggregator_sum',
    'aggr_par_column' => '',
  ),
);
$handler->display->display_options['style_options']['column_aggregation']['totals_per_page'] = '0';
$handler->display->display_options['style_options']['column_aggregation']['totals_row_position'] = array(
  1 => 0,
  2 => '2',
);
$handler->display->display_options['style_options']['column_aggregation']['precision'] = '0';
/* Kop: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['label'] = 'Title';
$handler->display->display_options['header']['area']['content'] = '<h2>Ik was bij</h2>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = 'U heeft nog niet deelgenomen aan evenementen';
/* Relationship: CiviCRM Participants: Event ID */
$handler->display->display_options['relationships']['event_id']['id'] = 'event_id';
$handler->display->display_options['relationships']['event_id']['table'] = 'civicrm_participant';
$handler->display->display_options['relationships']['event_id']['field'] = 'event_id';
$handler->display->display_options['relationships']['event_id']['label'] = 'Event';
$handler->display->display_options['relationships']['event_id']['required'] = TRUE;
/* Relationship: CiviCRM Participants: Participant's Contact ID */
$handler->display->display_options['relationships']['contact_id']['id'] = 'contact_id';
$handler->display->display_options['relationships']['contact_id']['table'] = 'civicrm_participant';
$handler->display->display_options['relationships']['contact_id']['field'] = 'contact_id';
$handler->display->display_options['relationships']['contact_id']['label'] = 'Contact';
$handler->display->display_options['relationships']['contact_id']['required'] = TRUE;
/* Relationship: CiviCRM Contacts: Drupal ID */
$handler->display->display_options['relationships']['drupal_id']['id'] = 'drupal_id';
$handler->display->display_options['relationships']['drupal_id']['table'] = 'civicrm_contact';
$handler->display->display_options['relationships']['drupal_id']['field'] = 'drupal_id';
$handler->display->display_options['relationships']['drupal_id']['relationship'] = 'contact_id';
$handler->display->display_options['relationships']['drupal_id']['required'] = TRUE;
/* Veld: CiviCRM Participants: Participant ID */
$handler->display->display_options['fields']['id']['id'] = 'id';
$handler->display->display_options['fields']['id']['table'] = 'civicrm_participant';
$handler->display->display_options['fields']['id']['field'] = 'id';
$handler->display->display_options['fields']['id']['label'] = '';
$handler->display->display_options['fields']['id']['exclude'] = TRUE;
$handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['id']['separator'] = '';
/* Veld: CiviCRM Events: Start Date */
$handler->display->display_options['fields']['start_date']['id'] = 'start_date';
$handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['start_date']['field'] = 'start_date';
$handler->display->display_options['fields']['start_date']['relationship'] = 'event_id';
$handler->display->display_options['fields']['start_date']['label'] = 'Date';
$handler->display->display_options['fields']['start_date']['date_format'] = 'short';
/* Veld: CiviCRM Events: Titel */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['relationship'] = 'event_id';
$handler->display->display_options['fields']['title']['label'] = 'Evenement';
/* Veld: CiviCRM Participants: Participant Role */
$handler->display->display_options['fields']['role']['id'] = 'role';
$handler->display->display_options['fields']['role']['table'] = 'civicrm_participant';
$handler->display->display_options['fields']['role']['field'] = 'role';
$handler->display->display_options['fields']['role']['label'] = 'Rol';
/* Veld: CiviCRM Participants: Participant Status */
$handler->display->display_options['fields']['status']['id'] = 'status';
$handler->display->display_options['fields']['status']['table'] = 'civicrm_participant';
$handler->display->display_options['fields']['status']['field'] = 'status';
$handler->display->display_options['fields']['status']['label'] = 'Status';
/* Sort criterion: CiviCRM Events: Start Date */
$handler->display->display_options['sorts']['start_date']['id'] = 'start_date';
$handler->display->display_options['sorts']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['sorts']['start_date']['field'] = 'start_date';
$handler->display->display_options['sorts']['start_date']['relationship'] = 'event_id';
$handler->display->display_options['sorts']['start_date']['order'] = 'DESC';
$handler->display->display_options['filter_groups']['operator'] = 'OR';
/* Filter criterion: Gebruiker: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'drupal_id';
$handler->display->display_options['filters']['uid_current']['value'] = '1';
$handler->display->display_options['filters']['uid_current']['group'] = 1;
/* Filter criterion: CiviCRM Events: Start Date */
$handler->display->display_options['filters']['start_date']['id'] = 'start_date';
$handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['start_date']['field'] = 'start_date';
$handler->display->display_options['filters']['start_date']['operator'] = '<=';
$handler->display->display_options['filters']['start_date']['value']['value'] = 'now';
$handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
$handler->display->display_options['filters']['start_date']['group'] = 1;
/* Filter criterion: CiviCRM Participants: Participant Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'civicrm_participant';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  1 => '1',
  2 => '2',
);
$handler->display->display_options['filters']['status']['group'] = 1;

/* Display: Blok Mijn evenementen (historie) */
$handler = $view->new_display('block', 'Blok Mijn evenementen (historie)', 'block_myevents_attended');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-vacancy';
$handler->display->display_options['defaults']['footer'] = FALSE;
$handler->display->display_options['block_description'] = 'Mijn evenementen (historie)';
$translatables['myevents_attended'] = array(
  t('Master'),
  t('Mijn deelgenomen evenementen'),
  t('more'),
  t('Apply'),
  t('Opnieuw instellen'),
  t('Sorteren op'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« eerste'),
  t('‹ vorige'),
  t('volgende ›'),
  t('laatste »'),
  t('Title'),
  t('<h2>Ik was bij</h2>'),
  t('U heeft nog niet deelgenomen aan evenementen'),
  t('Event'),
  t('Contact'),
  t('Drupal User'),
  t('.'),
  t('Date'),
  t('Evenement'),
  t('Rol'),
  t('Status'),
  t('Blok Mijn evenementen (historie)'),
  t('Mijn evenementen (historie)'),
);
