#pragma once
// clang-format off

/*
    6_pack_trinamic_5160_XXYYZ_input1_relay3_V1.h

    5160 Drivers
    XXYYZ motor arrangement
    Switch module in #1
    Relay Module in #3
    V1 6_Pack Hardware

    Part of Grbl_ESP32
    Pin assignments for the ESP32 SPI 6-axis board
    2020    - Bart Dring

    Grbl_ESP32 is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    Grbl is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with Grbl_ESP32.  If not, see <http://www.gnu.org/licenses/>.
*/
#define MACHINE_NAME            "6 Pack Trinamic XYZ StallGuard"

#define N_AXIS 3

// === Special Features

// I2S (steppers & other output-only pins)
#define USE_I2S_OUT
#define USE_I2S_STEPS
//#define DEFAULT_STEPPER ST_I2S_STATIC

#define I2S_OUT_BCK      GPIO_NUM_22
#define I2S_OUT_WS       GPIO_NUM_17
#define I2S_OUT_DATA     GPIO_NUM_21

// === motors

#define TRINAMIC_RUN_MODE           TRINAMIC_MODE_STALLGUARD
#define TRINAMIC_HOMING_MODE        TRINAMIC_MODE_STALLGUARD

#define X_TRINAMIC_DRIVER       5160
#define X_DISABLE_PIN           I2SO(0)
#define X_DIRECTION_PIN         I2SO(1)
#define X_STEP_PIN              I2SO(2)
#define X_CS_PIN                I2SO(3)
#define X_RSENSE                TMC5160_RSENSE_DEFAULT

#define Y_TRINAMIC_DRIVER       X_TRINAMIC_DRIVER
#define Y_DIRECTION_PIN        I2SO(4)
#define Y_STEP_PIN              I2SO(5)
#define Y_DISABLE_PIN           I2SO(7)
#define Y_CS_PIN                I2SO(6)
#define Y_RSENSE                X_RSENSE

#define Z_TRINAMIC_DRIVER       X_TRINAMIC_DRIVER
#define Z_DISABLE_PIN           I2SO(8)
#define Z_DIRECTION_PIN         I2SO(9)
#define Z_STEP_PIN              I2SO(10)
#define Z_CS_PIN                I2SO(11)
#define Z_RSENSE                X_RSENSE

// No 6th motor

// === CNC I/O Modules

//4x Input in Socket #1
#define X_LIMIT_PIN             GPIO_NUM_33 // Wire both x switches N.O. here
#define Y_LIMIT_PIN             GPIO_NUM_32 // Wire both y switches N.O. here
#define Z_LIMIT_PIN             GPIO_NUM_35
#define PROBE_PIN               GPIO_NUM_34


// === Default settings
#define DEFAULT_STEP_PULSE_MICROSECONDS I2S_OUT_USEC_PER_PULSE
