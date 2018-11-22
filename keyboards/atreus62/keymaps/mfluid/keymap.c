#include QMK_KEYBOARD_H

#include "action_layer.h"

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _QW 0
#define _VI 1
#define _FN 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// Base Layer
[_QW] = {
         { KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, KC_6,    KC_7,    KC_8,    KC_9,     KC_0,     KC_DEL  },
         { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,     KC_BSLS },
         { KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______, KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,  KC_QUOT },
         { KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    MO(_VI), KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH,  KC_RSFT },
         { KC_LCTL, KC_LALT, XXXXXXX, KC_LGUI, MO(_FN), KC_BSPC, KC_ENT,  KC_SPC,  KC_RGUI, XXXXXXX, XXXXXXX,  KC_RALT,  KC_RCTL }
},

// Function Layer
[_VI] = {
         { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______ },
         { _______, KC_EXLM, KC_AT,   KC_HASH, KC_LCBR, KC_RCBR, _______, KC_CIRC, KC_GRV,  KC_ASTR, KC_PLUS,  KC_EQL,   _______ },
         { _______, KC_DLR,  KC_PERC, KC_AMPR, KC_LBRC, KC_RBRC, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_PIPE,  KC_QUOT },
         { _______, XXXXXXX, KC_LABK, KC_RABK, KC_LPRN, KC_RPRN, _______, KC_MINS, KC_UNDS, KC_TILD, KC_DQUO,  KC_BSLS,  _______ },
         { _______, _______, _______, _______, XXXXXXX, _______, _______, _______, _______, _______, _______,  _______,  _______ }
},

// Multimedia Layer
[_FN] = {
         { _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  RESET   },
         { _______, KC_VOLU, KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, KC_MNXT, KC_P7,   KC_P8,   KC_P9,    KC_PSLS,  KC_MFFD },
         { _______, KC_VOLD, KC_F4,   KC_F5,   KC_F6,   KC_F11,  _______, KC_MPRV, KC_P4,   KC_P5,   KC_P6,    KC_PAST,  KC_MRWD },
         { _______, KC_MUTE, KC_F1,   KC_F2,   KC_F3,   KC_F12,  XXXXXXX, KC_MPLY, KC_P1,   KC_P2,   KC_P3,    KC_PMNS,  _______ },
         { _______, _______, _______, _______, _______, KC_DEL,  _______, _______, KC_P0,   KC_PDOT, KC_PEQL,  KC_PPLS,  _______ }
}

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  // MACRODOWN only works in this function
  switch (id) {
  case 0:
    if (record->event.pressed) {
      register_code(KC_RSFT);
    }
    else {
      unregister_code(KC_RSFT);
    }
    break;
  }
  return MACRO_NONE;
};
