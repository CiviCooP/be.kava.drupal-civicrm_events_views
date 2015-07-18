<?php

/**
 * Class civicrm_events_views_views_alter_items
 * Class provides fields and relationships to the views_alter hook.
 * The fields classes themselves are unfortunately below in the same file as I couldn't get auto-including them to work.
 * And unfortunately they always have to be loaded, too.
 */
class civicrm_events_views_views_alter_items {

    private static $instance = null;

    /**
     * Get instance
     * @return civicrm_events_views_views_alter_items|null
     */
    public static function getInstance() {
        if (!self::$instance)
            self::$instance = new self;
        return self::$instance;
    }

    /**
     * Adds items to the views data array
     * @param array $data Items array passed by hook_views_data_alter
     * @return array $data Modified array
     */
    public function addAlterItems($data) {

        $data['civicrm_event']['is_new'] = $this->getFieldItem('is_new', 'numeric', 'Is new?', 'Defines if event was created less than x days ago');
        $data['civicrm_event']['duration'] =  $this->getFieldItem('duration', 'string', 'Event duration', 'Calculates the difference between start and end dates in hours');

        $data['civicrm_event']['civicrm_loc_block'] = $this->getRelationshipItem('Location Block', 'civicrm_loc_block', 'loc_block_id');
        $data['civicrm_loc_block']['civicrm_loc_block_address'] = $this->getRelationshipItem('Location Address', 'civicrm_address', 'address_id');

        return $data;
    }

    /**
     * Helper function to fill the views_data_alter array with a custom field and handler
     * @param string $fieldName Field name
     * @param string $type Field type (string, numeric, ...)
     * @param string $title Title
     * @param string $help Help
     * @return array Field parameters
     */
    private function getFieldItem($fieldName, $type = 'string', $title = null, $help = null) {

        return array(
            'title'    => t($title),
            'help'     => t($help),
            'field'    => array(
                'handler' => 'civicrm_events_views_handler_' . $fieldName,
            ),
            'argument' => array(
                'handler' => 'views_handler_argument_' . $type,
            ),
            'filter'   => array(
                'handler' => 'views_handler_filter_' . $type,
            ),
        );
    }

    /**
     * Helper function to fill the views_data_alter array with a custom relationship
     * @param string $title Field title
     * @param string $relationshipBase Relationship base
     * @param string $relationshipField Relationship field
     * @return array Relationship parameters
     */
    private function getRelationshipItem($title, $relationshipBase, $relationshipField) {

        return array(
            'title'        => t($title),
            'relationship' => array(
                'handler'    => 'views_handler_relationship',
                'base'       => $relationshipBase,
                'base field' => 'id',
                'field'      => $relationshipField,
            ),
        );
    }

}

/**
 * Class civicrm_events_views_handler_duration
 * Field that shows the duration of the event in hours.
 */
class civicrm_events_views_handler_duration extends views_handler_field_custom {

    function render($values) {

        if (!$values->civicrm_event_start_date || !$values->civicrm_event_end_date) {
            return '';
        }

        return round(($values->civicrm_event_end_date - $values->civicrm_event_start_date) / 3600);
    }
}

/**
 * Class civicrm_events_views_handler_is_new
 * Field that shows whether an event has been added recently.
 */
class civicrm_events_views_handler_is_new extends views_handler_field_custom {

//    function options_form(&$form, &$form_state) {
//        parent::options_form($form, $form_state);
//
//        $form['days_count'] = array(
//            '#title'         => t('Aantal dagen'),
//            '#description'   => t('Aantal dagen dat een item als nieuw beschouwd wordt'),
//            '#type'          => 'text',
//            '#default_value' => !empty($this->options['days_count']),
//        );
//    }

    function render($values) {

        if ($values->civicrm_event_created_date && $values->civicrm_event_created_date > (time() - 7 * 86400)) {
            return 'Nieuw';
        }

        return '';
    }
}