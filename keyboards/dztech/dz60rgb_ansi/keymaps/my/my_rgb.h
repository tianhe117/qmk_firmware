bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max)
{
    uint8_t layer = get_highest_layer(layer_state | default_layer_state);
    uint8_t i = 0U;

    if (layer > 0)
    {
        switch (layer)
        {
            case _FN_LAYER:
                //rgb_matrix_set_color_all(RGB_WHITE);
                break;
            default:
                break;
        }
    }

    if (host_keyboard_led_state().caps_lock)
    {
        // RGB_MATRIX_INDICATOR_SET_COLOR(29, 255, 255, 255); // assuming caps lock is at led #5
        // RGB_MATRIX_INDICATOR_SET_COLOR(28, 255, 255, 255); // assuming caps lock is at led #5
        // RGB_MATRIX_INDICATOR_SET_COLOR(27, 255, 255, 255); // KC_TAB is at led 27
    }
    else
    {
        RGB_MATRIX_INDICATOR_SET_COLOR(40, 0, 0, 0); // KC_CAPS is at led 40
    }

    // set  kc0 - kc9 led on in RGB_MATRIX_TYPING_HEATMAP
    if ((rgb_matrix_get_mode() >= RGB_MATRIX_TYPING_HEATMAP) && (rgb_matrix_get_mode() != RGB_MATRIX_SOLID_REACTIVE))
    {
        for (i = 3U; i <= 12U; i++)
        {
            RGB_MATRIX_INDICATOR_SET_COLOR(i, 255, 255, 255); // KC_TAB is at led 27
        }
    }

    // set kc1 - kc6 as layer display
    if (s_is_ralt_hold == true)
    {
        RGB_MATRIX_INDICATOR_SET_COLOR(12 - layer, 255, 0, 0);
    }

    return false;
}