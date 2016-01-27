<?php

function civicrm_events_views_cancel_form($form, &$form_state, $participant_id) {

    civicrm_initialize();
    $participant = civicrm_api3('Participant', 'getsingle', array('participant_id' => $participant_id));

    // Toegevoegd KL: checken of iemand zich nog kan afmelden (veld Afmelden mogelijk tot)
    $can_cancel_field_id = civicrm_api3('CustomField', 'getvalue', array('name' => 'Afmelden_mogelijk_tot', 'return' => 'id'));

    $event = civicrm_api3('Event', 'getsingle', array('id' => $participant['event_id'], 'return' => $can_cancel_field_id));

    $cancel_until_date = null;
    $cancel_until_time = null;
    foreach ($event as $key => $value) {                 // Lelijke quickfix, moet beter
        if (strpos($key, $can_cancel_field_id . '_')) {
            if (strpos($key, 'time'))
                $cancel_until_time = $value;
            else
                $cancel_until_date = $value;
        }
    }

    $can_cancel = (!$cancel_until_date || strtotime($cancel_until_date . ' ' . $cancel_until_time) > time());
    if ($can_cancel) {

        $form['participant_id']['#type'] = 'hidden';
        $form['participant_id']['#name'] = 'participant_id';
        $form['participant_id']['#value'] = $participant_id;

        $form['warning']['#type'] = 'markup';
        $form['warning']['#markup'] = '<p><strong>' . t('Weet je zeker dat je je wilt afmelden voor ' . $participant['event_title'] . '?') . '</strong></p>';

        $form['submit_button'] = array(
            '#type'  => 'submit',
            '#value' => t('Ja, ik wil mij afmelden'),
        );

    } else {

        $form['warning']['#type'] = 'markup';
        //$form['warning']['#markup'] = '<p><strong>' . t('Het is niet meer mogelijk je online af te melden voor dit evenement. Neem contact op met KAVA.') . '</strong></p>';
        $form['warning']['#markup'] = '<p>' . t('Voor deze opleiding kunt u zich niet meer inschrijven:') . '</p><p>'.t('- Voor <strong>gratis</strong> evenementen kunt u zich tot 15u op de dag zelf uitschrijven.').'</p><p>'.t('- Voor <strong>betaalde</strong> evenementen kan wel nog uw inschrijving worden doorgeven aan een collega. Laat het ons uiterlijk weten om 15u op de dag zelf via e-mail aan <a href="mailto:secretariaat@kava.be">secretariaat@kava.be</a>.').'</p>';
    }

    return $form;
}

function civicrm_events_views_cancel_form_submit($form, &$form_state) {

    $participant_id = $form_state['values']['participant_id'];
    $cancel_id = civicrm_api3('ParticipantStatusType', 'getvalue', array('name' => 'Cancelled', 'return' => 'id'));
    $afmelddatum_field_id = civicrm_api3('CustomField', 'getvalue', array('name' => 'Afmelddatum', 'return' => 'id'));

    // Afmelden via core-functie, want zo wordt ook een afmeldmail verzonden!
    civicrm_initialize();
    CRM_Event_BAO_Participant::transitionParticipants(array($participant_id), $cancel_id, null, true);

    // En zelf voegen we via de API nog de afmelddatum toe:
    civicrm_api3('Participant', 'create', array(
        'participant_id'                  => $participant_id,
        // 'participant_status_id' => $cancel_id,
        'custom_' . $afmelddatum_field_id => date('YmdHis'),
    ));
}

function civicrm_events_views_user_has_cancel_access($participant_id) {
    global $user;
    try {
        civicrm_initialize();
        $participant = civicrm_api3('Participant', 'getsingle', array('participant_id' => $participant_id));
        $user_id = civicrm_api3('UFMatch', 'getvalue', array('contact_id' => $participant['contact_id'], 'return' => 'uf_id'));
        if ($user_id == $user->uid) {
            return true;
        }
    } catch (Exception $e) {
        //do nothing
    }
    return false;

}