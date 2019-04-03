#include "atreus.h"

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _QW 0
#define _VI 1
#define _FN 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QW] = LAYOUT(
  KC_Q,          KC_W,    KC_E,    KC_R,    KC_T,                      KC_Y,    KC_U,    KC_I,    KC_O,     KC_P    ,
  KC_A,          KC_S,    KC_D,    KC_F,    KC_G,                      KC_H,    KC_J,    KC_K,    KC_L,     GUI_T(KC_SCLN) ,
  SFT_T(KC_Z),   KC_X,    KC_C,    KC_V,    KC_B,                      KC_N,    KC_M,    KC_COMM, KC_DOT,   SFT_T(KC_SLSH) ,
  CTL_T(KC_ESC), KC_LALT, KC_LGUI, MO(_FN), KC_BSPC, MO(_VI), KC_ENT,  KC_SPC,  KC_TAB,  KC_RGUI, KC_QUOT,  CTL_T(KC_ESC) ),
[_VI] = LAYOUT(
  KC_EXLM,       KC_AT,   KC_HASH, KC_LCBR, KC_RCBR,                   KC_CIRC, KC_GRV,  KC_ASTR, KC_PLUS,  KC_EQL  ,
  KC_DLR,        KC_PERC, KC_AMPR, KC_LBRC, KC_RBRC,                   KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_PIPE ,
  KC_LSFT,       KC_LABK, KC_RABK, KC_LPRN, KC_RPRN,                   KC_MINS, KC_UNDS, KC_TILD, KC_DQUO,  KC_BSLS ,
  _______,       _______, _______, RESET,   KC_DEL,  _______, _______, _______, _______, _______, _______,  _______ ),
[_FN] = LAYOUT(
  KC_VOLU,       KC_F7,   KC_F8,   KC_F9,   KC_F10,                    KC_LPRN, KC_7,    KC_8,    KC_9,    KC_PSLS,
  KC_VOLD,       KC_F4,   KC_F5,   KC_F6,   KC_F11,                    KC_RPRN, KC_4,    KC_5,    KC_6,    KC_PAST,
  KC_LSFT,       KC_F1,   KC_F2,   KC_F3,   KC_F12,                    KC_MPLY, KC_1,    KC_2,    KC_3,    KC_PMNS,
  _______,       _______, _______, _______, KC_BSPC, XXXXXXX, _______, _______, KC_0,    KC_PDOT, KC_PEQL, KC_PPLS ),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
