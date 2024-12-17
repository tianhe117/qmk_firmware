#ifdef ENABLE_MY_RGB

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max)
{
    static uint8_t s_rgp_speed = 0U;
    uint8_t layer = get_highest_layer(layer_state | default_layer_state);

    if (layer > 0)
    {
        switch (layer)
        {
        case _FN1:
            rgb_matrix_set_color_all(RGB_WHITE);
            break;
        case _DEFAULT_LAYER:
            rgb_matrix_set_color_all(RGB_YELLOW);
            break;
        default:
            break;
        }
    }

    if (host_keyboard_led_state().caps_lock)
    {
        if(rgb_matrix_get_speed() != 0xFF)
        {
            s_rgp_speed = rgb_matrix_get_speed();
            rgb_matrix_set_speed_noeeprom(0xFF);
        }
        //        RGB_MATRIX_INDICATOR_SET_COLOR(CAPS_LOCK_LED, 255, 255, 255); // KC_CAPS is at led 40
    }
    else
    {
        if(rgb_matrix_get_speed() == 0xFF)
        {
            rgb_matrix_set_speed_noeeprom(s_rgp_speed);
        }
        //        RGB_MATRIX_INDICATOR_SET_COLOR(CAPS_LOCK_LED, 0, 0, 0); // KC_CAPS is at led 40
    }

    //    // set  kc0 - kc9 led on in RGB_MATRIX_TYPING_HEATMAP
    //    if ((rgb_matrix_get_mode() >= RGB_MATRIX_TYPING_HEATMAP) && (rgb_matrix_get_mode() != RGB_MATRIX_SOLID_REACTIVE))
    //    {
    //        for (i = 3U; i <= 12U; i++)
    //        {
    //            RGB_MATRIX_INDICATOR_SET_COLOR(i, 255, 255, 255); // KC_TAB is at led 27
    //        }
    //    }
    //
    //    // set kc1 - kc6 as layer display
    ////    if (s_is_ralt_hold == true)
    //    {
    //        RGB_MATRIX_INDICATOR_SET_COLOR(12 - layer, 255, 0, 0);
    //    }

    return false;
}

#endif