<?php
$view = new view();
$view->name = 'events_single';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'civicrm_event';
$view->human_name = 'Evenement (los)';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Evenement: [title]';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['pager']['options']['offset'] = '0';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* No results behavior: Global: Text area */
$handler->display->display_options['empty']['area']['id'] = 'area';
$handler->display->display_options['empty']['area']['table'] = 'views';
$handler->display->display_options['empty']['area']['field'] = 'area';
$handler->display->display_options['empty']['area']['empty'] = TRUE;
$handler->display->display_options['empty']['area']['content'] = '<p>Dit evenement kon niet worden gevonden.</p>';
$handler->display->display_options['empty']['area']['format'] = 'full_html';
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
/* Field: CiviCRM Events: Event ID */
$handler->display->display_options['fields']['id']['id'] = 'id';
$handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['id']['field'] = 'id';
$handler->display->display_options['fields']['id']['label'] = '';
$handler->display->display_options['fields']['id']['exclude'] = TRUE;
$handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
/* Field: CiviCRM Events: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_type'] = 'h2';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: CiviCRM Events: Text Link */
$handler->display->display_options['fields']['text_link_1']['id'] = 'text_link_1';
$handler->display->display_options['fields']['text_link_1']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['text_link_1']['field'] = 'text_link';
$handler->display->display_options['fields']['text_link_1']['label'] = '';
$handler->display->display_options['fields']['text_link_1']['element_type'] = 'strong';
$handler->display->display_options['fields']['text_link_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['text_link_1']['link_to_civicrm_event'] = 'register';
$handler->display->display_options['fields']['text_link_1']['link_text'] = 'Nu inschrijven';
/* Field: CiviCRM Events: Event Type */
$handler->display->display_options['fields']['event_type']['id'] = 'event_type';
$handler->display->display_options['fields']['event_type']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['event_type']['field'] = 'event_type';
$handler->display->display_options['fields']['event_type']['label'] = '';
$handler->display->display_options['fields']['event_type']['element_label_colon'] = FALSE;
/* Field: CiviCRM Events: Start Date */
$handler->display->display_options['fields']['start_date']['id'] = 'start_date';
$handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['start_date']['field'] = 'start_date';
$handler->display->display_options['fields']['start_date']['label'] = 'Van';
$handler->display->display_options['fields']['start_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['start_date']['date_format'] = 'medium';
$handler->display->display_options['fields']['start_date']['custom_date_format'] = 'd F';
$handler->display->display_options['fields']['start_date']['second_date_format'] = 'long';
/* Field: CiviCRM Events: End Date */
$handler->display->display_options['fields']['end_date']['id'] = 'end_date';
$handler->display->display_options['fields']['end_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['end_date']['field'] = 'end_date';
$handler->display->display_options['fields']['end_date']['label'] = 'Tot';
$handler->display->display_options['fields']['end_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['end_date']['date_format'] = 'short';
$handler->display->display_options['fields']['end_date']['second_date_format'] = 'long';
/* Field: CiviCRM Events: Event duration */
$handler->display->display_options['fields']['duration']['id'] = 'duration';
$handler->display->display_options['fields']['duration']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['duration']['field'] = 'duration';
$handler->display->display_options['fields']['duration']['label'] = 'Duur';
$handler->display->display_options['fields']['duration']['alter']['text'] = '[duration]u';
$handler->display->display_options['fields']['duration']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['duration']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['duration']['hide_alter_empty'] = TRUE;
/* Field: CiviCRM Address: Full Street Address */
$handler->display->display_options['fields']['street_address']['id'] = 'street_address';
$handler->display->display_options['fields']['street_address']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['street_address']['field'] = 'street_address';
$handler->display->display_options['fields']['street_address']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['street_address']['label'] = 'Adres';
$handler->display->display_options['fields']['street_address']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['street_address']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['street_address']['location_type'] = '0';
$handler->display->display_options['fields']['street_address']['location_op'] = '0';
$handler->display->display_options['fields']['street_address']['is_primary'] = 0;
$handler->display->display_options['fields']['street_address']['is_billing'] = 0;
/* Field: CiviCRM Address: ZIP / Postal Code */
$handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['postal_code']['label'] = '';
$handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['postal_code']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['postal_code']['location_type'] = '0';
$handler->display->display_options['fields']['postal_code']['location_op'] = '0';
$handler->display->display_options['fields']['postal_code']['is_primary'] = 0;
$handler->display->display_options['fields']['postal_code']['is_billing'] = 0;
/* Field: CiviCRM Address: City / Suburb */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['city']['field'] = 'city';
$handler->display->display_options['fields']['city']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['city']['label'] = '';
$handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['city']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['city']['location_type'] = '0';
$handler->display->display_options['fields']['city']['location_op'] = '0';
$handler->display->display_options['fields']['city']['is_primary'] = 0;
$handler->display->display_options['fields']['city']['is_billing'] = 0;
/* Field: CiviCRM Custom: Zalen KAVA: Zaal */
$handler->display->display_options['fields']['zaal_5']['id'] = 'zaal_5';
$handler->display->display_options['fields']['zaal_5']['table'] = 'civicrm_value_event_zalen';
$handler->display->display_options['fields']['zaal_5']['field'] = 'zaal_5';
$handler->display->display_options['fields']['zaal_5']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['zaal_5']['empty_zero'] = TRUE;
/* Field: CiviCRM Events: Description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['element_type'] = 'div';
$handler->display->display_options['fields']['description']['text_format'] = 'full_html';
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['accreditatiepunten_9']['id'] = 'accreditatiepunten_9';
$handler->display->display_options['fields']['accreditatiepunten_9']['table'] = 'civicrm_value_event_accreditering';
$handler->display->display_options['fields']['accreditatiepunten_9']['field'] = 'accreditatiepunten_9';
$handler->display->display_options['fields']['accreditatiepunten_9']['hide_empty'] = TRUE;
/* Field: CiviCRM Custom: Bijkomende info: Spreker */
$handler->display->display_options['fields']['spreker_56']['id'] = 'spreker_56';
$handler->display->display_options['fields']['spreker_56']['table'] = 'civicrm_value_event_registration';
$handler->display->display_options['fields']['spreker_56']['field'] = 'spreker_56';
$handler->display->display_options['fields']['spreker_56']['hide_empty'] = TRUE;
/* Contextual filter: CiviCRM Events: Event ID */
$handler->display->display_options['arguments']['id']['id'] = 'id';
$handler->display->display_options['arguments']['id']['table'] = 'civicrm_event';
$handler->display->display_options['arguments']['id']['field'] = 'id';
$handler->display->display_options['arguments']['id']['default_action'] = 'empty';
$handler->display->display_options['arguments']['id']['exception']['title'] = 'Alle';
$handler->display->display_options['arguments']['id']['breadcrumb_enable'] = TRUE;
$handler->display->display_options['arguments']['id']['breadcrumb'] = 'Evenement: [title]';
$handler->display->display_options['arguments']['id']['default_argument_type'] = 'fixed';
$handler->display->display_options['arguments']['id']['summary']['number_of_records'] = '0';
$handler->display->display_options['arguments']['id']['summary']['format'] = 'default_summary';
$handler->display->display_options['arguments']['id']['summary_options']['items_per_page'] = '25';
/* Filter criterion: CiviCRM Events: Is Online Registration On */
$handler->display->display_options['filters']['is_online_registration']['id'] = 'is_online_registration';
$handler->display->display_options['filters']['is_online_registration']['table'] = 'civicrm_event';
$handler->display->display_options['filters']['is_online_registration']['field'] = 'is_online_registration';
$handler->display->display_options['filters']['is_online_registration']['value'] = '1';

/* Display: Pagina Evenement (los) */
$handler = $view->new_display('page', 'Pagina Evenement (los)', 'page_events_single');
$handler->display->display_options['defaults']['fields'] = FALSE;
/* Field: CiviCRM Events: Event ID */
$handler->display->display_options['fields']['id']['id'] = 'id';
$handler->display->display_options['fields']['id']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['id']['field'] = 'id';
$handler->display->display_options['fields']['id']['label'] = '';
$handler->display->display_options['fields']['id']['exclude'] = TRUE;
$handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
/* Field: CiviCRM Events: Title */
$handler->display->display_options['fields']['title']['id'] = 'title';
$handler->display->display_options['fields']['title']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['title']['field'] = 'title';
$handler->display->display_options['fields']['title']['label'] = '';
$handler->display->display_options['fields']['title']['exclude'] = TRUE;
$handler->display->display_options['fields']['title']['element_type'] = 'h2';
$handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
/* Field: CiviCRM Events: Event Type */
$handler->display->display_options['fields']['event_type']['id'] = 'event_type';
$handler->display->display_options['fields']['event_type']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['event_type']['field'] = 'event_type';
$handler->display->display_options['fields']['event_type']['label'] = '';
$handler->display->display_options['fields']['event_type']['element_type'] = 'h2';
$handler->display->display_options['fields']['event_type']['element_class'] = 'event-field-event-type field-title';
$handler->display->display_options['fields']['event_type']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['event_type']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['event_type']['element_default_classes'] = FALSE;
/* Field: CiviCRM Events: End Date */
$handler->display->display_options['fields']['end_date']['id'] = 'end_date';
$handler->display->display_options['fields']['end_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['end_date']['field'] = 'end_date';
$handler->display->display_options['fields']['end_date']['label'] = '';
$handler->display->display_options['fields']['end_date']['exclude'] = TRUE;
$handler->display->display_options['fields']['end_date']['element_type'] = 'div';
$handler->display->display_options['fields']['end_date']['element_class'] = 'content-inline content-inline--end-date';
$handler->display->display_options['fields']['end_date']['element_label_type'] = 'div';
$handler->display->display_options['fields']['end_date']['element_label_class'] = 'label-inline label-inline--end-date';
$handler->display->display_options['fields']['end_date']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['end_date']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['end_date']['element_wrapper_class'] = 'event-field-end-date event-field-date event-field-with-label inline-block--top';
$handler->display->display_options['fields']['end_date']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['end_date']['date_format'] = 'short';
$handler->display->display_options['fields']['end_date']['second_date_format'] = 'long';
/* Field: CiviCRM Events: Start Date */
$handler->display->display_options['fields']['start_date']['id'] = 'start_date';
$handler->display->display_options['fields']['start_date']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['start_date']['field'] = 'start_date';
$handler->display->display_options['fields']['start_date']['label'] = 'Wanneer';
$handler->display->display_options['fields']['start_date']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['start_date']['alter']['text'] = '[start_date] - [end_date]';
$handler->display->display_options['fields']['start_date']['element_type'] = 'div';
$handler->display->display_options['fields']['start_date']['element_class'] = 'content-inline content-inline--date';
$handler->display->display_options['fields']['start_date']['element_label_type'] = 'div';
$handler->display->display_options['fields']['start_date']['element_label_class'] = 'label-inline label-inline--date';
$handler->display->display_options['fields']['start_date']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['start_date']['element_wrapper_class'] = 'event-field-date event-field-with-label';
$handler->display->display_options['fields']['start_date']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['start_date']['date_format'] = 'short';
$handler->display->display_options['fields']['start_date']['custom_date_format'] = 'd F';
$handler->display->display_options['fields']['start_date']['second_date_format'] = 'long';
/* Field: CiviCRM Events: Start Date */
$handler->display->display_options['fields']['start_date_1']['id'] = 'start_date_1';
$handler->display->display_options['fields']['start_date_1']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['start_date_1']['field'] = 'start_date';
$handler->display->display_options['fields']['start_date_1']['label'] = 'Aanvangsuur';
$handler->display->display_options['fields']['start_date_1']['element_type'] = 'div';
$handler->display->display_options['fields']['start_date_1']['element_class'] = 'content-inline content-inline--starting-hour';
$handler->display->display_options['fields']['start_date_1']['element_label_type'] = 'div';
$handler->display->display_options['fields']['start_date_1']['element_label_class'] = 'label-inline label-inline--starting-hour';
$handler->display->display_options['fields']['start_date_1']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['start_date_1']['element_wrapper_class'] = 'event-field-starting-hour event-field-with-label';
$handler->display->display_options['fields']['start_date_1']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['start_date_1']['date_format'] = 'starting_hour_h_i_';
$handler->display->display_options['fields']['start_date_1']['second_date_format'] = 'long';
/* Field: CiviCRM Events: Event duration */
$handler->display->display_options['fields']['duration']['id'] = 'duration';
$handler->display->display_options['fields']['duration']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['duration']['field'] = 'duration';
$handler->display->display_options['fields']['duration']['label'] = 'Duur';
$handler->display->display_options['fields']['duration']['alter']['text'] = '[duration]u';
$handler->display->display_options['fields']['duration']['element_type'] = 'div';
$handler->display->display_options['fields']['duration']['element_class'] = 'content-inline content-inline--duration';
$handler->display->display_options['fields']['duration']['element_label_type'] = 'div';
$handler->display->display_options['fields']['duration']['element_label_class'] = 'label-inline label-inline--duration';
$handler->display->display_options['fields']['duration']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['duration']['element_wrapper_class'] = 'event-field-duration event-field-with-label';
$handler->display->display_options['fields']['duration']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['duration']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['duration']['empty_zero'] = TRUE;
$handler->display->display_options['fields']['duration']['hide_alter_empty'] = TRUE;
/* Field: CiviCRM Address: ZIP / Postal Code */
$handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['postal_code']['label'] = '';
$handler->display->display_options['fields']['postal_code']['exclude'] = TRUE;
$handler->display->display_options['fields']['postal_code']['element_type'] = 'div';
$handler->display->display_options['fields']['postal_code']['element_class'] = 'address__item address__postal';
$handler->display->display_options['fields']['postal_code']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['postal_code']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['postal_code']['element_wrapper_class'] = 'event-field-address__postal';
$handler->display->display_options['fields']['postal_code']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['postal_code']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['postal_code']['location_type'] = '0';
$handler->display->display_options['fields']['postal_code']['location_op'] = '0';
$handler->display->display_options['fields']['postal_code']['is_primary'] = 0;
$handler->display->display_options['fields']['postal_code']['is_billing'] = 0;
/* Field: CiviCRM Address: City / Suburb */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['city']['field'] = 'city';
$handler->display->display_options['fields']['city']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['city']['label'] = '';
$handler->display->display_options['fields']['city']['exclude'] = TRUE;
$handler->display->display_options['fields']['city']['element_type'] = 'div';
$handler->display->display_options['fields']['city']['element_class'] = 'address__item address__city';
$handler->display->display_options['fields']['city']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['city']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['city']['element_wrapper_class'] = 'event-field-address__city';
$handler->display->display_options['fields']['city']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['city']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['city']['location_type'] = '0';
$handler->display->display_options['fields']['city']['location_op'] = '0';
$handler->display->display_options['fields']['city']['is_primary'] = 0;
$handler->display->display_options['fields']['city']['is_billing'] = 0;
/* Field: CiviCRM Address: Full Street Address */
$handler->display->display_options['fields']['street_address']['id'] = 'street_address';
$handler->display->display_options['fields']['street_address']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['street_address']['field'] = 'street_address';
$handler->display->display_options['fields']['street_address']['relationship'] = 'civicrm_loc_block_address';
$handler->display->display_options['fields']['street_address']['label'] = 'Locatie';
$handler->display->display_options['fields']['street_address']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['street_address']['alter']['text'] = '[street_address]
<div class="address__postal-city">[postal_code] - [city]</div>';
$handler->display->display_options['fields']['street_address']['element_type'] = 'div';
$handler->display->display_options['fields']['street_address']['element_class'] = 'content-inline content-inline--street address__item address__street';
$handler->display->display_options['fields']['street_address']['element_label_type'] = 'div';
$handler->display->display_options['fields']['street_address']['element_label_class'] = 'label-inline label-inline--street';
$handler->display->display_options['fields']['street_address']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['street_address']['element_wrapper_class'] = 'event-field-address__street event-field-with-label';
$handler->display->display_options['fields']['street_address']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['street_address']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['street_address']['location_type'] = '0';
$handler->display->display_options['fields']['street_address']['location_op'] = '0';
$handler->display->display_options['fields']['street_address']['is_primary'] = 0;
$handler->display->display_options['fields']['street_address']['is_billing'] = 0;
/* Field: CiviCRM Custom: Zalen KAVA: Zaal */
$handler->display->display_options['fields']['zaal_5']['id'] = 'zaal_5';
$handler->display->display_options['fields']['zaal_5']['table'] = 'civicrm_value_event_zalen';
$handler->display->display_options['fields']['zaal_5']['field'] = 'zaal_5';
$handler->display->display_options['fields']['zaal_5']['element_type'] = 'div';
$handler->display->display_options['fields']['zaal_5']['element_class'] = 'content-inline content-inline--hall';
$handler->display->display_options['fields']['zaal_5']['element_label_type'] = 'div';
$handler->display->display_options['fields']['zaal_5']['element_label_class'] = 'label-inline label-inline--hall';
$handler->display->display_options['fields']['zaal_5']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['zaal_5']['element_wrapper_class'] = 'event-field-hall event-field-with-label';
$handler->display->display_options['fields']['zaal_5']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['zaal_5']['hide_empty'] = TRUE;
$handler->display->display_options['fields']['zaal_5']['empty_zero'] = TRUE;
/* Field: CiviCRM Custom: Bijkomende info: Spreker */
$handler->display->display_options['fields']['spreker_56']['id'] = 'spreker_56';
$handler->display->display_options['fields']['spreker_56']['table'] = 'civicrm_value_event_registration';
$handler->display->display_options['fields']['spreker_56']['field'] = 'spreker_56';
$handler->display->display_options['fields']['spreker_56']['element_type'] = 'div';
$handler->display->display_options['fields']['spreker_56']['element_class'] = 'content-inline content-inline--lecturer';
$handler->display->display_options['fields']['spreker_56']['element_label_type'] = 'div';
$handler->display->display_options['fields']['spreker_56']['element_label_class'] = 'label-inline label-inline--lecturer';
$handler->display->display_options['fields']['spreker_56']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['spreker_56']['element_wrapper_class'] = 'event-field-lecturer event-field-with-label';
$handler->display->display_options['fields']['spreker_56']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['spreker_56']['hide_empty'] = TRUE;
/* Field: Broken/missing handler */
$handler->display->display_options['fields']['accreditatiepunten_9']['id'] = 'accreditatiepunten_9';
$handler->display->display_options['fields']['accreditatiepunten_9']['table'] = 'civicrm_value_event_accreditering';
$handler->display->display_options['fields']['accreditatiepunten_9']['field'] = 'accreditatiepunten_9';
$handler->display->display_options['fields']['accreditatiepunten_9']['element_type'] = 'div';
$handler->display->display_options['fields']['accreditatiepunten_9']['element_class'] = 'content-inline content-inline--accr';
$handler->display->display_options['fields']['accreditatiepunten_9']['element_label_type'] = 'div';
$handler->display->display_options['fields']['accreditatiepunten_9']['element_label_class'] = 'label-inline label-inline--accr';
$handler->display->display_options['fields']['accreditatiepunten_9']['element_wrapper_type'] = 'div';
$handler->display->display_options['fields']['accreditatiepunten_9']['element_wrapper_class'] = 'event-field-accr event-field-with-label';
$handler->display->display_options['fields']['accreditatiepunten_9']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['accreditatiepunten_9']['hide_empty'] = TRUE;
/* Field: CiviCRM Events: Description */
$handler->display->display_options['fields']['description']['id'] = 'description';
$handler->display->display_options['fields']['description']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['description']['field'] = 'description';
$handler->display->display_options['fields']['description']['label'] = '';
$handler->display->display_options['fields']['description']['element_type'] = 'div';
$handler->display->display_options['fields']['description']['element_class'] = 'event-field-body field-body';
$handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['description']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['description']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['description']['text_format'] = 'full_html';
/* Field: CiviCRM Events: Text Link */
$handler->display->display_options['fields']['text_link_1']['id'] = 'text_link_1';
$handler->display->display_options['fields']['text_link_1']['table'] = 'civicrm_event';
$handler->display->display_options['fields']['text_link_1']['field'] = 'text_link';
$handler->display->display_options['fields']['text_link_1']['label'] = '';
$handler->display->display_options['fields']['text_link_1']['alter']['path'] = '[text_link_1]';
$handler->display->display_options['fields']['text_link_1']['alter']['link_class'] = 'button button--green';
$handler->display->display_options['fields']['text_link_1']['element_type'] = 'div';
$handler->display->display_options['fields']['text_link_1']['element_class'] = 'event-field-link';
$handler->display->display_options['fields']['text_link_1']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['text_link_1']['element_wrapper_type'] = '0';
$handler->display->display_options['fields']['text_link_1']['element_default_classes'] = FALSE;
$handler->display->display_options['fields']['text_link_1']['link_to_civicrm_event'] = 'register';
$handler->display->display_options['fields']['text_link_1']['link_text'] = 'Nu inschrijven';
$handler->display->display_options['path'] = 'evenementen/info/%';
$translatables['events_single'] = array(
  t('Master'),
  t('Evenement: [title]'),
  t('more'),
  t('Apply'),
  t('Opnieuw instellen'),
  t('Sort by'),
  t('Asc'),
  t('Desc'),
  t('<p>Dit evenement kon niet worden gevonden.</p>'),
  t('LocBlock'),
  t('Address'),
  t('.'),
  t(','),
  t('Van'),
  t('Tot'),
  t('Duur'),
  t('[duration]u'),
  t('Adres'),
  t('Zaal'),
  t('Description'),
  t('Broken handler civicrm_value_event_accreditering.accreditatiepunten_9'),
  t('Spreker'),
  t('Alle'),
  t('Pagina Evenement (los)'),
  t('Wanneer'),
  t('[start_date] - [end_date]'),
  t('Aanvangsuur'),
  t('Locatie'),
  t('[street_address]
<div class="address__postal-city">[postal_code] - [city]</div>'),
);
