#include "Isksuren.h"

#define _BL 0
#define _FL 1
#define _SL 2

/*Matrix is duplexed
 * 6 physical rows and 20 physical columns
 * 12 logical rows and 10 logical columns
 */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BL] = Keymap(
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F10, KC_SLCK, BL_TOGG, KC_MPRV, KC_MPLY, KC_MNXT,
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KCNLCK, KC_PSLS, KC_PAST, KC_PMNS,
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_P7, KC_P8, KC_P9,
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_HOME, KC_P4, KC_P5, KC_P6, KC_PPLS,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_END, KC_P1, KC_P2, KC_P3,
		KC_LCTL, KC_LGUI, KC_LALT, KC_DEL, KC_SPC, KC_BSPC, MO(2), KC_SPC, KC_RALT, MO(1), KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_P0, KC_PDOT, KC_PENT),

	[_FL] = Keymap(
		RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_NO, KC_MUTE, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PAUS, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGUI(KC_L), KC_NO, KC_NO, KC_NO, KC_PGUP, KC_NO, KC_CALC, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTL(LSFT(KC_ESC)), KC_NO, RCTL(RALT(KC_DEL)), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

	[_SL] = Keymap(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LCTRL(KC_Y), KC_NO, KC_UP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_NO, KC_NO, LCTRL(KC_S), KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CALC, KC_NO, KC_NO,
		KC_TRNS, LCTRL(KC_Z), KC_CUT, KC_COPY, KC_PASTE, KC_NO, KC_NO, LCTRL(LSFT(KC_M)), KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
		KC_TRNS, KC_TRNS, KC_TRNS, KC_MENU, KC_ENT, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),


/*
	[_BL] = KEYMAP(
		KC_ESC, KC_F2, KC_F4, KC_F5, KC_F7, KC_F9, KC_F11, BL_TOGG, KC_MPLY, 
		KC_F1, KC_F3, KC_F6, KC_F8, KC_F10, KC_F12, KC_SLCK, KC_MPRV, KC_MNXT, 
		KC_GRV, KC_2, KC_4, KC_6, KC_8, KC_0, KC_EQL, KC_NLCK, KC_PAST, 
		KC_1, KC_3, KC_5, KC_7, KC_9, KC_MINS, KC_BSPC, KC_INS, KC_PSLS, KC_PMNS, 
		KC_TAB, KC_Q, KC_E, KC_T, KC_U, KC_O, KC_LBRC, KC_BSLS, KC_P7, KC_P9, 
		KC_W, KC_R, KC_Y, KC_I, KC_P, KC_RBRC, KC_DEL, KC_P8, 
		KC_CAPS, KC_A, KC_D, KC_G, KC_J, KC_L, KC_QUOT, KC_P4, KC_P6, 
		KC_S, KC_F, KC_H, KC_K, KC_SCLN, KC_ENT, KC_HOME, KC_P5, KC_PPLS, 
		KC_LSFT, KC_Z, KC_C, KC_B, KC_M, KC_DOT, KC_UP, KC_P1, KC_P3, 
		KC_X, KC_V, KC_N, KC_COMM, KC_SLSH, KC_RSFT, KC_END, KC_P2, 
		KC_LCTL, KC_LGUI, KC_BSPC, KC_ENT, KC_SPC, MO(1), KC_DOWN, KC_PDOT, 
		KC_LALT, KC_SPC, MO(2), KC_RALT, KC_RCTL, KC_LEFT, KC_RGHT, KC_P0, KC_PENT),

	[_FL] = KEYMAP(
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PAUS, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGUI(KC_L), KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGUP, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PGDN, KC_NO, 
		KC_NO, KC_NO, RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

	[_SL] = KEYMAP(
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_ESC, KC_F2, KC_F4, KC_F6, KC_F8, KC_F10, KC_F12, KC_TRNS, KC_TRNS, 
		KC_F1, KC_F3, KC_F5, KC_F7, KC_F9, KC_F11, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_UP, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_DOWN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_LEFT, KC_RGHT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_LCTL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_LALT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
*/
};

/*
Encoder control
Default:
Enc 0: Disabled
Enc 1: Disabled
Enc 2: Volume up / down / mute
Enc 3: Media next / prev / play-pause
When on _FN
Enc 0: Hue
Enc 1: Saturation
Enc 2: Brightness
Enc 3: LED Mode / enable
*/
void encoder_update_user(uint8_t index, bool clockwise) {
    if (IS_LAYER_ON(_FL)){
        if (index == 0) {
            //if (clockwise) {
            //    ();
            //} else {
            //    ();
            //}
        } else if (index == 1) {
            //if (clockwise) {
            //    ();
            //} else {
            //    ();
            //}
        } else if (index == 2) {
            //if (clockwise) {
            //    ();
            //} else {
            //    ();
            //}
        } else if (index == 3) {
            //if (clockwise) {
            //    ();
            //} else {
            //    ();
            //}
        }
    } else {
    	if (index == 0) {
            if (clockwise) {
            	backlight_increase();
            } else {
            	backlight_decrease();
            }
        } else if (index == 1) {
            if (clockwise) {
                tap_code(KC_MS_WH_RIGHT);
            } else {
                tap_code(KC_MS_WH_LEFT);
            }
        } else if (index == 2) {
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
        } else if (index == 3) {
            if (clockwise) {
                tap_code(KC_MS_WH_Down);
            } else {
                tap_code(KC_MS_WH_UP);
            }
        }
    }
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
		DDRD |= (1 << 3); PORTD &= ~(1 << 3);
	} else {
		DDRD &= ~(1 << 3); PORTD &= ~(1 << 3);
	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
		DDRD |= (1 << 1); PORTD &= ~(1 << 1);
	} else {
		DDRD &= ~(1 << 1); PORTD &= ~(1 << 1);
	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {
		DDRD |= (1 << 2); PORTD &= ~(1 << 2);
	} else {
		DDRD &= ~(1 << 2); PORTD &= ~(1 << 2);
	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {
		
	} else {
		
	}

	if (usb_led & (1 << USB_LED_KANA)) {
		
	} else {
		
	}

}