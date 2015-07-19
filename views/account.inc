<?php

$view = new view();
$view->name = 'myaccount';
$view->description = '';
$view->tag = 'default';
$view->base_table = 'civicrm_contact';
$view->human_name = 'Mijn account';
$view->core = 7;
$view->api_version = '3.0';
$view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

/* Display: Master */
$handler = $view->new_display('default', 'Master', 'default');
$handler->display->display_options['title'] = 'Mijn account';
$handler->display->display_options['use_more_always'] = FALSE;
$handler->display->display_options['access']['type'] = 'none';
$handler->display->display_options['cache']['type'] = 'none';
$handler->display->display_options['query']['type'] = 'views_query';
$handler->display->display_options['exposed_form']['type'] = 'basic';
$handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Opnieuw instellen';
$handler->display->display_options['pager']['type'] = 'none';
$handler->display->display_options['style_plugin'] = 'default';
$handler->display->display_options['row_plugin'] = 'fields';
/* Relationship: CiviCRM Contacts: Drupal ID */
$handler->display->display_options['relationships']['drupal_id']['id'] = 'drupal_id';
$handler->display->display_options['relationships']['drupal_id']['table'] = 'civicrm_contact';
$handler->display->display_options['relationships']['drupal_id']['field'] = 'drupal_id';
$handler->display->display_options['relationships']['drupal_id']['required'] = TRUE;
/* Veld: CiviCRM Contacts: Contact ID */
$handler->display->display_options['fields']['id']['id'] = 'id';
$handler->display->display_options['fields']['id']['table'] = 'civicrm_contact';
$handler->display->display_options['fields']['id']['field'] = 'id';
$handler->display->display_options['fields']['id']['label'] = '';
$handler->display->display_options['fields']['id']['exclude'] = TRUE;
$handler->display->display_options['fields']['id']['element_label_colon'] = FALSE;
/* Veld: CiviCRM Contacts: Display Name */
$handler->display->display_options['fields']['display_name']['id'] = 'display_name';
$handler->display->display_options['fields']['display_name']['table'] = 'civicrm_contact';
$handler->display->display_options['fields']['display_name']['field'] = 'display_name';
$handler->display->display_options['fields']['display_name']['label'] = '';
$handler->display->display_options['fields']['display_name']['alter']['alter_text'] = TRUE;
$handler->display->display_options['fields']['display_name']['alter']['text'] = 'Welkom, [display_name]!';
$handler->display->display_options['fields']['display_name']['element_type'] = 'h2';
$handler->display->display_options['fields']['display_name']['element_label_colon'] = FALSE;
$handler->display->display_options['fields']['display_name']['link_to_civicrm_contact'] = 0;
/* Veld: CiviCRM Contacts: First Name */
$handler->display->display_options['fields']['first_name']['id'] = 'first_name';
$handler->display->display_options['fields']['first_name']['table'] = 'civicrm_contact';
$handler->display->display_options['fields']['first_name']['field'] = 'first_name';
$handler->display->display_options['fields']['first_name']['label'] = 'Voornaam';
$handler->display->display_options['fields']['first_name']['link_to_civicrm_contact'] = 0;
/* Veld: CiviCRM Contacts: Last Name */
$handler->display->display_options['fields']['last_name']['id'] = 'last_name';
$handler->display->display_options['fields']['last_name']['table'] = 'civicrm_contact';
$handler->display->display_options['fields']['last_name']['field'] = 'last_name';
$handler->display->display_options['fields']['last_name']['label'] = 'Achternaam';
$handler->display->display_options['fields']['last_name']['link_to_civicrm_contact'] = 0;
/* Veld: CiviCRM Contacts: Birth Date */
$handler->display->display_options['fields']['birth_date']['id'] = 'birth_date';
$handler->display->display_options['fields']['birth_date']['table'] = 'civicrm_contact';
$handler->display->display_options['fields']['birth_date']['field'] = 'birth_date';
$handler->display->display_options['fields']['birth_date']['label'] = 'Geboortedatum';
$handler->display->display_options['fields']['birth_date']['date_format'] = 'custom';
$handler->display->display_options['fields']['birth_date']['custom_date_format'] = 'd-m-Y';
$handler->display->display_options['fields']['birth_date']['second_date_format'] = 'long';
/* Veld: CiviCRM Address: Full Street Address */
$handler->display->display_options['fields']['street_address']['id'] = 'street_address';
$handler->display->display_options['fields']['street_address']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['street_address']['field'] = 'street_address';
$handler->display->display_options['fields']['street_address']['label'] = 'Adres';
$handler->display->display_options['fields']['street_address']['location_type'] = '0';
$handler->display->display_options['fields']['street_address']['location_op'] = '0';
$handler->display->display_options['fields']['street_address']['is_primary'] = 1;
$handler->display->display_options['fields']['street_address']['is_billing'] = 0;
/* Veld: CiviCRM Address: ZIP / Postal Code */
$handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
$handler->display->display_options['fields']['postal_code']['label'] = 'Postcode';
$handler->display->display_options['fields']['postal_code']['location_type'] = '0';
$handler->display->display_options['fields']['postal_code']['location_op'] = '0';
$handler->display->display_options['fields']['postal_code']['is_primary'] = 1;
$handler->display->display_options['fields']['postal_code']['is_billing'] = 0;
/* Veld: CiviCRM Address: City / Suburb */
$handler->display->display_options['fields']['city']['id'] = 'city';
$handler->display->display_options['fields']['city']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['city']['field'] = 'city';
$handler->display->display_options['fields']['city']['label'] = 'Plaats';
$handler->display->display_options['fields']['city']['location_type'] = '0';
$handler->display->display_options['fields']['city']['location_op'] = '0';
$handler->display->display_options['fields']['city']['is_primary'] = 1;
$handler->display->display_options['fields']['city']['is_billing'] = 0;
/* Veld: CiviCRM Address: Country */
$handler->display->display_options['fields']['country']['id'] = 'country';
$handler->display->display_options['fields']['country']['table'] = 'civicrm_address';
$handler->display->display_options['fields']['country']['field'] = 'country';
$handler->display->display_options['fields']['country']['label'] = 'Land';
$handler->display->display_options['fields']['country']['location_type'] = '0';
$handler->display->display_options['fields']['country']['location_op'] = '0';
$handler->display->display_options['fields']['country']['is_primary'] = 1;
$handler->display->display_options['fields']['country']['is_billing'] = 0;
$handler->display->display_options['fields']['country']['country_display'] = '2';
/* Veld: CiviCRM Phone Details: Phone Number */
$handler->display->display_options['fields']['phone']['id'] = 'phone';
$handler->display->display_options['fields']['phone']['table'] = 'civicrm_phone';
$handler->display->display_options['fields']['phone']['field'] = 'phone';
$handler->display->display_options['fields']['phone']['label'] = 'Telefoon';
$handler->display->display_options['fields']['phone']['location_type'] = '0';
$handler->display->display_options['fields']['phone']['location_op'] = '0';
$handler->display->display_options['fields']['phone']['is_primary'] = 1;
$handler->display->display_options['fields']['phone']['phone_type'] = '0';
/* Veld: CiviCRM Email: Email Address */
$handler->display->display_options['fields']['email']['id'] = 'email';
$handler->display->display_options['fields']['email']['table'] = 'civicrm_email';
$handler->display->display_options['fields']['email']['field'] = 'email';
$handler->display->display_options['fields']['email']['label'] = 'E-mailadres';
$handler->display->display_options['fields']['email']['location_type'] = '0';
$handler->display->display_options['fields']['email']['location_op'] = '0';
$handler->display->display_options['fields']['email']['is_primary'] = 1;
/* Veld: Global: Custom text */
$handler->display->display_options['fields']['nothing']['id'] = 'nothing';
$handler->display->display_options['fields']['nothing']['table'] = 'views';
$handler->display->display_options['fields']['nothing']['field'] = 'nothing';
$handler->display->display_options['fields']['nothing']['label'] = '';
$handler->display->display_options['fields']['nothing']['alter']['text'] = 'Wijziging doorgeven';
$handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
$handler->display->display_options['fields']['nothing']['alter']['path'] = '/account/wijziging';
$handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
/* Filter criterion: Gebruiker: Current */
$handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['table'] = 'users';
$handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
$handler->display->display_options['filters']['uid_current']['relationship'] = 'drupal_id';
$handler->display->display_options['filters']['uid_current']['value'] = '1';

/* Display: Pagina Mijn account */
$handler = $view->new_display('page', 'Pagina Mijn account', 'page_myaccount');
$handler->display->display_options['path'] = 'account';

/* Display: Blok Mijn account */
$handler = $view->new_display('block', 'Blok Mijn account', 'block');
$translatables['myaccount'] = array(
    t('Master'),
    t('Mijn account'),
    t('more'),
    t('Apply'),
    t('Opnieuw instellen'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Drupal User'),
    t('.'),
    t(','),
    t('Welkom, [display_name]!'),
    t('Voornaam'),
    t('Achternaam'),
    t('Geboortedatum'),
    t('Adres'),
    t('Postcode'),
    t('Plaats'),
    t('Land'),
    t('Telefoon'),
    t('E-mailadres'),
    t('Wijziging doorgeven'),
    t('Pagina Mijn account'),
    t('Blok Mijn account'),
);
