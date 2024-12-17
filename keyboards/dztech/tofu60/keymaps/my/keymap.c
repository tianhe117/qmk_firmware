/* Copyright 2022 DZTECH <moyi4681@Live.cn>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
//#define ENABLE_MY_RGB
#include "my_define.h"
#include "my_macro.h"
#include "my_rgb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE_LAYER] = LAYOUT_all(
        BA_ESC,  BA_1,    BA_2,    BA_3,    BA_4,    BA_5,    BA_6,    BA_7,    BA_8,    BA_9,    BA_0,    BA_MINS, BA_EQL,  BA_BSPC, BA_GRV,
        BA_TAB,  BA_Q,    BA_W,    BA_E,    BA_R,    BA_T,    BA_Y,    BA_U,    BA_I,    BA_O,    BA_P,    BA_LBRC, BA_RBRC, BA_BSLS,
        BA_CAPS, BA_A,    BA_S,    BA_D,    BA_F,    BA_G,    BA_H,    BA_J,    BA_K,    BA_L,    BA_SCLN, BA_QUOT,          BA_ENT,
        BA_LSFT, _______, BA_Z,    BA_X,    BA_C,    BA_V,    BA_B,    BA_N,    BA_M,    BA_COMM, BA_DOT,  BA_SLSH, BA_RSFT, BA_FN,
        BA_LCTL, BA_LGUI, BA_LALT,                                     BA_SPC,                    _______, BA_RALT, BA_RGUI, BA_LCTL
    ),
    [_DEFAULT_LAYER] = LAYOUT_all(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
        KC_LSFT, _______, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(5),
        KC_LCTL, KC_LALT, KC_LGUI,                                     KC_SPC,                    _______, KC_RGUI, KC_RALT, KC_LCTL
    ),
    [_SPC_LAYER] = LAYOUT_all(
        SP_ESC,  SP_1,    SP_2,    SP_3,    SP_4,    SP_5,    SP_6,    SP_7,    SP_8,    SP_9,    SP_0,    SP_MINS, SP_EQL,  SP_BSPC, SP_GRV,
        SP_TAB,  SP_Q,    SP_W,    SP_E,    SP_R,    SP_T,    SP_Y,    SP_U,    SP_I,    SP_O,    SP_P,    SP_LBRC, SP_RBRC, SP_BSLS,
        SP_CAPS, SP_A,    SP_S,    SP_D,    SP_F,    SP_G,    SP_H,    SP_J,    SP_K,    SP_L,    SP_SCLN, SP_QUOT,          SP_ENT,
        SP_LSFT, _______, SP_Z,    SP_X,    SP_C,    SP_V,    SP_B,    SP_N,    SP_M,    SP_COMM, SP_DOT,  SP_SLSH, SP_RSFT, SP_FN,
        SP_LCTL, SP_LGUI, SP_LALT,                                     SP_SPC,                    _______, SP_RALT, SP_RGUI, SP_LCTL
    ),
    [_FN_LAYER] = LAYOUT_all(
        FN_ESC,  FN_1,    FN_2,    FN_3,    FN_4,    FN_5,    FN_6,    FN_7,    FN_8,    FN_9,    FN_0,    FN_MINS, FN_EQL,  FN_BSPC, FN_GRV,
        FN_TAB,  FN_Q,    FN_W,    FN_E,    FN_R,    FN_T,    FN_Y,    FN_U,    FN_I,    FN_O,    FN_P,    FN_LBRC, FN_RBRC, FN_BSLS,
        FN_CAPS, FN_A,    FN_S,    FN_D,    FN_F,    FN_G,    FN_H,    FN_J,    FN_K,    FN_L,    FN_SCLN, FN_QUOT,          FN_ENT,
        FN_LSFT, _______, FN_Z,    FN_X,    FN_C,    FN_V,    FN_B,    FN_N,    FN_M,    FN_COMM, FN_DOT,  FN_SLSH, FN_RSFT, FN_FN,
        FN_LCTL, FN_LGUI, FN_LALT,                                     FN_SPC,                    _______, FN_RALT, FN_RGUI, FN_LCTL
    ),
    [_FN1] = LAYOUT_all(
        F1_ESC,  F1_1,    F1_2,    F1_3,    F1_4,    F1_5,    F1_6,    F1_7,    F1_8,    F1_9,    F1_0,    F1_MINS, F1_EQL,  F1_BSPC, F1_GRV,
        F1_TAB,  F1_Q,    F1_W,    F1_E,    F1_R,    F1_T,    F1_Y,    F1_U,    F1_I,    F1_O,    F1_P,    F1_LBRC, F1_RBRC, F1_BSLS,
        F1_CAPS, F1_A,    F1_S,    F1_D,    F1_F,    F1_G,    F1_H,    F1_J,    F1_K,    F1_L,    F1_SCLN, F1_QUOT,          F1_ENT,
        F1_LSFT, _______, F1_Z,    F1_X,    F1_C,    F1_V,    F1_B,    F1_N,    F1_M,    F1_COMM, F1_DOT,  F1_SLSH, F1_RSFT, F1_FN,
        F1_LCTL, F1_LGUI, F1_LALT,                                     F1_SPC,                    _______, F1_RALT, F1_RGUI, F1_LCTL
    ),
    [5] = LAYOUT_all(
        F1_ESC,  F1_1,    F1_2,    F1_3,    F1_4,    F1_5,    F1_6,    F1_7,    F1_8,    F1_9,    F1_0,    F1_MINS, F1_EQL,  F1_BSPC, F1_GRV,
        F1_TAB,  F1_Q,    F1_W,    F1_E,    F1_R,    F1_T,    F1_Y,    F1_U,    F1_I,    F1_O,    F1_P,    F1_LBRC, F1_RBRC, F1_BSLS,
        F1_CAPS, F1_A,    F1_S,    F1_D,    F1_F,    F1_G,    F1_H,    F1_J,    F1_K,    F1_L,    F1_SCLN, F1_QUOT,          F1_ENT,
        F1_LSFT, _______, F1_Z,    F1_X,    F1_C,    F1_V,    F1_B,    F1_N,    F1_M,    F1_COMM, F1_DOT,  F1_SLSH, F1_RSFT, F1_FN,
        F1_LCTL, F1_LGUI, F1_LALT,                                     F1_SPC,                    _______, F1_RALT, F1_RGUI, F1_LCTL
    ),
};


