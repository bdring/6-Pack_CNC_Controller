#pragma once
// clang-format off

/*
    6_pack_V1_MPCNC_stepstick_SW1_Sw2_Rly3_5v4.h

    Covers all V1 versions V1p0, V1p1, etc

    Part of Grbl_ESP32
    Pin assignments for the ESP32 I2S 6-axis board
    
    2020-11-12 B. Dring for Clint N.

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
#define MACHINE_NAME            "6 Pack MPCNC XXYYZ StepStick SW_1 SW_2 Rly_3 5V_4"

#ifdef N_AXIS
        #undef N_AXIS
#endif
#define N_AXIS 3

#ifdef ENABLE_SD_CARD
    #undef ENABLE_SD_CARD
#endif

// === Special Features

// I2S (steppers & other output-only pins)
#define USE_I2S_OUT
#define USE_I2S_STEPS
//#define DEFAULT_STEPPER ST_I2S_STATIC

#define USE_STEPSTICK   // makes sure MS1,2,3 !reset and !sleep are set

#define I2S_OUT_BCK      GPIO_NUM_22
#define I2S_OUT_WS       GPIO_NUM_17
#define I2S_OUT_DATA     GPIO_NUM_21


#define X_STEPPER_MS3           I2SO(3)   // Motor 1
#define X2_STEPPER_MS3          I2SO(6)   // Motor 2
#define Y_STEPPER_MS3           I2SO(11)  // Motor 3
#define Y2_STEPPER_MS3          I2SO(14)  // Motor 4 
#define Z_STEPPER_MS3           I2SO(19)  // Motor 5

#define STEPPER_RESET           GPIO_NUM_19

// motor #1
#define X_DISABLE_PIN           I2SO(0)
#define X_DIRECTION_PIN         I2SO(1)
#define X_STEP_PIN              I2SO(2)

// motor #2
#define X2_DIRECTION_PIN         I2SO(4)
#define X2_STEP_PIN              I2SO(5)
#define X2_DISABLE_PIN           I2SO(7)

#define DEFAULT_HOMING_SQUARED_AXES (bit(X_AXIS) | bit(Y_AXIS))

// motor #3
#define Y_DISABLE_PIN           I2SO(8)
#define Y_DIRECTION_PIN         I2SO(9)
#define Y_STEP_PIN              I2SO(10)

// motor #4
#define Y2_DIRECTION_PIN         I2SO(12)
#define Y2_STEP_PIN              I2SO(13)
#define Y2_DISABLE_PIN           I2SO(15)

// motor #5
#define Z_DISABLE_PIN           I2SO(16)
#define Z_DIRECTION_PIN         I2SO(17)
#define Z_STEP_PIN              I2SO(18)

// motor #6
// unused

/*
    Socket I/O reference
    The list of modules is here...
    https://github.com/bdring/6-Pack_CNC_Controller/wiki/CNC-I-O-Module-List
    Click on each module to get example for using the modules in the sockets

*/    

// 4x Switch in module socket #1
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/4x-Switch-Input-module
#define X_LIMIT_PIN            GPIO_NUM_33 // Sw #1
#define Y_LIMIT_PIN            GPIO_NUM_32 // sw #2
#define Z_LIMIT_PIN            GPIO_NUM_35 // Sw #3
#define PROBE_PIN              GPIO_NUM_34 // sw #4

#define DEFAULT_INVERT_LIMIT_PINS       0
#define DEFAULT_INVERT_PROBE_PIN        0

// Relay module as spindle on CNC I/O Module socket #2
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/Relay-Module
#define SPINDLE_ENABLE_PIN      GPIO_NUM_2 //

// Example 5V output CNC module in socket #3
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/4x-5V-Buffered-Output-Module
#define SPINDLE_TYPE            SpindleType::PWM
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_26  // 1st channel
#define COOLANT_MIST_PIN        GPIO_NUM_4   // 2nd channel
#define COOLANT_FLOOD_PIN       GPIO_NUM_16  // 3rd channel

#define SPINDLE_TYPE            SpindleType::PWM // default, check actual $Spindle/Type Setting


// === Default settings
#define DEFAULT_STEP_PULSE_MICROSECONDS I2S_OUT_USEC_PER_PULSE
