#include "kbd75.h"

#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

#define OOOOOOO KC_TRNS
#define XXXXXXX KC_NO

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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
// Base Layer
[0] = {
		{ KC_EQL,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    _______, _______, _______, KC_6,    KC_7,  KC_8,    KC_9,     KC_0,     KC_MINS },
		{ KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    _______, _______, _______, KC_Y,    KC_U,  KC_I,    KC_O,     KC_P,     KC_BSLS },
		{ KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    _______, _______, _______, KC_H,    KC_J,  KC_K,    KC_L,     KC_SCLN,  KC_QUOT },
		{ KC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    _______, _______, _______, KC_N,    KC_M,  KC_COMM, KC_DOT,   KC_SLSH,  KC_RSPC },
		{ KC_LCTL, KC_LALT, XXXXXXX, KC_LGUI, MO(1),   KC_BSPC, _______, _______, _______, KC_SPC,  MO(2), KC_GRV,  KC_EQL,   KC_LBRC,  KC_RBRC }
},
// Function Layer
[1] = {
		{ XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   _______, _______, _______, KC_F6,   KC_F7,   KC_F8,   KC_F9,    KC_F10,   KC_F11  },
		{ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, KC_P7,   KC_P8,   KC_P9,    KC_PSLS,  KC_F12  },
		{ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, KC_P4,   KC_P5,   KC_P6,    KC_PAST,  XXXXXXX },
		{ KC_LSPO, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, KC_P1,   KC_P2,   KC_P3,    KC_PMNS,  KC_RSPC },
		{ KC_LCTL, KC_LALT, XXXXXXX, KC_LGUI, OOOOOOO, KC_BSPC, _______, _______, _______, KC_SPC,  KC_P0,   KC_PDOT, KC_PENT,   KC_PPLS,  XXXXXXX }
},
// Multimedia Layer
[2] = {
		{ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX },
		{ XXXXXXX, XXXXXXX, KC_MUTE, KC_VOLD, KC_VOLU, XXXXXXX, _______, _______, _______, XXXXXXX, KC_ACL0, KC_ACL1, KC_ACL2,  XXXXXXX,  XXXXXXX },
		{ XXXXXXX, XXXXXXX, KC_MPLY, KC_MRWD, KC_MFFD, XXXXXXX, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R,  XXXXXXX,  XXXXXXX },
		{ XXXXXXX, XXXXXXX, KC_MPLY, KC_MPRV, KC_MNXT, XXXXXXX, _______, _______, _______, XXXXXXX, KC_BTN1, KC_BTN2, XXXXXXX,  XXXXXXX,  XXXXXXX },
		{ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL,  _______, _______, _______, XXXXXXX, OOOOOOO, XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX }
},
// VIM Layer
[3] = {
		{ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, VIM_4,   XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, VIM_0,   XXXXXXX },
		{ XXXXXXX, XXXXXXX, XXXXXXX, VIM_E,   XXXXXXX, XXXXXXX, _______, _______, _______, VIM_Y,   VIM_U,   XXXXXXX, XXXXXXX, VIM_P,   XXXXXXX },
		{ XXXXXXX, XXXXXXX, XXXXXXX, VIM_D,   VIM_F,   XXXXXXX, _______, _______, _______, VIM_H,   VIM_J,   VIM_K,   VIM_L,   XXXXXXX, XXXXXXX },
		{ XXXXXXX, XXXXXXX, VIM_X,   XXXXXXX, XXXXXXX, VIM_B,   _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX },
		{ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX }
}
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    switch (id) {

    }
    return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void led_set_user(uint8_t usb_led) {

    if (usb_led & (1 << USB_LED_NUM_LOCK)) {

    } else {

    }

    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
        DDRB |= (1 << 2); PORTB &= ~(1 << 2);
    } else {
        DDRB &= ~(1 << 2); PORTB &= ~(1 << 2);
    }

    if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

    } else {

    }

    if (usb_led & (1 << USB_LED_COMPOSE)) {

    } else {

    }

    if (usb_led & (1 << USB_LED_KANA)) {

    } else {

    }

}

enum function_id {
    SHIFT_ESC,
};

const uint16_t PROGMEM fn_actions[] = {
    [0]  = ACTION_FUNCTION(SHIFT_ESC),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
    static uint8_t shift_esc_shift_mask;
    switch (id) {
        case SHIFT_ESC:
            shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
            if (record->event.pressed) {
                if (shift_esc_shift_mask) {
                    add_key(KC_GRV);
                    send_keyboard_report();
                } else {
                    add_key(KC_ESC);
                    send_keyboard_report();
                }
            } else {
                if (shift_esc_shift_mask) {
                    del_key(KC_GRV);
                    send_keyboard_report();
                } else {
                    del_key(KC_ESC);
                    send_keyboard_report();
                }
            }
            break;
    }
}
