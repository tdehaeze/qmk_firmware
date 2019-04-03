/* Copyright 2015-2017 Jack Humbert
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

#include "action_layer.h"

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _QW 0
#define _VI 1
#define _FN 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QW] = LAYOUT_ortho_4x12(KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,    KC_BSLS ,
                          KC_ESC,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN, KC_QUOT ,
                          KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_RSFT ,
                          KC_LCTRL, KC_LALT, KC_LGUI, MO(_FN), KC_BSPC, MO(_VI), KC_ENT,  KC_SPC,  KC_RGUI, _______,  KC_RALT, KC_RCTRL ),
[_VI] = LAYOUT_ortho_4x12(_______,  KC_EXLM, KC_AT,   KC_HASH, KC_LCBR, KC_RCBR, KC_CIRC, KC_GRV,  KC_ASTR, KC_PLUS,  KC_EQL,  _______ ,
                          _______,  KC_DLR,  KC_PERC, KC_AMPR, KC_LBRC, KC_RBRC, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_PIPE, _______ ,
                          _______,  XXXXXXX, KC_LABK, KC_RABK, KC_LPRN, KC_RPRN, KC_MINS, KC_UNDS, KC_TILD, KC_DQUO,  KC_BSLS, _______ ,
                          _______,  _______, _______, _______, _______, XXXXXXX, _______, KC_DEL,  _______, KC_QUOT,  _______, _______ ),
[_FN] = LAYOUT_ortho_4x12(_______, KC_VOLU, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MNXT, KC_P7,   KC_P8,   KC_P9,    KC_PSLS,  KC_MFFD ,
                          _______, KC_VOLD, KC_F4,   KC_F5,   KC_F6,   KC_F11,  KC_MPRV, KC_P4,   KC_P5,   KC_P6,    KC_PAST,  KC_MRWD ,
                          _______, KC_LSFT, KC_F1,   KC_F2,   KC_F3,   KC_F12,  KC_MPLY, KC_P1,   KC_P2,   KC_P3,    KC_PMNS,  _______ ,
                          _______, _______, _______, XXXXXXX, _______, KC_DEL,  _______, KC_P0,   KC_PDOT, KC_PEQL,  KC_PPLS,  _______ )
};
