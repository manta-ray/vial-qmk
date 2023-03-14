#include QMK_KEYBOARD_H
#include "mirelurk.h"

enum mirelurk_layers {
    _BASE,
    _NUM,
    _NAV,
    _GAME,
    _GAMENUM
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_mirelurk(
        KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT,
		LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), MEH_T(KC_T), KC_G, KC_M, MEH_T(KC_N), RCTL_T(KC_E), RALT_T(KC_I), RGUI_T(KC_O),
		KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH,
		KC_ESC, LT(1, KC_BACKSPACE), LT(2, KC_TAB), OSM(MOD_LSFT), KC_SPC, KC_DEL
    )
/*
    [_NUM] = LAYOUT_mirelurk(

    ),

    [_NAV] = LAYOUT_mirelurk(

    ),

    [_GAME] = LAYOUT_mirelurk(

    ),

    [_GAMENUM] = LAYOUT_mirelurk(

    )
*/
};
