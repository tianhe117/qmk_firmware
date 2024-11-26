//macro
#define MC_SPC_HOLD_TERM      1200
#define MC_SPC_TAP_TERM       50
#define MC_DOUBLE_TAP_TERM    200

typedef struct _mc_tap_dance_t
{
    bool press;
    uint8_t cnt;
    uint16_t timer;
} mc_tap_dance_t;

void mc_turn_on(bool *st);
void mc_turn_off(bool *st);

static bool s_is_non_spc_pressed = false;
static bool s_is_non_win_pressed = false;

static bool s_is_need_spc_hold = false;

static mc_tap_dance_t mc_spc_tap_dance = { 0 };
static mc_tap_dance_t mc_win_tap_dance = { 0 };
static mc_tap_dance_t mc_ctl_tap_dance = { 0 };
static mc_tap_dance_t lalt_tap_dance = { 0 };

#if defined(ENCODER_MAP_ENABLE)
#endif

enum custom_keycodes
{
    MC_00 = SAFE_RANGE,
    MC_Q,
    MC_SPC,
    MC_WIN,
    MC_CTL,
#if defined(ENCODER_MAP_ENABLE)
    MC_ENCODER_D,
    MC_ENCODER_U,
#endif
    MC_01,
    MC_02,
    MC_03,
    MC_04,
    MC_05,
    MC_06,
};

void matrix_scan_user(void)
{
    if ((mc_spc_tap_dance.press) && (!s_is_non_spc_pressed) && (timer_elapsed(mc_spc_tap_dance.timer) > MC_SPC_HOLD_TERM))
    {
        if (!s_is_need_spc_hold)
        {
            s_is_need_spc_hold = true;
            register_code(KC_SPC);
        }
    }
    else
    {
        if (s_is_need_spc_hold)
        {
            s_is_need_spc_hold = false;
            unregister_code(KC_SPC);
        }
    }

    if((mc_spc_tap_dance.press) && (timer_elapsed(mc_spc_tap_dance.timer) > MC_SPC_TAP_TERM))
    {
        if(get_highest_layer(layer_state | default_layer_state) != 2)
        {
            layer_on(_SPC_LAYER);
        }
    }

    if (timer_elapsed(mc_ctl_tap_dance.timer) > MC_DOUBLE_TAP_TERM)
    {
        if (mc_ctl_tap_dance.cnt > 0U)
        {
            mc_ctl_tap_dance.cnt = 0U;
        }
    }

    if ((mc_win_tap_dance.cnt == 1) && (!mc_win_tap_dance.press) && (timer_elapsed(mc_win_tap_dance.timer) > MC_DOUBLE_TAP_TERM))
    {
        tap_code_delay(KC_LGUI, 70);
        mc_win_tap_dance.cnt = 0U;
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    if (keycode != MC_SPC)
    {
        if (record->event.pressed)
        {
            mc_turn_on(&s_is_non_spc_pressed);
        }
    }

    if(keycode != MC_WIN)
    {
        if(mc_win_tap_dance.press)
        {
            if(!s_is_non_win_pressed)
            {
                register_code(KC_LWIN);
                s_is_non_win_pressed = true;
                mc_win_tap_dance.cnt = 0U;
            }
        }
        else
        {
            if(s_is_non_win_pressed)
            {
                unregister_code(KC_LWIN);
                s_is_non_win_pressed = false;
            }
        }
    }

    switch (keycode)
    {
    case MC_Q:
        if (record->event.pressed)
        {
            if (mc_ctl_tap_dance.press)
            {
                unregister_code(KC_LCTL);
                tap_code16_delay(LALT(KC_F4), 70);
            }
            else
            {
                register_code(KC_Q);
            }
        }
        else
        {
            if (mc_ctl_tap_dance.press)
            {
                register_code(KC_LCTL);
            }
            else
            {
                unregister_code(KC_Q);
            }
        }
        break;

    case MC_SPC:
        if (record->event.pressed)
        {
            s_is_non_spc_pressed = false;
            mc_spc_tap_dance.press = true;
            mc_spc_tap_dance.timer = timer_read();
        }
        else
        {
            mc_spc_tap_dance.press = false;
            if(get_highest_layer(layer_state | default_layer_state) != 0)
            {
                layer_off(_SPC_LAYER);
            }
            if (((!s_is_non_spc_pressed) && (!s_is_need_spc_hold)) || (timer_elapsed(mc_spc_tap_dance.timer) < 2 * MC_SPC_TAP_TERM))
            {
                tap_code_delay(KC_SPC, 25);
            }
        }
        break;

    case MC_WIN:
        if (record->event.pressed)
        {
            mc_win_tap_dance.press = true;
            mc_win_tap_dance.timer = timer_read();
            mc_win_tap_dance.cnt++;
        }
        else
        {
            mc_win_tap_dance.press = false;
            if(mc_win_tap_dance.cnt > 1)
            {
                set_oneshot_layer(_FN1, ONESHOT_START);
                clear_oneshot_layer_state(ONESHOT_PRESSED);
                mc_win_tap_dance.cnt = 0U;
            }

            if(s_is_non_win_pressed)
            {
                unregister_code(KC_LWIN);
                s_is_non_win_pressed = false;
            }
        }
        break;

    case MC_CTL:
        if (record->event.pressed)
        {
            mc_ctl_tap_dance.press = true;
            register_code(KC_LCTL);
            mc_ctl_tap_dance.timer = timer_read();
            mc_ctl_tap_dance.cnt++;
        }
        else
        {
            mc_ctl_tap_dance.press = false;
            unregister_code(KC_LCTL);
            if (mc_ctl_tap_dance.cnt > 1U)
            {
                tap_code_delay(KC_CAPS, 25);
                mc_ctl_tap_dance.cnt = 0U;
            }
        }
        break;

#if defined(ENCODER_MAP_ENABLE)
    case MC_ENCODER_D:
        if (record->event.pressed)
        {
            if(lalt_tap_dance.press)
            {
                tap_code16_delay(LSFT(KC_TAB), 70);
            }
            else if(mc_win_tap_dance.press)
            {
                tap_code16_delay(LCTL(KC_LEFT), 70);
            }
            else
            {
                tap_code_delay(KC_VOLD, 70);
            }
        }
        break;

    case MC_ENCODER_U:
        if (record->event.pressed)
        {
            if(lalt_tap_dance.press)
            {
                tap_code_delay(KC_TAB, 70);
            }
            else if(mc_win_tap_dance.press)
            {
                tap_code16_delay(LCTL(KC_RGHT), 70);
            }
            else
            {
                tap_code_delay(KC_VOLU, 70);
            }
        }
        break;
#endif

    case MC_01:
        if (record->event.pressed)
        {
            SEND_STRING("liruixiang");
        }
        break;

    case MC_02:
        if (record->event.pressed)
        {
            SEND_STRING("tianhe117");
        }
        break;

    case MC_03:
        if (record->event.pressed)
        {
            SEND_STRING("lRx4691709");
        }
        break;

    case MC_04:
        if (record->event.pressed)
        {
            SEND_STRING("l1R1x7lRx");
        }
        break;

    case MC_05:
        if (record->event.pressed)
        {
            SEND_STRING("liruixiang_117@163.com");
        }
        break;

    case MC_06:
        if (record->event.pressed)
        {
            SEND_STRING("15652591493");
        }
        break;
    }
    return true;
};

void mc_turn_on(bool *st)
{
    if (!(*st))
    {
        *st = true;
    }
}

void mc_turn_off(bool *st)
{
    if (*st)
    {
        *st = false;
    }
}