#pragma once
// clang-format off

/*
    6_pack_XYZABC_SwXYZA_SwBSHR_RelaySpin.h

    Covers all V1 versions V1p0, V1p1, etc

    Part of Grbl_ESP32
    Pin assignments for the ESP32 I2S 6-axis board
    
    B. Dring for Adrian A. 2020-12-13

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
#define MACHINE_NAME            "6 Pack XYZABC SwXYZA SwBHSR RElay Spindle"

#define N_AXIS 6

// === Special Features

// I2S (steppers & other output-only pins)
#define USE_I2S_OUT
#define USE_I2S_STEPS
//#define DEFAULT_STEPPER ST_I2S_STATIC

#define USE_STEPSTICK   // makes sure MS1,2,3 !reset and !sleep are set

#define I2S_OUT_BCK             GPIO_NUM_22
#define I2S_OUT_WS              GPIO_NUM_17
#define I2S_OUT_DATA            GPIO_NUM_21


// Motor Socket #1
#define X_DISABLE_PIN           I2SO(0)
#define X_DIRECTION_PIN         I2SO(1)
#define X_STEP_PIN              I2SO(2)
#define X_STEPPER_MS3           I2SO(3)

// Motor Socket #2
#define Y_DIRECTION_PIN         I2SO(4)
#define Y_STEP_PIN              I2SO(5)
#define Y_STEPPER_MS3           I2SO(6)
#define Y_DISABLE_PIN           I2SO(7)

// Motor Socket #3
#define Z_DISABLE_PIN           I2SO(8)
#define Z_DIRECTION_PIN         I2SO(9)
#define Z_STEP_PIN              I2SO(10)
#define Z_STEPPER_MS3           I2SO(11)

// Motor Socket #4
#define A_DIRECTION_PIN         I2SO(12)
#define A_STEP_PIN              I2SO(13)
#define A_STEPPER_MS3           I2SO(14) 
#define A_DISABLE_PIN           I2SO(15)

// Motor Socket #5
#define B_DISABLE_PIN           I2SO(16)
#define B_DIRECTION_PIN         I2SO(17)
#define B_STEP_PIN              I2SO(18)
#define B_STEPPER_MS3           I2SO(19) 

// Motor Socket #5
#define C_DIRECTION_PIN         I2SO(20)
#define C_STEP_PIN              I2SO(21)
#define C_STEPPER_MS3           I2SO(22)
#define C_DISABLE_PIN           I2SO(23)


/*
    Socket I/O reference
    The list of modules is here...
    https://github.com/bdring/6-Pack_CNC_Controller/wiki/CNC-I-O-Module-List
    Click on each module to get example for using the modules in the sockets

*/

// 4x Input Module in Socket #1
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/4x-Switch-Input-module
#define X_LIMIT_PIN             GPIO_NUM_33
#define Y_LIMIT_PIN             GPIO_NUM_32
#define Z_LIMIT_PIN             GPIO_NUM_35
#define A_LIMIT_PIN             GPIO_NUM_34

// 4x Switch Input module  in socket #2
// // https://github.com/bdring/6-Pack_CNC_Controller/wiki/4x-Switch-Input-module
#define B_LIMIT_PIN                 GPIO_NUM_2
#define CONTROL_FEED_HOLD_PIN       GPIO_NUM_25
#define CONTROL_CYCLE_START_PIN     GPIO_NUM_39
#define CONTROL_RESET_PIN           GPIO_NUM_36

// Relay module as spindle on CNC I/O Module socket #3
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/Relay-Module
#define SPINDLE_TYPE            SpindleType::RELAY // default, check actual $Spindle/Type Setting
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_26 // relay as spindle on module socket #3

// === Default settings
#define DEFAULT_STEP_PULSE_MICROSECONDS I2S_OUT_USEC_PER_PULSE

#define DEFAULT_INVERT_LIMIT_PINS       0  // Sets the default for N.O. switches

// Unflip the control pins
#ifdef INVERT_CONTROL_PIN_MASK
#    undef INVERT_CONTROL_PIN_MASK
#endif
#define INVERT_CONTROL_PIN_MASK B0000 // Cycle Start | Feed Hold | Reset | Safety Door
