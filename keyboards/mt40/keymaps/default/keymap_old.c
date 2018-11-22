/* Copyright 2017 REPLACE_WITH_YOUR_NAME
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
#include "mt40.h"

#include "action_layer.h"
#include "rgblight.h"

#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define _QW 0
#define _DV 1
#define _VI 2
#define _FN 3
#define _LY 9

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QW] = KEYMAP(
  KC_TAB,        KC_Q,        KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,           KC_BSLS,
  KC_ESC,        KC_A,        KC_S,     KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN,        KC_QUOT,
  KC_LSPO,       SFT_T(KC_Z), KC_X,     KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   SFT_T(KC_SLSH), KC_RSPC,
  CTL_T(KC_ESC), KC_LALT,     KC_LGUI,  MO(_FN), KC_BSPC, MO(_VI), KC_ENT,  KC_SPC,  KC_TAB,  MO(_LY),  KC_QUOT,        CTL_T(KC_ESC) ),
[_DV] = KEYMAP(
  KC_TAB,        KC_QUOT,     KC_COMMA, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,     KC_L,           KC_BSLS,
  KC_ESC,        KC_A,        KC_O,     KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,     KC_S,           KC_QUOT,
  KC_LSPO,       KC_SCLN,     KC_Q,     KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,     KC_Z,           KC_RSPC,
  CTL_T(KC_ESC), KC_LALT,     KC_LGUI,  MO(_FN), KC_BSPC, MO(_VI), KC_ENT,  KC_SPC,  KC_TAB,  MO(_LY),  KC_QUOT,        CTL_T(KC_ESC) ),
[_VI] = KEYMAP(
  _______,       KC_EXLM,     KC_AT,    KC_HASH, KC_LCBR, KC_RCBR, KC_CIRC, KC_GRV,  KC_ASTR, KC_PLUS,  KC_EQL,         _______,
  _______,       KC_DLR,      KC_PERC,  KC_AMPR, KC_LBRC, KC_RBRC, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_PIPE,        _______,
  _______,       KC_LSFT,     KC_LABK,  KC_RABK, KC_LPRN, KC_RPRN, KC_MINS, KC_UNDS, KC_TILD, KC_DQUO,  KC_BSLS,        _______,
  _______,       _______,     _______,  XXXXXXX, _______, _______, _______, KC_DEL,  _______, KC_QUOT,  _______,        _______ ),
[_FN] = KEYMAP(
  KC_MUTE,       KC_VOLU,     KC_F7,    KC_F8,   KC_F9,   KC_F10,  KC_LPRN, RGB_MOD, KC_P7,   KC_P8,    KC_P9,          KC_PSLS,
  _______,       KC_VOLD,     KC_F4,    KC_F5,   KC_F6,   KC_F11,  KC_RPRN, RGB_VAI, KC_P4,   KC_P5,    KC_P6,          KC_PAST,
  _______,       KC_LSFT,     KC_F1,    KC_F2,   KC_F3,   KC_F12,  KC_MPLY, RGB_VAD, KC_P1,   KC_P2,    KC_P3,          KC_PMNS,
  _______,       _______,     _______,  _______, _______, XXXXXXX, _______, KC_SPC,  KC_P0,   KC_PDOT,  KC_PEQL,        KC_PPLS ),
[_LY] = KEYMAP(
  XXXXXXX,       XXXXXXX,     XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,        XXXXXXX,
  XXXXXXX,       XXXXXXX,     XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DF(_QW), DF(_DV), DF(_FN),  XXXXXXX,        XXXXXXX,
  XXXXXXX,       XXXXXXX,     XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,        XXXXXXX,
  XXXXXXX,       XXXXXXX,     XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,  XXXXXXX,        XXXXXXX ),
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
    [2] = ACTION_LAYER_MOMENTARY(3),
    [3] = ACTION_LAYER_MOMENTARY(4),
};
