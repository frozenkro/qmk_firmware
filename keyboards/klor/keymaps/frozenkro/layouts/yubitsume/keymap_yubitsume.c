#ifndef KEYMAP_YUBITSUME_H
#define KEYMAP_YUBITSUME_H

#include "kro_keycodes.h"
#include "kro_layers.h"

const uint16_t HM_A = MT(MOD_LGUI,KC_A);
const uint16_t HM_S = MT(MOD_LALT,KC_S);
const uint16_t HM_D = MT(MOD_LCTL,KC_D);
const uint16_t HM_F = MT(MOD_LSFT,KC_F);
const uint16_t HM_J = MT(MOD_RSFT,KC_J);
const uint16_t HM_K = MT(MOD_RCTL,KC_K);
const uint16_t HM_L = MT(MOD_RALT,KC_L);

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HM_A:
            return false;
        default:
            return true;
    }
}
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HM_A:
            return 200;
        case HM_F:
            return 120;
        case HM_J:
            return 120;
        case HM_K:
            return 170;
        case HM_D:
            return 170;
        default:
            return TAPPING_TERM;
    }
}

layer_state_t layer_state_set_user(layer_state_t state) {
    if (layer_state_cmp(state, 1) && matrix_is_on(7,3)) {
        register_code(KC_RSFT);
    }

    // failsafe so we don't accidentally stick the shift key
    if (layer_state_cmp(state, 0)) {
        // there's an edge case here where we unregister a physically held shift
        unregister_code(KC_RSFT);
    }
    return state;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

 /*
   ╺━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━╸

   ┌───────────────────────────────────────────────────────────┐
   │ q w e r t y                                               │
   └───────────────────────────────────────────────────────────┘
   ┌─────────┬─────────┬─────────┬─────────┬─────────┐                    ┌─────────┬─────────┬─────────┬─────────┬─────────┐
   │    Q    │    W    │    E    │    R    │    T    │ ╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮╭╮ │    Y    │    U    │    I    │    O    │    P    │
   ├─────────┼─────────┼─────────┼─────────┼─────────┤ │╰╯╰╯╰╯╰╯╰╯╰╯╰╯╰╯│ ├─────────┼─────────┼─────────┼─────────┼─────────┤
   │    A    │    S    │    D    │    F    │    G    ├─╯                ╰─┤    H    │    J    │    K    │    L    │    ;    │
   ├─────────┼─────────┼─────────┼─────────┼─────────┤╭────────╮╭────────╮├─────────┼─────────┼─────────┼─────────┼─────────┤
   │    Z    │    X    │    C    │    V    │    B    ││  MUTE  ││PLY/PSE ││    N    │    M    │    ,    │    .    │    /    │
   └─────────┴─────────┼─────────┼─────────┼─────────┼╰────────╯╰────────╯┼─────────┼─────────┼─────────┼─────────┴─────────┘
                       │  ______ │  _____  │  _____  │   ____  ││ _______ │  _____  │  _____  │ ______  │
                       └─────────┴─────────┴─────────┴─────────┘└─────────┴─────────┴─────────┴─────────┘ */

   [_QWERTY] = LAYOUT_yubitsume(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷
    KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                          KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,
    HM_A,     HM_S,     HM_D,     HM_F,     KC_G,                          KC_H,     HM_J,     HM_K,     HM_L,     KC_SCLN,
    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_MUTE,   KC_MPLY,  KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,
                        KC_ESC,KC_SPC,MO(1),MO(2), MO(2),LM(1,MOD_RSFT),KC_BSPC,KC_ENT
 ),


   [_SYMBOLS] = LAYOUT_yubitsume(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷
    _______,  KC_7,     KC_8,     KC_9,     KC_EQL,                        _______,  _______,  _______,  _______,  _______,
    KC_TAB,   KC_4,     KC_5,     KC_6,     KC_0,                          KC_LBRC,  KC_9,     KC_0,     KC_RBRC,  _______,
    _______,  KC_1,     KC_2,     KC_3,     KC_MINS,  _______,   _______,  _______,  KC_QUOT,  KC_GRV,   _______,  KC_BSLS,
                        _______,  _______,  _______,  _______,   _______,  KC_DEL,   KC_SPC,   KC_CAPS
 ),

   [_ACTIONS] = LAYOUT_yubitsume(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷
    KC_VOLU,  KC_F7,    KC_F8,    KC_F9,    KC_F10,                        _______,  _______,  _______,  _______,  KC_PGUP,
    KC_VOLD,  KC_F4,    KC_F5,    KC_F6,    KC_F11,                        KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_CAPS,
    KC_MUTE,  KC_F1,    KC_F2,    KC_F3,    KC_F12,   _______,   _______,  KC_PGDN,  _______,  _______,  _______,  KC_PSCR,
                        _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______
 ),

   [_GAME] = LAYOUT_yubitsume(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷
    KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,                          _______,  _______,  _______,  _______,  _______,
    KC_LSFT,  KC_A,     KC_S,     KC_D,     KC_F,                          _______,  _______,  _______,  _______,  LT(4,KC_SCLN),
    KC_LCTL,  KC_Z,     KC_X,     KC_C,     KC_V,     _______,   _______,  _______,  _______,  _______,  _______,  _______,
                        _______,  KC_LCTL,  KC_SPC,   _______,   _______,  _______,  _______,  _______
 ),
   [_KEYB] = LAYOUT_yubitsume(
 //╷         ╷         ╷         ╷         ╷         ╷         ╷         ╷╷         ╷         ╷         ╷         ╷         ╷
    TG(3),    _______,  _______,  _______,  _______,                       _______,  _______,  _______,  _______,  _______,
    QK_RBT,   _______,  _______,  _______,  _______,                       _______,  _______,  _______,  _______,  _______,
    _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,
                        _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______
 )

};

#endif
