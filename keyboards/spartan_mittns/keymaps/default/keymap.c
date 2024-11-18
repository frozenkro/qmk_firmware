// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
      * │Tab│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │Bsp│
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Ctl│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
      * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
      * │Sft│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │Sft│
      * └───┴───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┴───┘
      *               ┌───┐                   ┌───┐
      *               │GUI├───┐           ┌───┤Alt│
      *               └───┤Bsp├───┐   ┌───┤Ent├───┘
      *                   └───┤   │   │   ├───┘
      *                       └───┘   └───┘
      */
    [0] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    LT(4,KC_SCLN), MT(MOD_RSFT,KC_QUOT),
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL,
                                            KC_LALT, LT(1,KC_SPC), LT(2,KC_ESC), LT(2,KC_BSPC),  LT(1,KC_ENT),  KC_RALT
    ),
    [1] = LAYOUT_split_3x6_3(
        _______, _______,  KC_7,    KC_8,   KC_9,    KC_EQL,                             _______, _______, _______, _______, _______, _______,
        _______, _______,  KC_4,    KC_5,   KC_6,    KC_0,                               KC_LBRC, KC_9,    KC_0,    KC_RBRC, _______, KC_GRV,
        _______, _______,  KC_1,    KC_2,   KC_3,    KC_MINS,                            _______, _______, _______, _______, KC_BSLS, _______,
                                            KC_LGUI, _______, _______,          KC_DEL,  _______,  _______
    ),
    [2] = LAYOUT_split_3x6_3(
        _______, KC_VOLU,  KC_F7,   KC_F8,  KC_F9,   KC_F10,                             _______, _______, _______, _______, KC_PGUP, _______,
        _______, KC_VOLD,  KC_F4,   KC_F5,  KC_F6,   KC_F11,                             KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, KC_CAPS,
        _______, KC_MUTE,  KC_F1,   KC_F2,  KC_F3,   KC_F12,                             KC_PGDN, _______, _______, _______, _______, _______,
                                            _______, _______, _______,          _______, _______, _______
    ),
    /*
     * Gaming specific layer, wasd shifted over
     */
    [3] = LAYOUT_split_3x6_3(
        _______, KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,                               _______, _______, _______, _______, _______, _______,
        _______, KC_LSFT,  KC_A,    KC_S,    KC_D,    KC_F,                               _______, _______, _______, _______, LT(4,KC_SCLN), _______,
        _______, KC_LCTL,  KC_Z,    KC_X,    KC_C,    KC_V,                               _______, _______, _______, _______, _______, _______,
                                            _______, _______, _______, _______,  _______,  _______
    ),
    /*
     * Keyboard specific function layer
     * */
    [4] = LAYOUT_split_3x6_3(
        TG(3),   _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
        QK_RBT,  _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                             _______, _______, _______, _______, _______, _______,
                                            _______, _______, _______, _______,  _______,  _______
    ),
};
