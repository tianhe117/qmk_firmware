//
enum my_layers
{
    _BASE_LAYER,
    _DEFAULT_LAYER,
    _SPC_LAYER,
    _FN_LAYER,
    _FN1,
};

#define BA_ESC      KC_ESC
#define BA_GRV      KC_GRV
#define BA_1        KC_1
#define BA_2        KC_2
#define BA_3        KC_3
#define BA_4        KC_4
#define BA_5        KC_5
#define BA_6        KC_6
#define BA_7        KC_7
#define BA_8        KC_8
#define BA_9        KC_9
#define BA_0        KC_0
#define BA_MINS     KC_MINS
#define BA_EQL      KC_EQL
#define BA_BSPC     KC_BSLS
#define BA_TAB      KC_TAB
#define BA_Q        MC_Q
#define BA_W        KC_W
#define BA_E        KC_E
#define BA_R        KC_R
#define BA_T        KC_T
#define BA_Y        KC_Y
#define BA_U        KC_U
#define BA_I        KC_I
#define BA_O        KC_O
#define BA_P        KC_P
#define BA_LBRC     KC_LBRC
#define BA_RBRC     KC_RBRC
#define BA_BSLS     KC_BSPC
#define BA_CAPS     MC_CTL
#define BA_A        KC_A
#define BA_S        KC_S
#define BA_D        KC_D
#define BA_F        KC_F
#define BA_G        KC_G
#define BA_H        KC_H
#define BA_J        KC_J
#define BA_K        KC_K
#define BA_L        KC_L
#define BA_SCLN     KC_SCLN
#define BA_QUOT     KC_QUOT
#define BA_ENT      KC_ENT
#define BA_LSFT     KC_LSFT
#define BA_Z        KC_Z
#define BA_X        KC_X
#define BA_C        KC_C
#define BA_V        KC_V
#define BA_B        KC_B
#define BA_N        KC_N
#define BA_M        KC_M
#define BA_COMM     KC_COMM
#define BA_DOT      KC_DOT
#define BA_SLSH     KC_SLSH
#define BA_RSFT     KC_RSFT
#define BA_LCTL     KC_NO
#define BA_LGUI     KC_LALT
#define BA_LALT     MC_WIN
#define BA_SPC      MC_SPC
#define BA_RALT     KC_RGUI
#define BA_RGUI     KC_RALT 
#define BA_RCTL     KC_NO
#define BA_FN       MO(_FN_LAYER)

#define BA_MUTE     KC_MUTE

#define BA_UP       KC_UP
#define BA_LEFT     KC_LEFT
#define BA_DOWN     KC_DOWN
#define BA_RGHT     KC_RGHT
#define BA_PGUP     KC_PGUP
#define BA_PGDN     KC_PGDN



#define SP_ESC      KC_GRV
#define SP_GRV      KC_NO
#define SP_1        MC_01
#define SP_2        MC_02
#define SP_3        MC_03
#define SP_4        MC_04
#define SP_5        MC_05
#define SP_6        MC_06
#define SP_7        KC_NO
#define SP_8        KC_NO
#define SP_9        KC_NO
#define SP_0        KC_NO
#define SP_MINS     KC_NO
#define SP_EQL      KC_NO
#define SP_BSPC     KC_NO
#define SP_TAB      KC_SPC
#define SP_Q        KC_NO
#define SP_W        KC_UP
#define SP_E        KC_NO
#define SP_R        KC_NO
#define SP_T        KC_NO
#define SP_Y        KC_NO
#define SP_U        KC_NO
#define SP_I        KC_NO
#define SP_O        KC_NO
#define SP_P        KC_NO
#define SP_LBRC     KC_NO
#define SP_RBRC     KC_NO
#define SP_BSLS     KC_NO
#define SP_CAPS     KC_CAPS
#define SP_A        KC_LEFT
#define SP_S        KC_DOWN
#define SP_D        KC_RIGHT
#define SP_F        KC_DEL
#define SP_G        KC_INS
#define SP_H        KC_HOME
#define SP_J        KC_PGUP
#define SP_K        KC_PGDN
#define SP_L        KC_END
#define SP_SCLN     KC_NO
#define SP_QUOT     KC_NO
#define SP_ENT      KC_NO
#define SP_LSFT     KC_TRNS
#define SP_Z        KC_NO
#define SP_X        KC_NO
#define SP_C        KC_NO
#define SP_V        KC_NO
#define SP_B        KC_NO
#define SP_N        KC_NO
#define SP_M        KC_NO
#define SP_COMM     KC_NO
#define SP_DOT      KC_NO
#define SP_SLSH     KC_NO
#define SP_RSFT     KC_NO
#define SP_LCTL     KC_NO
#define SP_LGUI     KC_NO
#define SP_LALT     KC_NO
#define SP_SPC      KC_TRNS
#define SP_RALT     KC_NO
#define SP_RGUI     KC_NO
#define SP_RCTL     KC_NO
#define SP_FN       TO(_BASE_LAYER)

#define SP_MUTE     KC_NO

#define SP_UP       KC_NO
#define SP_LEFT     KC_NO
#define SP_DOWN     KC_NO
#define SP_RGHT     KC_NO
#define SP_PGUP     KC_NO
#define SP_PGDN     KC_NO

#define FN_ESC      KC_NO
#define FN_GRV      KC_NO
#define FN_1        KC_F1
#define FN_2        KC_F2
#define FN_3        KC_F3
#define FN_4        KC_F4
#define FN_5        KC_F5
#define FN_6        KC_F6
#define FN_7        KC_F7
#define FN_8        KC_F8
#define FN_9        KC_F9
#define FN_0        KC_F10
#define FN_MINS     KC_F11
#define FN_EQL      KC_F12
#define FN_BSPC     KC_NO

#ifdef ENABLE_MY_RGB
#define FN_TAB      RGB_TOG
#define FN_Q        RGB_MOD
#define FN_W        RGB_VAI
#define FN_E        RGB_HUI
#define FN_R        RGB_SAI
#define FN_T        RGB_SPI
#else
#define FN_TAB      KC_NO
#define FN_Q        KC_NO
#define FN_W        KC_NO
#define FN_E        KC_NO
#define FN_R        KC_NO
#define FN_T        KC_NO
#endif

#define FN_Y        KC_NO
#define FN_U        KC_NO
#define FN_I        KC_NO
#define FN_O        KC_NO
#define FN_P        KC_NO
#define FN_LBRC     KC_NO
#define FN_RBRC     KC_NO
#define FN_BSLS     KC_NO
#define FN_CAPS     KC_CAPS

#ifdef ENABLE_MY_RGB
#define FN_A        RGB_RMOD
#define FN_S        RGB_VAD
#define FN_D        RGB_HUD
#define FN_F        RGB_SAD
#define FN_G        RGB_SPD
#else
#define FN_A        KC_NO
#define FN_S        KC_NO
#define FN_D        KC_NO
#define FN_F        KC_NO
#define FN_G        KC_NO
#endif

#define FN_H        KC_NO
#define FN_J        KC_NO
#define FN_K        KC_NO
#define FN_L        KC_NO
#define FN_SCLN     KC_NO
#define FN_QUOT     KC_NO
#define FN_ENT      KC_NO
#define FN_LSFT     KC_NO
#define FN_Z        KC_NO
#define FN_X        KC_NO
#define FN_C        KC_NO
#define FN_V        KC_NO
#define FN_B        KC_NO
#define FN_N        NK_TOGG
#define FN_M        KC_NO
#define FN_COMM     KC_NO
#define FN_DOT      KC_NO
#define FN_SLSH     KC_NO
#define FN_RSFT     KC_NO
#define FN_LCTL     KC_NO
#define FN_LGUI     TG(_DEFAULT_LAYER)
#define FN_LALT     EE_CLR
#define FN_SPC      QK_BOOT
#define FN_RALT     QK_RBT
#define FN_RGUI     TG(_FN1)
#define FN_RCTL     KC_NO
#define FN_FN       KC_TRNS

#define FN_MUTE     KC_NO

#define FN_UP       KC_NO
#define FN_LEFT     KC_NO
#define FN_DOWN     KC_NO
#define FN_RGHT     KC_NO
#define FN_PGUP     KC_NO
#define FN_PGDN     KC_NO

#define F1_ESC      TG(_FN1)
#define F1_GRV      KC_TRNS
#define F1_1        KC_F1
#define F1_2        KC_F2
#define F1_3        KC_F3
#define F1_4        KC_F4
#define F1_5        KC_F5
#define F1_6        KC_F6
#define F1_7        KC_F7
#define F1_8        KC_F8
#define F1_9        KC_F9
#define F1_0        KC_F10
#define F1_MINS     KC_F11
#define F1_EQL      KC_F12
#define F1_BSPC     KC_TRNS
#define F1_TAB      KC_TRNS
#define F1_Q        KC_TRNS
#define F1_W        KC_TRNS
#define F1_E        KC_TRNS
#define F1_R        KC_TRNS
#define F1_T        KC_TRNS
#define F1_Y        KC_TRNS
#define F1_U        KC_TRNS
#define F1_I        KC_TRNS
#define F1_O        KC_TRNS
#define F1_P        KC_TRNS
#define F1_LBRC     KC_TRNS
#define F1_RBRC     KC_TRNS
#define F1_BSLS     KC_TRNS
#define F1_CAPS     KC_TRNS
#define F1_A        KC_TRNS
#define F1_S        KC_TRNS
#define F1_D        KC_TRNS
#define F1_F        KC_TRNS
#define F1_G        KC_TRNS
#define F1_H        KC_TRNS
#define F1_J        KC_TRNS
#define F1_K        KC_TRNS
#define F1_L        KC_TRNS
#define F1_SCLN     KC_TRNS
#define F1_QUOT     KC_TRNS
#define F1_ENT      KC_TRNS
#define F1_LSFT     KC_TRNS
#define F1_Z        KC_TRNS
#define F1_X        KC_TRNS
#define F1_C        KC_TRNS
#define F1_V        KC_TRNS
#define F1_B        KC_TRNS
#define F1_N        KC_TRNS
#define F1_M        KC_TRNS
#define F1_COMM     KC_TRNS
#define F1_DOT      KC_TRNS
#define F1_SLSH     KC_TRNS
#define F1_RSFT     KC_TRNS
#define F1_LCTL     KC_TRNS
#define F1_LGUI     KC_TRNS
#define F1_LALT     KC_TRNS
#define F1_SPC      KC_TRNS
#define F1_RALT     KC_TRNS
#define F1_RGUI     KC_TRNS
#define F1_RCTL     KC_TRNS
#define F1_FN       KC_TRNS

#define F1_MUTE     KC_TRNS

#define F1_UP       KC_TRNS
#define F1_LEFT     KC_TRNS
#define F1_DOWN     KC_TRNS
#define F1_RGHT     KC_TRNS
#define F1_PGUP     KC_TRNS
#define F1_PGDN     KC_TRNS