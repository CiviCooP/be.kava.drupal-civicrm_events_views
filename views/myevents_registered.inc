<?php
$view = new view();
$view->name = 'myevents_registered';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'civicrm_participant';
$view->human_name = 'Mijn evenementen';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Mijn evenementen';
$handler->display->display_options['css_class'] = 'view-vacancy';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'role';
$handler->display->display_options['access']['role'] = array(
  2 => '2',
);
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '9';
$handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
$handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
  'id' => 'id',
  'start_date' => 'start_date',
  'title' => 'title',
  'role' => 'role',
  'status' => 'status',
  'nothing' => 'nothing',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
  'id' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'start_date' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'title' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'role' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'status' => array(
    'sortable' => 0,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
  'nothing' => array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  ),
);
/* Voet: Global: View area */
$handler->display->display_options['footer']['view']['id'] = 'view';
$handler->display->display_options['footer']['view']['table'] = 'views';
$handler->display->display_options['footer']['view']['field'] = 'view';
$handler->display->display_options['footer']['view']['empty'] = TRUE;
$handler->display->display_options['footer']['view']['view_to_insert'] = 'myevents_attended:block_myevents_attended';
/* Voet: Global: View area */
$handler->display->display_options['footer']['view_1']['id'] = 'view_1';
$handler->display->display_options['footer']['view_1']['table'] = 'views';
$handler->display->display_options['footer']['view_1']['field'] = 'view';
$handler->display->display_options['footer']['view_1']['view_to_insert'] = 'myevents_cancelled:block_myevents_cancelled';
/* No results behavior: Global: Unfiltered text */
$handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
$handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
$handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
$handler->display->display_options['empty']['area_text_custom']['content'] = 'U bent nog niet aangemeld voor toekomstige evenementen.';
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
$handler->display->display_options['fields']['start_date']['label'] = 'Datum';
$handler->display->display_options['fields']['start_date']['date_format'] = 'short';
$handler->display->display_options['fields']['start_date']['second_date_format'] = 'long';
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
/* Veld: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'Afmelden';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['path'] = 'evenementen/afmelden/[id]?destination=evenementen/mijn';
$handler->display->display_options['fields']['nothing']['alter']['absolute'] = TRUE;
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Sort criterion: CiviCRM Events: Start Date */
$handler->display->display_options['sorts']['start_date']['id'] = 'start_date';
$handler->display->display_options['sorts']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['sorts']['start_date']['field'] = 'start_date';
$handler->display->display_options['sorts']['start_date']['relationship'] = 'event_id';
/* Filter criterion: Gebruiker: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'drupal_id';
$handler->display->display_options['filters']['uid_current']['value'] = '1';
/* Filter criterion: CiviCRM Events: Start Date */
$handler->display->display_options['filters']['start_date']['id'] = 'start_date';
$handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['start_date']['field'] = 'start_date';
$handler->display->display_options['filters']['start_date']['operator'] = '>=';
$handler->display->display_options['filters']['start_date']['value']['value'] = 'now';
$handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
/* Filter criterion: CiviCRM Participants: Participant Status */
$handler->display->display_options['filters']['status']['id'] = 'status';
$handler->display->display_options['filters']['status']['table'] = 'civicrm_participant';
$handler->display->display_options['filters']['status']['field'] = 'status';
$handler->display->display_options['filters']['status']['value'] = array(
  1 => '1',
  2 => '2',
  5 => '5',
  6 => '6',
  9 => '9',
  13 => '13',
  14 => '14',
  15 => '15',
);

/* Display: Pagina Mijn evenementen (alle blokken) */
$handler = $view->new_display('page', 'Pagina Mijn evenementen (alle blokken)', 'page_myevents_registered');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-events--overview';
$handler->display->display_options['path'] = 'evenementen/mijn';
$handler->display->display_options['menu']['title'] = 'Mijn evenementen';
$handler->display->display_options['menu']['weight'] = '0';
$handler->display->display_options['menu']['name'] = 'main-menu';
$handler->display->display_options['menu']['context'] = 0;
$handler->display->display_options['menu']['context_only_inline'] = 0;

/* Display: Blok Mijn evenementen (aangemeld) */
$handler = $view->new_display('block', 'Blok Mijn evenementen (aangemeld)', 'block_myevents_registered');
$handler->display->display_options['defaults']['footer'] = FALSE;
$translatables['myevents_registered'] = array(
  t('Master'),
  t('Mijn evenementen'),
  t('more'),
  t('Apply'),
  t('Opnieuw instellen'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« eerste'),
  t('‹ vorige'),
  t('volgende ›'),
  t('laatste »'),
  t('U bent nog niet aangemeld voor toekomstige evenementen.'),
  t('Event'),
  t('Contact'),
  t('Drupal User'),
  t('.'),
  t('Datum'),
  t('Evenement'),
  t('Rol'),
  t('Status'),
  t('Afmelden'),
  t('Pagina Mijn evenementen (alle blokken)'),
  t('Blok Mijn evenementen (aangemeld)'),
);
