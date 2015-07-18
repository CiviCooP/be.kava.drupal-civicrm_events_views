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

        $data['civicrm_event']['is_new'] = $this->getFieldItem('is_new', 'numeric', 'Is new?', 'Show if event was added recently');
        $data['civicrm_event']['duration'] = $this->getFieldItem('duration', 'string', 'Event duration', 'Calculates the difference between start and end dates in hours');

        $data['civicrm_event']['civicrm_loc_block'] = $this->getRelationshipItem('Location Block', 'civicrm_loc_block', 'loc_block_id');
        $data['civicrm_loc_block']['civicrm_loc_block_address'] = $this->getRelationshipItem('Location Address', 'civicrm_address', 'address_id');
        $data['civicrm_loc_block']['civicrm_loc_block_phone'] = $this->getRelationshipItem('Location Phone', 'civicrm_phone', 'phone_id');
        $data['civicrm_loc_block']['civicrm_loc_block_email'] = $this->getRelationshipItem('Location Email', 'civicrm_email', 'email_id');

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

    function option_definition() {
        $options = parent::option_definition();
        $options['duration_format'] = array('default' => '%h:%i');
        return $options;
    }

    function options_form(&$form, &$form_state) {
        parent::options_form($form, $form_state);
        $form['duration_format'] = array(
            '#type'          => 'textfield',
            '#title'         => t('Duration format'),
            '#description'   => t('Use %[ymdhis], e.g.: \'%h:%i uur\'.'),
            '#default_value' => $this->options['duration_format'],
            '#weight'        => -120,
        );
    }

    function pre_query() {
        parent::pre_query();
        $this->add_additional_fields(array(
            'civicrm_event_start_date' => array('table' => 'civicrm_event', 'field' => 'start_date'),
            'civicrm_event_end_date' => array('table' => 'civicrm_event', 'field' => 'end_date'),
        ));
    }

    function render($values) {

        if (!$values->civicrm_event_start_date || !$values->civicrm_event_end_date) {
            return '';
        }

        $start_date = new \DateTime((is_numeric($values->civicrm_event_start_date) ? '@' : '') . $values->civicrm_event_start_date);
        $end_date = new \DateTime((is_numeric($values->civicrm_event_end_date) ? '@' : '') . $values->civicrm_event_end_date);
        $diff = $end_date->diff($start_date, true);

        $format = $this->options['duration_format'];
        if (!$format)
            $format = '%h:%i';

        $ret = preg_replace_callback('/\%([ymdhis])/', function ($matches) use ($diff, $format) {
            if (strpos($format, '%h:%i') !== false && in_array($matches[1], ['i', 's']))
                return sprintf('%02d', $diff->$matches[1]);
            else
                return $diff->$matches[1];
        }, $format);
        return $ret;
    }
}

/**
 * Class civicrm_events_views_handler_is_new
 * Field that shows whether an event has been added recently.
 */
class civicrm_events_views_handler_is_new extends views_handler_field_custom {

    function option_definition() {
        $options = parent::option_definition();
        $options['days_count'] = array('default' => 7);
        return $options;
    }

    function options_form(&$form, &$form_state) {
        parent::options_form($form, $form_state);
        $form['days_count'] = array(
            '#type'          => 'textfield',
            '#title'         => t('Number of days'),
            '#description'   => t('Show if event was created less than x days ago'),
            '#default_value' => $this->options['days_count'],
            '#weight'        => -120,
        );
    }

    function pre_query() {
        parent::pre_query();
        $this->add_additional_fields(array(
            'civicrm_event_created_date' => array('table' => 'civicrm_event', 'field' => 'created_date'),
        ));
    }

    function render($values) {

        if(!$values->civicrm_event_created_date)
            return false;

        $days = (float)$this->options['days_count'];
        if(!$days)
            $days = 7;

        $createdDate = new \DateTime((is_numeric($values->civicrm_event_created_date) ? '@' : '') . $values->civicrm_event_created_date);
        $diff = $createdDate->diff(new \DateTime('now'));

        return ($diff->d <= $days ? 'true' : 'false');
    }
}