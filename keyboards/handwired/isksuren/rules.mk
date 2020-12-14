# MCU name
MCU = STM32F303


# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = no	# Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE = yes	# Mouse keys(+4700)
EXTRAKEY_ENABLE = yes	# Audio control and System control(+450)
CONSOLE_ENABLE = no	# Console for debug(+400)
COMMAND_ENABLE = no    # Commands for debug and configuration
SLEEP_LED_ENABLE = no  # Breathing sleep LED during USB suspend
NKRO_ENABLE = yes		# USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE = yes  # Enable keyboard backlight functionality
BACKLIGHT_DRIVER = pwm
#BACKLIGHT_PWM_DRIVER = 
#BACKLIGHT_PWM_CHANNEL = 
#BACKLIGHT_PAL_MODE = 
BACKLIGHT_ON_STATE = 1
AUDIO_ENABLE = no
RGBLIGHT_ENABLE = no
ENCODER_ENABLE = yes
MIDI_ENABLE = no            # MIDI support
AUDIO_ENABLE = no           # Audio output on port C6
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID