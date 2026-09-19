/*
 * SPDX-License-Identifier: MIT
 * SPDX-FileCopyrightText: Copyright (c) 2024 OpenStickCommunity (gp2040-ce.info)
 */

#ifndef PICO_BOARD_CONFIG_H_
#define PICO_BOARD_CONFIG_H_

#include "enums.pb.h"
#include "class/hid/hid.h"

#define BOARD_CONFIG_LABEL "Waveshare Zero"

// Default system boot mode
#define DEFAULT_INPUT_MODE INPUT_MODE_KEYBOARD

// Main pin mapping Configuration
//                                                // GP2040 | Target Key |
#define GPIO_PIN_05 GpioAction::BUTTON_PRESS_S2     // S2     | S          |
#define GPIO_PIN_06 GpioAction::BUTTON_PRESS_B1     // B1     | D          |
#define GPIO_PIN_07 GpioAction::BUTTON_PRESS_B2     // B2     | F          |
#define GPIO_PIN_08 GpioAction::BUTTON_PRESS_B3     // B3     | V          |
#define GPIO_PIN_09 GpioAction::BUTTON_PRESS_S1     // S1     | ESC        |
#define GPIO_PIN_13 GpioAction::BUTTON_PRESS_A1     // A1     | `          |
#define GPIO_PIN_14 GpioAction::BUTTON_PRESS_B4     // B4     | N          |
#define GPIO_PIN_15 GpioAction::BUTTON_PRESS_L1     // L1     | J          |
#define GPIO_PIN_26 GpioAction::BUTTON_PRESS_R1     // R1     | K          |
#define GPIO_PIN_27 GpioAction::BUTTON_PRESS_L2     // L2     | L          |

// Unused GPIO pins explicitly disabled
#define GPIO_PIN_00 GpioAction::NONE
#define GPIO_PIN_01 GpioAction::NONE
#define GPIO_PIN_02 GpioAction::NONE
#define GPIO_PIN_03 GpioAction::NONE
#define GPIO_PIN_04 GpioAction::NONE
#define GPIO_PIN_10 GpioAction::NONE
#define GPIO_PIN_11 GpioAction::NONE
#define GPIO_PIN_12 GpioAction::NONE
#define GPIO_PIN_28 GpioAction::NONE
#define GPIO_PIN_29 GpioAction::NONE

// Keyboard Mapping Configuration
//                                            // GP2040 | Target Key |
#define KEY_BUTTON_S2   HID_KEY_S             // S2     | S          |
#define KEY_BUTTON_B1   HID_KEY_D             // B1     | D          |
#define KEY_BUTTON_B2   HID_KEY_F             // B2     | F          |
#define KEY_BUTTON_B3   HID_KEY_V             // B3     | V          |
#define KEY_BUTTON_S1   HID_KEY_ESCAPE        // S1     | ESC        |
#define KEY_BUTTON_A1   HID_KEY_GRAVE         // A1     | `          |
#define KEY_BUTTON_B4   HID_KEY_N             // B4     | N          |
#define KEY_BUTTON_L1   HID_KEY_J             // L1     | J          |
#define KEY_BUTTON_R1   HID_KEY_K             // R1     | K          |
#define KEY_BUTTON_L2   HID_KEY_L             // L2     | L          |

#define KEY_DPAD_UP     0x00
#define KEY_DPAD_DOWN   0x00
#define KEY_DPAD_RIGHT  0x00
#define KEY_DPAD_LEFT   0x00
#define KEY_BUTTON_R2   0x00
#define KEY_BUTTON_R3   0x00
#define KEY_BUTTON_L3   0x00
#define KEY_BUTTON_A2   0x00
#define KEY_BUTTON_FN   0x00

#endif
