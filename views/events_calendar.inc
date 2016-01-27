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
$handler->display->display_options['css_class'] = 'view-events--frontpage view-events--table';
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
$handler->display->display_options['style_plugin'] = 'default';
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
/* Veld: CiviCRM Custom: Categorie en zaal: Zaal */
$handler->display->display_options['fields']['zaal_5']['id'] = 'zaal_5';
$handler->display->display_options['fields']['zaal_5']['table'] = 'civicrm_value_event_zalen';
$handler->display->display_options['fields']['zaal_5']['field'] = 'zaal_5';
/* Veld: CiviCRM Events: Location Block ID */
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
/* Veld: CiviCRM Address: Street Name */
$handler->display->display_options['fields']['street_name']['id'] = 'street_name';
$handler->display->display_options['fields']['street_name']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['street_name']['field'] = 'street_name';
$handler->display->display_options['fields']['street_name']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['street_name']['label'] = 'Adres';
/* Sort criterion: CiviCRM Events: Start Date */
$handler->display->display_options['sorts']['start_date']['id'] = 'start_date';
$handler->display->display_options['sorts']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['sorts']['start_date']['field'] = 'start_date';
$handler->display->display_options['sorts']['start_date']['exposed'] = TRUE;
$handler->display->display_options['sorts']['start_date']['expose']['label'] = 'Datum';
/* Sort criterion: CiviCRM Events: Titel */
$handler->display->display_options['sorts']['title']['id'] = 'title';
$handler->display->display_options['sorts']['title']['table'] = 'civicrm_event';
$handler->display->display_options['sorts']['title']['field'] = 'title';
$handler->display->display_options['sorts']['title']['exposed'] = TRUE;
$handler->display->display_options['sorts']['title']['expose']['label'] = 'Titel';
/* Filter criterion: CiviCRM Events: Event Type */
$handler->display->display_options['filters']['event_type_1']['id'] = 'event_type_1';
$handler->display->display_options['filters']['event_type_1']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['event_type_1']['field'] = 'event_type';
$handler->display->display_options['filters']['event_type_1']['operator'] = 'not in';
$handler->display->display_options['filters']['event_type_1']['value'] = array(
  9 => '9',
);
$handler->display->display_options['filters']['event_type_1']['group'] = 1;
/* Filter criterion: CiviCRM Events: Start Date */
$handler->display->display_options['filters']['start_date']['id'] = 'start_date';
$handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['start_date']['field'] = 'start_date';
$handler->display->display_options['filters']['start_date']['operator'] = '>=';
$handler->display->display_options['filters']['start_date']['value']['value'] = 'now';
$handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
$handler->display->display_options['filters']['start_date']['group'] = 1;
/* Filter criterion: CiviCRM Events: Event Type */
$handler->display->display_options['filters']['event_type']['id'] = 'event_type';
$handler->display->display_options['filters']['event_type']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['event_type']['field'] = 'event_type';
$handler->display->display_options['filters']['event_type']['value'] = array(
  1 => '1',
  6 => '6',
  7 => '7',
  8 => '8',
);
$handler->display->display_options['filters']['event_type']['group'] = 1;
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
  11 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  4 => 0,
  10 => 0,
  3 => 0,
);
$handler->display->display_options['filters']['event_type']['expose']['reduce'] = TRUE;
$handler->display->display_options['filters']['event_type']['group_info']['label'] = 'Event Type';
$handler->display->display_options['filters']['event_type']['group_info']['identifier'] = 'event_type';
$handler->display->display_options['filters']['event_type']['group_info']['remember'] = FALSE;
$handler->display->display_options['filters']['event_type']['group_info']['group_items'] = array(
  1 => array(),
  2 => array(),
  3 => array(),
);
/* Filter criterion: CiviCRM Custom: Categorie en zaal: Categorie */
$handler->display->display_options['filters']['categorie_44']['id'] = 'categorie_44';
$handler->display->display_options['filters']['categorie_44']['table'] = 'civicrm_value_event_zalen';
$handler->display->display_options['filters']['categorie_44']['field'] = 'categorie_44';
$handler->display->display_options['filters']['categorie_44']['exposed'] = TRUE;
$handler->display->display_options['filters']['categorie_44']['expose']['operator_id'] = 'categorie_44_op';
$handler->display->display_options['filters']['categorie_44']['expose']['label'] = 'Categorie';
$handler->display->display_options['filters']['categorie_44']['expose']['operator'] = 'categorie_44_op';
$handler->display->display_options['filters']['categorie_44']['expose']['identifier'] = 'categorie_44';
$handler->display->display_options['filters']['categorie_44']['expose']['remember_roles'] = array(
  2 => '2',
  1 => 0,
  6 => 0,
  5 => 0,
  11 => 0,
  7 => 0,
  8 => 0,
  9 => 0,
  4 => 0,
  10 => 0,
  3 => 0,
);

/* Display: Blok Evenementenkalender voorpagina */
$handler = $view->new_display('block', 'Blok Evenementenkalender voorpagina', 'block_events_frontpage');
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-events--frontpage';
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'some';
$handler->display->display_options['pager']['options']['items_per_page'] = '10';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Veld: CiviCRM Events: Start Date */
$handler->display->display_options['fields']['start_date']['id'] = 'start_date';
$handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['start_date']['field'] = 'start_date';
$handler->display->display_options['fields']['start_date']['label'] = '';
$handler->display->display_options['fields']['start_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['start_date']['date_format'] = 'custom_d_f_';
$handler->display->display_options['fields']['start_date']['second_date_format'] = 'long';
/* Veld: CiviCRM Events: Event Type */
$handler->display->display_options['fields']['event_type']['id'] = 'event_type';
$handler->display->display_options['fields']['event_type']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['event_type']['field'] = 'event_type';
$handler->display->display_options['fields']['event_type']['label'] = '';
$handler->display->display_options['fields']['event_type']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Events: Titel */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['link_to_civicrm_event'] = 'custom';
$handler->display->display_options['fields']['title']['custom_link'] = '/evenementen/info/';
/* Veld: CiviCRM Events: Is new? */
$handler->display->display_options['fields']['is_new']['id'] = 'is_new';
$handler->display->display_options['fields']['is_new']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['is_new']['field'] = 'is_new';
$handler->display->display_options['fields']['is_new']['label'] = '';
$handler->display->display_options['fields']['is_new']['element_type'] = '0';
$handler->display->display_options['fields']['is_new']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['is_new']['days_count'] = '7';
$handler->display->display_options['defaults']['sorts'] = FALSE;
/* Sort criterion: CiviCRM Events: Start Date */
$handler->display->display_options['sorts']['start_date']['id'] = 'start_date';
$handler->display->display_options['sorts']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['sorts']['start_date']['field'] = 'start_date';
$handler->display->display_options['defaults']['filter_groups'] = FALSE;
$handler->display->display_options['defaults']['filters'] = FALSE;
/* Filter criterion: CiviCRM Events: Event Type */
$handler->display->display_options['filters']['event_type']['id'] = 'event_type';
$handler->display->display_options['filters']['event_type']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['event_type']['field'] = 'event_type';
$handler->display->display_options['filters']['event_type']['operator'] = 'not in';
$handler->display->display_options['filters']['event_type']['value'] = array(
  9 => '9',
);
$handler->display->display_options['filters']['event_type']['group'] = 1;
/* Filter criterion: CiviCRM Events: Start Date */
$handler->display->display_options['filters']['start_date']['id'] = 'start_date';
$handler->display->display_options['filters']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['start_date']['field'] = 'start_date';
$handler->display->display_options['filters']['start_date']['operator'] = '>=';
$handler->display->display_options['filters']['start_date']['value']['value'] = 'now';
$handler->display->display_options['filters']['start_date']['value']['type'] = 'offset';
$handler->display->display_options['filters']['start_date']['group'] = 1;
$handler->display->display_options['block_description'] = 'Blok Evenementenkalender voorpagina';

/* Display: Evenementenkalender - Panels agenda pagina */
$handler = $view->new_display('panel_pane', 'Evenementenkalender - Panels agenda pagina', 'pane_events');
$handler->display->display_options['defaults']['title'] = FALSE;
$handler->display->display_options['defaults']['css_class'] = FALSE;
$handler->display->display_options['css_class'] = 'view-events--overview';
$handler->display->display_options['defaults']['use_ajax'] = FALSE;
$handler->display->display_options['defaults']['exposed_form'] = FALSE;
$handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
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
  'sort' => array(
    'bef_format' => 'default',
    'advanced' => array(
      'collapsible' => 0,
      'collapsible_label' => 'Sort options',
      'combine' => 0,
      'combine_param' => 'sort_bef_combine',
      'combine_rewrite' => '',
      'reset' => 0,
      'reset_label' => '',
      'is_secondary' => 0,
      'secondary_label' => NULL,
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
  'event_type' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => 'Alles',
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
  'categorie_44' => array(
    'bef_format' => 'default',
    'more_options' => array(
      'bef_select_all_none' => FALSE,
      'bef_collapsible' => 0,
      'is_secondary' => 0,
      'any_label' => 'Alles',
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
$handler->display->display_options['defaults']['pager'] = FALSE;
$handler->display->display_options['pager']['type'] = 'full';
$handler->display->display_options['pager']['options']['items_per_page'] = '16';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['pager']['options']['id'] = '0';
$handler->display->display_options['pager']['options']['quantity'] = '5';
$handler->display->display_options['pager']['options']['tags']['first'] = '« eerste';
$handler->display->display_options['pager']['options']['tags']['previous'] = '‹ vorige';
$handler->display->display_options['pager']['options']['tags']['next'] = 'volgende ›';
$handler->display->display_options['pager']['options']['tags']['last'] = 'laatste »';
$handler->display->display_options['defaults']['style_plugin'] = FALSE;
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['defaults']['style_options'] = FALSE;
$handler->display->display_options['defaults']['row_plugin'] = FALSE;
$handler->display->display_options['row_plugin'] = 'fields';
$handler->display->display_options['defaults']['row_options'] = FALSE;
$handler->display->display_options['exposed_block'] = TRUE;
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Veld: CiviCRM Events: Event ID */
$handler->display->display_options['fields']['id']['id'] = 'id';
$handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['id']['field'] = 'id';
$handler->display->display_options['fields']['id']['label'] = '';
$handler->display->display_options['fields']['id']['exclude'] = TRUE;
$handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['id']['separator'] = '';
/* Veld: CiviCRM Events: Titel */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['element_type'] = 'h2';
$handler->display->display_options['fields']['title']['element_class'] = 'field-title';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['title']['custom_link'] = '/evenementen/info/';
/* Veld: CiviCRM Events: End Date */
$handler->display->display_options['fields']['end_date']['id'] = 'end_date';
$handler->display->display_options['fields']['end_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['end_date']['field'] = 'end_date';
$handler->display->display_options['fields']['end_date']['label'] = '';
$handler->display->display_options['fields']['end_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['end_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['end_date']['date_format'] = 'short';
$handler->display->display_options['fields']['end_date']['second_date_format'] = 'long';
/* Veld: CiviCRM Events: Start Date */
$handler->display->display_options['fields']['start_date']['id'] = 'start_date';
$handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['start_date']['field'] = 'start_date';
$handler->display->display_options['fields']['start_date']['label'] = '';
$handler->display->display_options['fields']['start_date']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['start_date']['alter']['text'] = '[start_date] - [end_date]';
$handler->display->display_options['fields']['start_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['start_date']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['start_date']['element_wrapper_class'] = 'events-field-with-label';
$handler->display->display_options['fields']['start_date']['date_format'] = 'short';
$handler->display->display_options['fields']['start_date']['second_date_format'] = 'long';
/* Veld: CiviCRM Events: Event Type */
$handler->display->display_options['fields']['event_type']['id'] = 'event_type';
$handler->display->display_options['fields']['event_type']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['event_type']['field'] = 'event_type';
$handler->display->display_options['fields']['event_type']['label'] = '';
$handler->display->display_options['fields']['event_type']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Events: Samenvatting */
$handler->display->display_options['fields']['summary']['id'] = 'summary';
$handler->display->display_options['fields']['summary']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['summary']['field'] = 'summary';
$handler->display->display_options['fields']['summary']['label'] = '';
$handler->display->display_options['fields']['summary']['element_type'] = 'div';
$handler->display->display_options['fields']['summary']['element_class'] = 'field-body';
$handler->display->display_options['fields']['summary']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Events: Start Date */
$handler->display->display_options['fields']['start_date_1']['id'] = 'start_date_1';
$handler->display->display_options['fields']['start_date_1']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['start_date_1']['field'] = 'start_date';
$handler->display->display_options['fields']['start_date_1']['label'] = 'Aanvangsuur';
$handler->display->display_options['fields']['start_date_1']['exclude'] = TRUE;
$handler->display->display_options['fields']['start_date_1']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['start_date_1']['alter']['text'] = '[start_date_1] uur';
$handler->display->display_options['fields']['start_date_1']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['start_date_1']['element_wrapper_class'] = 'event-field-with-label';
$handler->display->display_options['fields']['start_date_1']['date_format'] = 'starting_hour_h_i_';
$handler->display->display_options['fields']['start_date_1']['second_date_format'] = 'long';
/* Veld: CiviCRM Events: Event duration */
$handler->display->display_options['fields']['duration_1']['id'] = 'duration_1';
$handler->display->display_options['fields']['duration_1']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['duration_1']['field'] = 'duration';
$handler->display->display_options['fields']['duration_1']['label'] = '';
$handler->display->display_options['fields']['duration_1']['alter']['text'] = '<div class="view-events-column view-events-column--left">
<div class="views-field views-field-start-date-1 event-field-with-label">
<div class="views-label views-label-startdate-1">Aanvangsuur: </div>
<div class="field-content">[start_date_1]</div>
</div>
<div class="views-field-duration-1 event-field-with-label">
<div class="views-label views-label-duration">Duur: </div>
<div class="field-content">[duration_1] uur</div>
</div>
</div>';
$handler->display->display_options['fields']['duration_1']['element_type'] = '0';
$handler->display->display_options['fields']['duration_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['duration_1']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['duration_1']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['duration_1']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['duration_1']['hide_alter_empty'] = TRUE;
/* Veld: CiviCRM Custom: Categorie en zaal: Zaal */
$handler->display->display_options['fields']['zaal_5']['id'] = 'zaal_5';
$handler->display->display_options['fields']['zaal_5']['table'] = 'civicrm_value_event_zalen';
$handler->display->display_options['fields']['zaal_5']['field'] = 'zaal_5';
$handler->display->display_options['fields']['zaal_5']['exclude'] = TRUE;
$handler->display->display_options['fields']['zaal_5']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['zaal_5']['element_wrapper_class'] = 'event-field-with-label';
$handler->display->display_options['fields']['zaal_5']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['zaal_5']['empty_zero'] = TRUE;
/* Veld: CiviCRM Address: ZIP / Postal Code */
$handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['postal_code']['label'] = '';
$handler->display->display_options['fields']['postal_code']['exclude'] = TRUE;
$handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['postal_code']['location_type'] = '0';
$handler->display->display_options['fields']['postal_code']['location_op'] = '0';
$handler->display->display_options['fields']['postal_code']['is_primary'] = 0;
$handler->display->display_options['fields']['postal_code']['is_billing'] = 0;
/* Veld: CiviCRM Address: City / Suburb */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['city']['field'] = 'city';
$handler->display->display_options['fields']['city']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['city']['label'] = '';
$handler->display->display_options['fields']['city']['exclude'] = TRUE;
$handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['city']['location_type'] = '0';
$handler->display->display_options['fields']['city']['location_op'] = '0';
$handler->display->display_options['fields']['city']['is_primary'] = 0;
$handler->display->display_options['fields']['city']['is_billing'] = 0;
/* Veld: CiviCRM Address: Full Street Address */
$handler->display->display_options['fields']['street_address']['id'] = 'street_address';
$handler->display->display_options['fields']['street_address']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['street_address']['field'] = 'street_address';
$handler->display->display_options['fields']['street_address']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['street_address']['label'] = '';
$handler->display->display_options['fields']['street_address']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['street_address']['alter']['text'] = '<div class="view-events-column--middle view-events-column">
<div class="views-field views-field-zaal-5 event-field-with-label">
<div class="views-label views-label-zaal-5">Zaal: </div>
<div class="field-content">[zaal_5]</div>
</div>
<div class="views-field views-field-street-address event-field-with-label">
<div class="views-label views-label-street-address">Locatie: </div>
<div class="field-content">[street_address]<div class="street__postal-city">[postal_code] - [city]</div></div>
</div>
</div>';
$handler->display->display_options['fields']['street_address']['element_type'] = '0';
$handler->display->display_options['fields']['street_address']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['street_address']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['street_address']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['street_address']['location_type'] = '0';
$handler->display->display_options['fields']['street_address']['location_op'] = '0';
$handler->display->display_options['fields']['street_address']['is_primary'] = 0;
$handler->display->display_options['fields']['street_address']['is_billing'] = 0;
/* Veld: CiviCRM Events: Text Link */
$handler->display->display_options['fields']['text_link']['id'] = 'text_link';
$handler->display->display_options['fields']['text_link']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['text_link']['field'] = 'text_link';
$handler->display->display_options['fields']['text_link']['label'] = '';
$handler->display->display_options['fields']['text_link']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['text_link']['link_to_civicrm_event'] = 'custom';
$handler->display->display_options['fields']['text_link']['custom_link'] = '/evenementen/info/';
$handler->display->display_options['fields']['text_link']['link_text'] = 'Meer informatie';
/* Veld: CiviCRM Events: Is Online Registration On */
$handler->display->display_options['fields']['is_online_registration']['id'] = 'is_online_registration';
$handler->display->display_options['fields']['is_online_registration']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['is_online_registration']['field'] = 'is_online_registration';
$handler->display->display_options['fields']['is_online_registration']['label'] = '';
$handler->display->display_options['fields']['is_online_registration']['exclude'] = TRUE;
$handler->display->display_options['fields']['is_online_registration']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['is_online_registration']['type'] = 'boolean';
$handler->display->display_options['fields']['is_online_registration']['not'] = 0;
/* Veld: Views: Views Conditional */
$handler->display->display_options['fields']['views_conditional']['id'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['table'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['field'] = 'views_conditional';
$handler->display->display_options['fields']['views_conditional']['label'] = '';
$handler->display->display_options['fields']['views_conditional']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['views_conditional']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['views_conditional']['element_wrapper_class'] = 'views-field views-field-text-link-1';
$handler->display->display_options['fields']['views_conditional']['if'] = 'is_online_registration';
$handler->display->display_options['fields']['views_conditional']['condition'] = '1';
$handler->display->display_options['fields']['views_conditional']['equalto'] = '1';
$handler->display->display_options['fields']['views_conditional']['then'] = '<a href="/civicrm/event/register?id=[id]&reset=1">Nu inschrijven</a>';
$handler->display->display_options['fields']['views_conditional']['strip_tags'] = 0;
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
  t('Datum'),
  t('Event Type'),
  t('Categorie'),
  t('Blok Evenementenkalender voorpagina'),
  t('Evenementenkalender - Panels agenda pagina'),
  t('Apply'),
  t('Sort by'),
  t('Sort options'),
  t('Alles'),
  t('Items per page'),
  t('- All -'),
  t('Offset'),
  t('« eerste'),
  t('‹ vorige'),
  t('volgende ›'),
  t('laatste »'),
  t('[start_date] - [end_date]'),
  t('Aanvangsuur'),
  t('[start_date_1] uur'),
  t('<div class="view-events-column view-events-column--left">
<div class="views-field views-field-start-date-1 event-field-with-label">
<div class="views-label views-label-startdate-1">Aanvangsuur: </div>
<div class="field-content">[start_date_1]</div>
</div>
<div class="views-field-duration-1 event-field-with-label">
<div class="views-label views-label-duration">Duur: </div>
<div class="field-content">[duration_1] uur</div>
</div>
</div>'),
  t('<div class="view-events-column--middle view-events-column">
<div class="views-field views-field-zaal-5 event-field-with-label">
<div class="views-label views-label-zaal-5">Zaal: </div>
<div class="field-content">[zaal_5]</div>
</div>
<div class="views-field views-field-street-address event-field-with-label">
<div class="views-label views-label-street-address">Locatie: </div>
<div class="field-content">[street_address]<div class="street__postal-city">[postal_code] - [city]</div></div>
</div>
</div>'),
  t('View panes'),
);
