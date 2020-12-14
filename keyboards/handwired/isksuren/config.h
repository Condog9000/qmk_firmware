/* Copyright 2019
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
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Condog9000
#define PRODUCT         Isksuren
#define DESCRIPTION     Handwired 96+ with encoders

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 10

/* key matrix pins */
#define MATRIX_ROW_PINS { B7, B6, B5, B4, B3, B1, B0, A4, A5, A9, A10 }
#define MATRIX_COL_PINS { B10, B11, B12, A14, A13, A15, A8, A7, A6, C13 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN A3
#define BACKLIGHT_LEVELS 10

/*Lock LED Pins*/
#define LED_NUM_LOCK_PIN C15
#define LED_CAPS_LOCK_PIN C14
//#define LED_SCROLL_LOCK_PIN
#define LED_PIN_ON_STATE 1

/* Rotary Encoder Things */
// #Define ENCODER DIRECTION_FLIP
#define Encoders_Pad_A { A2, A0, B13, B15 }
#define Encoders_Pad_B { A1, B8, B14, B9 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS




#endif