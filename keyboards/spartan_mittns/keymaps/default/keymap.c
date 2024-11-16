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
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL,
                                            KC_LALT, LT(1,KC_SPC), LT(2,KC_ESC), LT(2,KC_BSPC),  LT(1,KC_ENT),  KC_RALT
    ),
    [1] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_Q,    KC_7,    KC_8,    KC_9,    KC_EQL,                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_PGUP, KC_BSPC,
        KC_LSFT, KC_A,    KC_4,    KC_5,    KC_6,    KC_0,                               KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_SCLN, KC_QUOT,
        KC_LCTL, KC_Z,    KC_1,    KC_2,    KC_3,    KC_MINS,                            KC_PGDN, KC_M,    KC_COMM, KC_DOT,  KC_BSLS, KC_CAPS,
                                            KC_LGUI, KC_SPC, KC_ESC,             KC_DEL,  KC_ENT,  KC_RALT
    ),
    [2] = LAYOUT_split_3x6_3(
        KC_TAB,  KC_VOLU,  KC_F7,   KC_F8,   KC_F9,    KC_F10,                           KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        KC_LSFT, KC_VOLD,  KC_F4,   KC_F5,   KC_F6,    KC_F11,                           KC_LBRC, KC_9,    KC_0,    KC_RBRC, KC_SCLN, KC_GRV,
        KC_LCTL, KC_MUTE,  KC_F1,   KC_F2,   KC_F3,    KC_F12,                           KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL,
                                            KC_LALT, KC_SPC, KC_ESC,             KC_BSPC,  KC_ENT,  KC_RALT
    )
};
