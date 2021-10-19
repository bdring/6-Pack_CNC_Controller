#pragma once
// clang-format off

/*
    6_pack_2130_XYYZA_Relay_Laser_OLED.h

    Part of Grbl_ESP32
    Pin assignments for the ESP32 SPI 6-axis board
    
    2021-10-16 B. Dring for John Prince.

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
#define MACHINE_NAME            "6 Pack XXYYZ" // keep the name short for the OLED

#define DISPLAY_CODE_FILENAME "Custom/oled_basic.cpp"

#define N_AXIS 3

// I2S (steppers & other output-only pins)
#define USE_I2S_OUT
#define USE_I2S_STEPS
//#define DEFAULT_STEPPER ST_I2S_STATIC

#define I2S_OUT_BCK      GPIO_NUM_22
#define I2S_OUT_WS       GPIO_NUM_17
#define I2S_OUT_DATA     GPIO_NUM_21

#define TRINAMIC_RUN_MODE           Motors::TrinamicMode::CoolStep
#define TRINAMIC_HOMING_MODE        Motors::TrinamicMode::CoolStep

// Motor Socket #1
#define X_TRINAMIC_DRIVER       2130
#define X_DISABLE_PIN           I2SO(0)
#define X_DIRECTION_PIN         I2SO(1)
#define X_STEP_PIN              I2SO(2)
#define X_CS_PIN                I2SO(3)
#define X_RSENSE                TMC2130_RSENSE_DEFAULT

// Motor Socket #2
#define X2_TRINAMIC_DRIVER       X_TRINAMIC_DRIVER
#define X2_DIRECTION_PIN         I2SO(4)
#define X2_STEP_PIN              I2SO(5)
#define X2_DISABLE_PIN           I2SO(7)
#define X2_CS_PIN                I2SO(6)
#define X2_RSENSE                X_RSENSE

// Motor Socket #3
#define Y_TRINAMIC_DRIVER       X_TRINAMIC_DRIVER
#define Y_DISABLE_PIN           I2SO(8)
#define Y_DIRECTION_PIN         I2SO(9)
#define Y_STEP_PIN              I2SO(10)
#define Y_CS_PIN                I2SO(11)
#define Y_RSENSE                X_RSENSE

// Motor Socket #4
#define Y2_TRINAMIC_DRIVER       X_TRINAMIC_DRIVER
#define Y2_DIRECTION_PIN         I2SO(12)
#define Y2_STEP_PIN              I2SO(13)
#define Y2_DISABLE_PIN           I2SO(15)
#define Y2_CS_PIN                I2SO(14)
#define Y2_RSENSE                X_RSENSE

// Motor Socket #5
#define Z_TRINAMIC_DRIVER       X_TRINAMIC_DRIVER
#define Z_DISABLE_PIN           I2SO(16)
#define Z_DIRECTION_PIN         I2SO(17)
#define Z_STEP_PIN              I2SO(18)
#define Z_CS_PIN                I2SO(19)
#define Z_RSENSE                X_RSENSE

// Motor Socket #6


/*
    Socket I/O reference
    Pin Mapping
    https://github.com/bdring/6-Pack_CNC_Controller/wiki/Socket-Pin-Number-Mapping
    The list of modules is here...
    https://github.com/bdring/6-Pack_CNC_Controller/wiki/CNC-I-O-Module-List
    Click on each module to get example for using the modules in the sockets

*/

// 4x Switch input module on CNC I/O module Socket #1
#define X_LIMIT_PIN             GPIO_NUM_33
#define X2_LIMIT_PIN            GPIO_NUM_32
#define Y_LIMIT_PIN             GPIO_NUM_35
#define Y2_LIMIT_PIN            GPIO_NUM_34 // second x limit switch

// 4x Switch Input module  in socket #2
// // https://github.com/bdring/6-Pack_CNC_Controller/wiki/4x-Switch-Input-module
#define Z_LIMIT_PIN            GPIO_NUM_2
#define PROBE_PIN               GPIO_NUM_25
//#define TBD                     GPIO_NUM_39
//#define TBD                     GPIO_NUM_36


// Example 5V output CNC module in socket #3
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/4x-5V-Buffered-Output-Module
#define SPINDLE_TYPE            SpindleType::RELAY
#define LASER_OUTPUT_PIN        GPIO_NUM_26  // 1st channel
#define LASER_ENABLE_PIN        GPIO_NUM_4   // 2nd channel
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_16  // 3rd channel
#define COOLANT_MIST_PIN        GPIO_NUM_27  // 4th channel

// https://github.com/bdring/6-Pack_CNC_Controller/wiki/Relay-Module
// Relay module as Mist on CNC I/O Module socket #5
#define COOLANT_FLOOD_PIN      I2SO(24) // Relay for Mist on module socket #5

// === Default settings
#define DEFAULT_STEP_PULSE_MICROSECONDS I2S_OUT_USEC_PER_PULSE

#define DEFAULT_INVERT_LIMIT_PINS       0  // Sets the default for N.O. switches
#define DEFAULT_LASER_MODE 1 