#include "xd75.h"

#include "backlight.h"

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _QW 0
#define _FN 1
#define _MU 2
#define _VI 3

#define VIM_E LALT(KC_RIGHT)
#define VIM_B LALT(KC_LEFT)
#define VIM_Y LCTL(KC_C)
#define VIM_U KC_PGUP
#define VIM_P LCTL(KC_P)
#define VIM_D KC_PGDN
#define VIM_F LCTL(KC_F)
#define VIM_H KC_LEFT
#define VIM_J KC_DOWN
#define VIM_K KC_UP
#define VIM_L KC_RIGHT
#define VIM_X LCTL(KC_X)
#define VIM_0 RCTL(KC_LEFT)
#define VIM_4 RCTL(KC_RIGHT)


/* SPLIT QWERTY
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | NUM/   | NUM*   | NUM-   | 6      | 7      | 8      | 9      | 0      | `      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
 * | TAB    | Q      | W      | E      | R      | T      | NUM7   | NUM8   | NUM9   | Y      | U      | I      | O      | P      | BSPACE |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
 * | LCTRL  | A      | S      | D      | F      | G      | NUM4   | NUM5   | NUM6   | H      | J      | K      | L      | ;      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | NUM1   | NUM2   | NUM3   | N      | M      | <      | >      | /      | RSHIFT |
 * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
 * | LALT   | RAISE  | RAISE  | LGUI   | SPACE  | SPACE  | NUM+   | NUM0   | NUM.   | SPACE  | SPACE  | RGUI   | LOWER  | LOWER  | RALT   |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// QWERTY Layer
    [_QW] = {
        { KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    RGB_MOD, RGB_VAD, RGB_VAI, KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS },
        { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MUTE, KC_VOLD, KC_VOLU, KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS },
        { KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    XXXXXXX, KC_UP,   XXXXXXX, KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT },
        { KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LEFT, KC_DOWN, KC_RGHT, KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC },
        { KC_LCTL, KC_LALT, MO(_FN), KC_LGUI, MO(_VI), KC_BSPC, KC_LCTL, RGB_TOG, KC_ENT,  KC_SPC, MO(_MU), KC_DEL,  KC_EQL,  KC_LBRC, KC_RBRC },
    },
// Function Layer
    [_FN] = {
        { XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   XXXXXXX, XXXXXXX, XXXXXXX, KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,   KC_F11  },
        { XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P7,   KC_P8,   KC_P9,    KC_PSLS,  KC_F12  },
        { XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P4,   KC_P5,   KC_P6,    KC_PAST,  XXXXXXX },
        { KC_LSPO, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_P1,   KC_P2,   KC_P3,    KC_PMNS,  KC_RSPC },
        { KC_LCTL, KC_LALT, _______, KC_LGUI, XXXXXXX, KC_BSPC, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC,  KC_P0,   KC_PDOT, KC_PENT,  KC_PPLS,  XXXXXXX }
    },
// Multimedia Layer
    [_MU] = {
        { XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RESET,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX },
        { XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_ACL0, KC_ACL1, KC_ACL2, XXXXXXX, XXXXXXX },
        { XXXXXXX, XXXXXXX, KC_MPLY, KC_MRWD, KC_MFFD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX, XXXXXXX },
        { XXXXXXX, XXXXXXX, KC_MPLY, KC_MPRV, KC_MNXT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_BTN1, KC_BTN2, XXXXXXX, XXXXXXX, XXXXXXX },
        { XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX }
    },
// VIM Layer 
    [_VI] = {
        { XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, VIM_4,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, VIM_0,   XXXXXXX },
        { XXXXXXX, XXXXXXX, XXXXXXX, VIM_E,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, VIM_Y,   VIM_U,   XXXXXXX, XXXXXXX, VIM_P,   XXXXXXX },
        { XXXXXXX, XXXXXXX, XXXXXXX, VIM_D,   VIM_F,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, VIM_H,   VIM_J,   VIM_K,   VIM_L,   XXXXXXX, XXXXXXX },
        { XXXXXXX, XXXXXXX, VIM_X,   XXXXXXX, XXXXXXX, VIM_B,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX },
        { XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX }
    },
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
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
