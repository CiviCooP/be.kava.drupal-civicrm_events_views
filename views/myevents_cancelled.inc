<?php
$view = new view();
$view->name = 'myevents_cancelled';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'civicrm_participant';
$view->human_name = 'Mijn evenementen (geannuleerd)';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Ik ben niet bij';
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
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
    'start_date' => 'start_date',
    'title' => 'title',
    'role' => 'role',
    'status' => 'status',
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
);
/* Kop: Global: Text area */
$handler->display->display_options['header']['area']['id'] = 'area';
$handler->display->display_options['header']['area']['table'] = 'views';
$handler->display->display_options['header']['area']['field'] = 'area';
$handler->display->display_options['header']['area']['content'] = '<h2>Ik ben niet bij</h2>';
$handler->display->display_options['header']['area']['format'] = 'full_html';
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
$handler->display->display_options['fields']['title']['label'] = 'Evenementen';
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
$handler->display->display_options['filters']['uid_current_1']['id'] = 'uid_current_1';
$handler->display->display_options['filters']['uid_current_1']['table'] = 'users';
$handler->display->display_options['filters']['uid_current_1']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current_1']['relationship'] = 'drupal_id';
$handler->display->display_options['filters']['uid_current_1']['value'] = '1';
$handler->display->display_options['filters']['uid_current_1']['group'] = 1;
/* Filter criterion: CiviCRM Participants: Participant Status */
$handler->display->display_options['filters']['status_1']['id'] = 'status_1';
$handler->display->display_options['filters']['status_1']['table'] = 'civicrm_participant';
$handler->display->display_options['filters']['status_1']['field'] = 'status';
$handler->display->display_options['filters']['status_1']['value'] = array(
    3 => '3',
    4 => '4',
);
$handler->display->display_options['filters']['status_1']['group'] = 1;

/* Display: Blok Mijn evenementen (geannuleerd) */
$handler = $view->new_display('block', 'Blok Mijn evenementen (geannuleerd)', 'block_myevents_cancelled');
$handler->display->display_options['block_description'] = 'Mijn evenementen (geannuleerd)';
$translatables['myevents_cancelled'] = array(
    t('Master'),
    t('Ik ben niet bij'),
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
    t('<h2>Ik ben niet bij</h2>'),
    t('Event'),
    t('Contact'),
    t('Drupal User'),
    t('.'),
    t('Datum'),
    t('Evenementen'),
    t('Rol'),
    t('Status'),
    t('Blok Mijn evenementen (geannuleerd)'),
    t('Mijn evenementen (geannuleerd)'),
);
