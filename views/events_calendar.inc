<?php
$view = new view();
$view->name = 'events_calendar';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'civicrm_event';
$view->human_name = 'Evenementenkalender';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Eerstvolgende activiteiten';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['link_display'] = 'page_1';
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filteren';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
$handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sorteren';
$handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
$handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
        'allow_secondary' => 0,
        'secondary_label' => 'Uitgebreide opties',
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
    ),
    'event_type' => array(
        'bef_format' => 'default',
        'more_options' => array(
            'bef_select_all_none' => FALSE,
            'bef_collapsible' => 0,
            'is_secondary' => 0,
            'any_label' => 'Alle',
            'bef_filter_description' => '',
            'tokens' => array(
                'available' => array(
                    0 => 'global_types',
                    'secondary_label' => NULL,
                    'collapsible_label' => NULL,
                    'combine_rewrite' => NULL,
                    'reset_label' => NULL,
                    'bef_filter_description' => NULL,
                    'any_label' => NULL,
                    'filter_rewrite_values' => NULL,
                ),
                'secondary_label' => NULL,
                'collapsible_label' => NULL,
                'combine_rewrite' => NULL,
                'reset_label' => NULL,
                'bef_filter_description' => NULL,
                'any_label' => NULL,
                'filter_rewrite_values' => NULL,
            ),
            'rewrite' => array(
                'filter_rewrite_values' => '',
                'secondary_label' => NULL,
                'collapsible_label' => NULL,
                'combine_rewrite' => NULL,
                'reset_label' => NULL,
                'bef_filter_description' => NULL,
                'any_label' => NULL,
            ),
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'filter_rewrite_values' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'bef_filter_description' => NULL,
        'any_label' => NULL,
        'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
);
$handler->display->display_options['exposed_form']['options']['input_required'] = 0;
$handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_html';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'list';
$handler->display->display_options['row_plugin'] = 'fields';
/* Voet: Global: Text area */
$handler->display->display_options['footer']['area']['id'] = 'area';
$handler->display->display_options['footer']['area']['table'] = 'views';
$handler->display->display_options['footer']['area']['field'] = 'area';
/* Relationship: CiviCRM Events: Location Block */
$handler->display->display_options['relationships']['civicrm_loc_block']['id'] = 'civicrm_loc_block';
$handler->display->display_options['relationships']['civicrm_loc_block']['table'] = 'civicrm_event';
$handler->display->display_options['relationships']['civicrm_loc_block']['field'] = 'civicrm_loc_block';
$handler->display->display_options['relationships']['civicrm_loc_block']['label'] = 'LocBlock';
/* Relationship: CiviCRM Locations: Location Address */
$handler->display->display_options['relationships']['civicrm_loc_block_address']['id'] = 'civicrm_loc_block_address';
$handler->display->display_options['relationships']['civicrm_loc_block_address']['table'] = 'civicrm_loc_block';
$handler->display->display_options['relationships']['civicrm_loc_block_address']['field'] = 'civicrm_loc_block_address';
$handler->display->display_options['relationships']['civicrm_loc_block_address']['relationship'] = 'civicrm_loc_block';
$handler->display->display_options['relationships']['civicrm_loc_block_address']['label'] = 'Address';
/* Veld: CiviCRM Events: Start Date */
$handler->display->display_options['fields']['start_date']['id'] = 'start_date';
$handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['start_date']['field'] = 'start_date';
$handler->display->display_options['fields']['start_date']['label'] = 'Begin';
$handler->display->display_options['fields']['start_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['start_date']['date_format'] = 'short';
$handler->display->display_options['fields']['start_date']['second_date_format'] = 'long';
/* Veld: CiviCRM Events: End Date */
$handler->display->display_options['fields']['end_date']['id'] = 'end_date';
$handler->display->display_options['fields']['end_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['end_date']['field'] = 'end_date';
$handler->display->display_options['fields']['end_date']['label'] = 'Einde';
$handler->display->display_options['fields']['end_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['end_date']['date_format'] = 'short';
$handler->display->display_options['fields']['end_date']['second_date_format'] = 'long';
/* Veld: CiviCRM Events: Event Type */
$handler->display->display_options['fields']['event_type']['id'] = 'event_type';
$handler->display->display_options['fields']['event_type']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['event_type']['field'] = 'event_type';
$handler->display->display_options['fields']['event_type']['label'] = 'Type';
$handler->display->display_options['fields']['event_type']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Events: Titel */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_civicrm_event'] = 'custom';
$handler->display->display_options['fields']['title']['custom_link'] = '/evenementen/info/';
/* Veld: CiviCRM Events: Samenvatting */
$handler->display->display_options['fields']['summary']['id'] = 'summary';
$handler->display->display_options['fields']['summary']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['summary']['field'] = 'summary';
/* Veld: CiviCRM Custom: Zalen KAVA: Zaal */
$handler->display->display_options['fields']['zaal_5']['id'] = 'zaal_5';
$handler->display->display_options['fields']['zaal_5']['table'] = 'civicrm_value_event_zalen';
$handler->display->display_options['fields']['zaal_5']['field'] = 'zaal_5';
/* Veld: CiviCRM Events: Locatie Blok ID */
$handler->display->display_options['fields']['loc_block_id']['id'] = 'loc_block_id';
$handler->display->display_options['fields']['loc_block_id']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['loc_block_id']['field'] = 'loc_block_id';
$handler->display->display_options['fields']['loc_block_id']['label'] = '';
$handler->display->display_options['fields']['loc_block_id']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Events: Event duration */
$handler->display->display_options['fields']['duration_1']['id'] = 'duration_1';
$handler->display->display_options['fields']['duration_1']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['duration_1']['field'] = 'duration';
$handler->display->display_options['fields']['duration_1']['label'] = 'Duur';
$handler->display->display_options['fields']['duration_1']['alter']['text'] = '[duration_1] uur';
$handler->display->display_options['fields']['duration_1']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['duration_1']['hide_alter_empty'] = TRUE;
/* Veld: CiviCRM Address: Straatnaam */
$handler->display->display_options['fields']['street_name']['id'] = 'street_name';
$handler->display->display_options['fields']['street_name']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['street_name']['field'] = 'street_name';
$handler->display->display_options['fields']['street_name']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['street_name']['label'] = 'Adres';
/* Sort criterion: CiviCRM Events: Start Date */
$handler->display->display_options['sorts']['start_date']['id'] = 'start_date';
$handler->display->display_options['sorts']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['sorts']['start_date']['field'] = 'start_date';
/* Filter criterion: CiviCRM Events: Is Online Registration On */
$handler->display->display_options['filters']['is_online_registration']['id'] = 'is_online_registration';
$handler->display->display_options['filters']['is_online_registration']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['is_online_registration']['field'] = 'is_online_registration';
$handler->display->display_options['filters']['is_online_registration']['value'] = '1';
/* Filter criterion: CiviCRM Events: Start Date */
$handler->display->display_options['filters']['start_date']['id'] = 'start_date';
$handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['start_date']['field'] = 'start_date';
$handler->display->display_options['filters']['start_date']['operator'] = '>=';
$handler->display->display_options['filters']['start_date']['value']['value'] = 'now';
$handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
/* Filter criterion: CiviCRM Events: Event Type */
$handler->display->display_options['filters']['event_type']['id'] = 'event_type';
$handler->display->display_options['filters']['event_type']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['event_type']['field'] = 'event_type';
$handler->display->display_options['filters']['event_type']['exposed'] = TRUE;
$handler->display->display_options['filters']['event_type']['expose']['operator_id'] = 'event_type_op';
$handler->display->display_options['filters']['event_type']['expose']['label'] = 'Type';
$handler->display->display_options['filters']['event_type']['expose']['operator'] = 'event_type_op';
$handler->display->display_options['filters']['event_type']['expose']['identifier'] = 'event_type';
$handler->display->display_options['filters']['event_type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    6 => 0,
    5 => 0,
    10 => 0,
    7 => 0,
    8 => 0,
    9 => 0,
    4 => 0,
    3 => 0,
);
$handler->display->display_options['filters']['event_type']['group_info']['label'] = 'Event Type';
$handler->display->display_options['filters']['event_type']['group_info']['identifier'] = 'event_type';
$handler->display->display_options['filters']['event_type']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['event_type']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
);

/* Display: Pagina Evenementenkalender */
$handler = $view->new_display('page', 'Pagina Evenementenkalender', 'page_events');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['title'] = 'Evenementenkalender';
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Veld: CiviCRM Events: Titel */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_type'] = 'h2';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_civicrm_event'] = 'custom';
$handler->display->display_options['fields']['title']['custom_link'] = '/evenementen/info/';
/* Veld: CiviCRM Events: Start Date */
$handler->display->display_options['fields']['start_date']['id'] = 'start_date';
$handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['start_date']['field'] = 'start_date';
$handler->display->display_options['fields']['start_date']['label'] = 'Begin';
$handler->display->display_options['fields']['start_date']['date_format'] = 'short';
$handler->display->display_options['fields']['start_date']['second_date_format'] = 'long';
/* Veld: CiviCRM Events: End Date */
$handler->display->display_options['fields']['end_date']['id'] = 'end_date';
$handler->display->display_options['fields']['end_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['end_date']['field'] = 'end_date';
$handler->display->display_options['fields']['end_date']['label'] = 'Einde';
$handler->display->display_options['fields']['end_date']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['end_date']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['end_date']['date_format'] = 'short';
$handler->display->display_options['fields']['end_date']['second_date_format'] = 'long';
/* Veld: CiviCRM Events: Event duration */
$handler->display->display_options['fields']['duration_1']['id'] = 'duration_1';
$handler->display->display_options['fields']['duration_1']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['duration_1']['field'] = 'duration';
$handler->display->display_options['fields']['duration_1']['label'] = 'Duur';
$handler->display->display_options['fields']['duration_1']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['duration_1']['hide_alter_empty'] = TRUE;
/* Veld: CiviCRM Events: Event Type */
$handler->display->display_options['fields']['event_type']['id'] = 'event_type';
$handler->display->display_options['fields']['event_type']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['event_type']['field'] = 'event_type';
$handler->display->display_options['fields']['event_type']['label'] = 'Type';
/* Veld: CiviCRM Events: Samenvatting */
$handler->display->display_options['fields']['summary']['id'] = 'summary';
$handler->display->display_options['fields']['summary']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['summary']['field'] = 'summary';
$handler->display->display_options['fields']['summary']['label'] = '';
$handler->display->display_options['fields']['summary']['element_type'] = 'em';
$handler->display->display_options['fields']['summary']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['summary']['hide_empty'] = TRUE;
/* Veld: CiviCRM Address: Full Street Address */
$handler->display->display_options['fields']['street_address']['id'] = 'street_address';
$handler->display->display_options['fields']['street_address']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['street_address']['field'] = 'street_address';
$handler->display->display_options['fields']['street_address']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['street_address']['label'] = 'Adres';
$handler->display->display_options['fields']['street_address']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['street_address']['location_type'] = '0';
$handler->display->display_options['fields']['street_address']['location_op'] = '0';
$handler->display->display_options['fields']['street_address']['is_primary'] = 0;
$handler->display->display_options['fields']['street_address']['is_billing'] = 0;
/* Veld: CiviCRM Address: ZIP / Postal Code */
$handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['postal_code']['label'] = 'Postcode';
$handler->display->display_options['fields']['postal_code']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['postal_code']['location_type'] = '0';
$handler->display->display_options['fields']['postal_code']['location_op'] = '0';
$handler->display->display_options['fields']['postal_code']['is_primary'] = 0;
$handler->display->display_options['fields']['postal_code']['is_billing'] = 0;
/* Veld: CiviCRM Address: City / Suburb */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['city']['field'] = 'city';
$handler->display->display_options['fields']['city']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['city']['label'] = 'Plaats';
$handler->display->display_options['fields']['city']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['city']['location_type'] = '0';
$handler->display->display_options['fields']['city']['location_op'] = '0';
$handler->display->display_options['fields']['city']['is_primary'] = 0;
$handler->display->display_options['fields']['city']['is_billing'] = 0;
/* Veld: CiviCRM Custom: Zalen KAVA: Zaal */
$handler->display->display_options['fields']['zaal_5']['id'] = 'zaal_5';
$handler->display->display_options['fields']['zaal_5']['table'] = 'civicrm_value_event_zalen';
$handler->display->display_options['fields']['zaal_5']['field'] = 'zaal_5';
$handler->display->display_options['fields']['zaal_5']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['zaal_5']['empty_zero'] = TRUE;
/* Veld: CiviCRM Events: Text Link */
$handler->display->display_options['fields']['text_link']['id'] = 'text_link';
$handler->display->display_options['fields']['text_link']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['text_link']['field'] = 'text_link';
$handler->display->display_options['fields']['text_link']['label'] = '';
$handler->display->display_options['fields']['text_link']['element_type'] = 'strong';
$handler->display->display_options['fields']['text_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['text_link']['link_to_civicrm_event'] = 'custom';
$handler->display->display_options['fields']['text_link']['custom_link'] = '/evenementen/info/';
$handler->display->display_options['fields']['text_link']['link_text'] = 'Meer informatie';
/* Veld: CiviCRM Events: Text Link */
$handler->display->display_options['fields']['text_link_1']['id'] = 'text_link_1';
$handler->display->display_options['fields']['text_link_1']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['text_link_1']['field'] = 'text_link';
$handler->display->display_options['fields']['text_link_1']['label'] = '';
$handler->display->display_options['fields']['text_link_1']['element_type'] = 'strong';
$handler->display->display_options['fields']['text_link_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['text_link_1']['link_to_civicrm_event'] = 'register';
$handler->display->display_options['fields']['text_link_1']['link_text'] = 'Nu inschrijven';
$handler->display->display_options['path'] = 'evenementen/overzicht';

/* Display: Blok Evenementenkalender voorpagina */
$handler = $view->new_display('block', 'Blok Evenementenkalender voorpagina', 'block_events_frontpage');
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'table';
$handler->display->display_options['style_options']['columns'] = array(
    'start_date' => 'start_date',
    'event_type' => 'event_type',
    'title' => 'title',
    'is_new' => 'is_new',
);
$handler->display->display_options['style_options']['default'] = '-1';
$handler->display->display_options['style_options']['info'] = array(
    'start_date' => array(
        'sortable' => 0,
        'default_sort_order' => 'asc',
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    ),
    'event_type' => array(
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
    'is_new' => array(
        'align' => '',
        'separator' => '',
        'empty_column' => 0,
    ),
);
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Veld: CiviCRM Events: Start Date */
$handler->display->display_options['fields']['start_date']['id'] = 'start_date';
$handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['start_date']['field'] = 'start_date';
$handler->display->display_options['fields']['start_date']['label'] = 'Begin';
$handler->display->display_options['fields']['start_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['start_date']['date_format'] = 'short';
$handler->display->display_options['fields']['start_date']['second_date_format'] = 'long';
/* Veld: CiviCRM Events: Event Type */
$handler->display->display_options['fields']['event_type']['id'] = 'event_type';
$handler->display->display_options['fields']['event_type']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['event_type']['field'] = 'event_type';
$handler->display->display_options['fields']['event_type']['label'] = 'Type';
$handler->display->display_options['fields']['event_type']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Events: Titel */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_civicrm_event'] = 'custom';
$handler->display->display_options['fields']['title']['custom_link'] = '/evenementen/info/';
/* Veld: CiviCRM Events: Is new? */
$handler->display->display_options['fields']['is_new']['id'] = 'is_new';
$handler->display->display_options['fields']['is_new']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['is_new']['field'] = 'is_new';
$handler->display->display_options['fields']['is_new']['label'] = 'Nieuw?';
$handler->display->display_options['fields']['is_new']['days_count'] = '7';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: CiviCRM Events: Is Online Registration On */
$handler->display->display_options['filters']['is_online_registration']['id'] = 'is_online_registration';
$handler->display->display_options['filters']['is_online_registration']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['is_online_registration']['field'] = 'is_online_registration';
$handler->display->display_options['filters']['is_online_registration']['value'] = '1';
/* Filter criterion: CiviCRM Events: Start Date */
$handler->display->display_options['filters']['start_date']['id'] = 'start_date';
$handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['start_date']['field'] = 'start_date';
$handler->display->display_options['filters']['start_date']['operator'] = '>=';
$handler->display->display_options['filters']['start_date']['value']['value'] = 'now';
$handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
$handler->display->display_options['block_description'] = 'Blok Evenementenkalender voorpagina';
$translatables['events_calendar'] = array(
    t('Master'),
    t('Eerstvolgende activiteiten'),
    t('more'),
    t('Filteren'),
    t('Opnieuw instellen'),
    t('Sorteren'),
    t('Asc'),
    t('Desc'),
    t('Uitgebreide opties'),
    t('Alle'),
    t('Select any filter and click on Apply to see results'),
    t('LocBlock'),
    t('Address'),
    t('Begin'),
    t('Einde'),
    t('Type'),
    t('Titel'),
    t('Samenvatting'),
    t('Zaal'),
    t('.'),
    t(','),
    t('Duur'),
    t('[duration_1] uur'),
    t('Adres'),
    t('Event Type'),
    t('Pagina Evenementenkalender'),
    t('Evenementenkalender'),
    t('Postcode'),
    t('Plaats'),
    t('Blok Evenementenkalender voorpagina'),
    t('Nieuw?'),
);
