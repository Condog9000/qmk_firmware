#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    Condog9000
#define PRODUCT         Isksuren
#define DESCRIPTION     Handwired 96+ keyboard

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 10

/* key matrix pins */
#define MATRIX_ROW_PINS { A9, A10, B7, B6, B5, B4, B3, B2, B1, B0, A4, A5 }
#define MATRIX_COL_PINS { A6, A7, A8, A15, C13, A13, A14, B12, B11, B10 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */
#define BACKLIGHT_PIN A3
#define BACKLIGHT_PWM_DRIVER PWMD2
#define BACKLIGHT_PWM_CHANNEL 4
#define BACKLIGHT_PAL_MODE 1
#define BACKLIGHT_LEVELS 30
#define BACKLIGHT_BREATHING
#define BREATHING_PERIOD 6
/* temporary capslock indicator solution */
#define BACKLIGHT_CAPS_LOCK

/*Lock LED Pins*/
//#define LED_NUM_LOCK_PIN C15
//#define LED_CAPS_LOCK_PIN C14
//#define LED_SCROLL_LOCK_PIN
//#define LED_PIN_ON_STATE 1

/* Rotary Encoder Things */
// #define ENCODER DIRECTION_FLIP
#define ENCODERS_PAD_A { A1, B8, B14, B9 }
#define ENCODERS_PAD_B { A2, A0, B13, B15 }
//#define ENCODER_RESOLUTION 4
//#define ENCODER_RESOLUTIONS { 4, 4, 4, 4}

/* Taps (encoder tap_code) */
#define TAP_CODE_DELAY 10

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 3

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* prevent stuck modifiers */
//#define PREVENT_STUCK_MODIFIER