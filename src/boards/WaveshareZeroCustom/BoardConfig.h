#ifndef BOARD_CONFIG_H_
#define BOARD_CONFIG_H_

#define BOARD_CONFIG_LABEL "Waveshare Zero 10-Key Custom"

// Disable standard directional pins
#define PIN_BUTTON_UP    -1
#define PIN_BUTTON_DOWN  -1
#define PIN_BUTTON_LEFT  -1
#define PIN_BUTTON_RIGHT -1

// Direct GPIO to Controller Action Mappings
#define PIN_BUTTON_S2    5   // GP5  -> S
#define PIN_BUTTON_B1    6   // GP6  -> D
#define PIN_BUTTON_B2    7   // GP7  -> F
#define PIN_BUTTON_B3    8   // GP8  -> V
#define PIN_BUTTON_S1    9   // GP9  -> ESC
#define PIN_BUTTON_A1    13  // GP13 -> `
#define PIN_BUTTON_B4    14  // GP14 -> N
#define PIN_BUTTON_L1    15  // GP15 -> J
#define PIN_BUTTON_R1    26  // GP26 -> K
#define PIN_BUTTON_L2    27  // GP27 -> L

// Default Keyboard HID Keycode Overrides
#define KEYBOARD_INPUT_ENABLED 1

#define KEY_MAPPING_S2 HID_KEY_S
#define KEY_MAPPING_B1 HID_KEY_D
#define KEY_MAPPING_B2 HID_KEY_F
#define KEY_MAPPING_B3 HID_KEY_V
#define KEY_MAPPING_S1 HID_KEY_ESCAPE
#define KEY_MAPPING_A1 HID_KEY_GRAVE
#define KEY_MAPPING_B4 HID_KEY_N
#define KEY_MAPPING_L1 HID_KEY_J
#define KEY_MAPPING_R1 HID_KEY_K
#define KEY_MAPPING_L2 HID_KEY_L

// Rhythm Game Optimization: 1ms Eager Debounce
#define DEBOUNCE_TYPE DEBOUNCE_TYPE_EAGER
#define DEBOUNCE_MILLIS 1

#endif
