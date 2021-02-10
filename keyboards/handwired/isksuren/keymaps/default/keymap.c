#include QMK_KEYBOARD_H

#define _BL 0
#define _FL 1
#define _SL 2


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BL] = LAYOUT( \
	    KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PAUS, BL_TOGG, KC_MPRV, KC_MPLY, KC_MNXT, \
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_INS, KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS, \
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL, KC_P7, KC_P8, KC_P9, \
		KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_END, KC_P4, KC_P5, KC_P6, KC_PPLS, \
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_HOME, KC_P1, KC_P2, KC_P3, \
		KC_LCTL, KC_LGUI, KC_LALT, KC_BSLS, KC_SPC, KC_BSPC, MO(2), KC_SPC, MO(1), KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT, KC_P0, KC_PDOT, KC_PENT \
	),

	[_FL] = LAYOUT( \
	    RESET, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_PSCR, BL_ON, KC_NO, KC_MUTE, KC_NO, \
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLCK, KC_CALC, KC_CALC, KC_CALC, \
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CALC, KC_CALC, KC_CALC, \
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGUI(KC_L), KC_NO, KC_NO, KC_NO, KC_PGUP, KC_CALC, KC_CALC, KC_CALC, KC_CALC, \
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_APP, KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLU, KC_PGDN, KC_CALC, KC_CALC, KC_CALC, \
		KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, LCTL(LSFT(KC_ESC)), RCTL(RALT(KC_DEL)), KC_NO, KC_VOLD, KC_CALC, KC_CALC, KC_CALC, KC_CALC \
	),

	[_SL] = LAYOUT( \
	    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_SLCK, BL_BRTG, KC_NO, KC_NO, KC_NO, \
		KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, \
		KC_NO, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_NO, KC_NO, KC_NO, KC_UP, KC_NO, \
		KC_NO, KC_NO, LCTL(KC_S), KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_CALC, KC_RIGHT, KC_NO, \
		KC_TRNS, LCTL(KC_Z), KC_CUT, KC_COPY, KC_PASTE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_DOWN, KC_NO, \
		KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_ENT, KC_DEL, KC_NO, KC_TRNS, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO \
	)
};

/*
Encoder control
Default:
Enc 0: Backlight up / down
Enc 1: Mouse Wheel left / right
Enc 2: Volume up / down
Enc 3: Mouse Wheel up / down
When on _FL
Enc 0: Disabled
Enc 1: Disabled
Enc 2: Disabled
Enc 3: Disabled
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
                tap_code(KC_NO);
            } else {
                tap_code(KC_NO);
            }
        } else if (index == 2) {
            if (clockwise) {
                tap_code(KC_VOLU);
            } else {
                tap_code(KC_VOLD);
            }
        } else if (index == 3) {
            if (clockwise) {
                tap_code(KC_MS_WH_DOWN);
            } else {
                tap_code(KC_MS_WH_UP);
            }
        }
    }
}
