#ifndef KLOR_KEYCODE_H
#define KLOR_KEYCODE_H

#include QMK_KEYBOARD_H


// ┌───────────────────────────────────────────────────────────┐
// │ d e f i n e   k e y c o d e s                             │
// └───────────────────────────────────────────────────────────┘

typedef enum {
    QWERTY = SAFE_RANGE,
    SYMBOLS,
    ACTIONS,
    GAME,
    KEYB,
} custom_keycodes;

#endif
