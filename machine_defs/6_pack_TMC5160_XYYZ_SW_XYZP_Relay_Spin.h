#pragma once
// clang-format off

/*
    6_pack_TMC5160_XYYZ_SW_XYZP_Relay_Spin.h
    
    Pin assignments for the ESP32 SPI 6-axis board
   
    2020-11-24 B. Dring for Richard R.

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
#define MACHINE_NAME            "6 Pack Controller V1 (Trinamic Stallguard)"

#define N_AXIS 3

// I2S (steppers & other output-only pins)
#define USE_I2S_OUT
#define USE_I2S_STEPS
//#define DEFAULT_STEPPER ST_I2S_STATIC

#define I2S_OUT_BCK      GPIO_NUM_22
#define I2S_OUT_WS       GPIO_NUM_17
#define I2S_OUT_DATA     GPIO_NUM_21

#define TRINAMIC_RUN_MODE           Motors::TrinamicMode::CoolStep
#define TRINAMIC_HOMING_MODE        Motors::TrinamicMode::StallGuard

// Motor Socket #1
#define X_TRINAMIC_DRIVER       5160
#define X_DISABLE_PIN           I2SO(0)
#define X_DIRECTION_PIN         I2SO(1)
#define X_STEP_PIN              I2SO(2)
#define X_CS_PIN                I2SO(3)
#define X_RSENSE                TMC5160_RSENSE_DEFAULT

// Motor Socket #2
#define Y_TRINAMIC_DRIVER       X_TRINAMIC_DRIVER
#define Y_DIRECTION_PIN         I2SO(4)
#define Y_STEP_PIN              I2SO(5)
#define Y_DISABLE_PIN           I2SO(7)
#define Y_CS_PIN                I2SO(6)
#define Y_RSENSE                X_RSENSE

// Motor Socket #3
#define Y2_TRINAMIC_DRIVER       X_TRINAMIC_DRIVER
#define Y2_DISABLE_PIN           I2SO(8)
#define Y2_DIRECTION_PIN         I2SO(9)
#define Y2_STEP_PIN              I2SO(10)
#define Y2_CS_PIN                I2SO(11)
#define Y2_RSENSE                X_RSENSE

// Motor Socket #4
#define Z_TRINAMIC_DRIVER       X_TRINAMIC_DRIVER
#define Z_DIRECTION_PIN         I2SO(12)
#define Z_STEP_PIN              I2SO(13)
#define Z_DISABLE_PIN           I2SO(15)
#define Z_CS_PIN                I2SO(14)
#define Z_RSENSE                X_RSENSE


/*
    Socket I/O reference
    The list of modules is here...
    https://github.com/bdring/6-Pack_CNC_Controller/wiki/CNC-I-O-Module-List

*/

// Socket #1
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/4x-Switch-Input-module
#define X_LIMIT_PIN             GPIO_NUM_33 
#define Y_LIMIT_PIN             GPIO_NUM_32 
#define Z_LIMIT_PIN             GPIO_NUM_35 
#define PROBE_PIN               GPIO_NUM_34 

#define DEFAULT_INVERT_LIMIT_PINS       0  // for N.O. switches
#define DEFAULT_INVERT_PROBE_PIN        0  // for N.C. switches

// Socket #2
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/Relay-Module
#define SPINDLE_TYPE            SpindleType::RELAY // default, check actual $Spindle/Type Setting
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_2 // relay as spindle on module socket #2


// Example 5V output CNC module in socket #3
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/4x-5V-Buffered-Output-Module
// Not used yet

// RS485 Modbus In socket #4
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/RS485-Modbus-Module
// #define SPINDLE_TYPE            SpindleType::HUANYANG // default, check actual $Spindle/Type Setting
// #define VFD_RS485_TXD_PIN        GPIO_NUM_14
// #define VFD_RS485_RTS_PIN        GPIO_NUM_13
// #define VFD_RS485_RXD_PIN        GPIO_NUM_15

// === Default settings
#define DEFAULT_STEP_PULSE_MICROSECONDS I2S_OUT_USEC_PER_PULSE
