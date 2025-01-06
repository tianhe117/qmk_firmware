#ifdef ENABLE_MY_RGB

void set_rgb_led(uint8_t min, uint8_t max, uint8_t r, uint8_t g, uint8_t b )
{
    uint8_t i = 0U;
    for(i = min; i < max; i++)
        rgb_matrix_set_color(i, r, g, b);
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max)
{
    uint8_t layer = get_highest_layer(layer_state | default_layer_state);

    if (layer > 0)
    {
        switch (layer)
        {
        case _DEFAULT_LAYER:
            set_rgb_led(42, 62, RGB_YELLOW);
            break;
        case _FN1:
            set_rgb_led(42, 62, RGB_WHITE);
            break;
        case 5:
            set_rgb_led(42, 62, RGB_YELLOW);
            break;
        default:
            break;
        }
    }

    if (host_keyboard_led_state().caps_lock)
    {
        set_rgb_led(CAPS_LOCK_LED, CAPS_LOCK_LED + 13, RGB_WHITE);
    }

    return false;
}

#endif