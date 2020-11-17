#pragma once
// clang-format off

/*
    6_pack_stepstick_XXY_ 1SWXXY_3_5VLaser_4RC.h

    Covers all V1 versions V1p0, V1p1, etc

    Part of Grbl_ESP32
    Pin assignments for the ESP32 I2S 6-axis board
    
    2020-11-11 B. Dring for Steve E.

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
#define MACHINE_NAME            "6 Pack StepStick XXY SWXXY 5V RC"

#define N_AXIS 3  // 3-6 permitted

// === Special Features

// I2S (steppers & other output-only pins)
#define USE_I2S_OUT
#define USE_I2S_STEPS
//#define DEFAULT_STEPPER ST_I2S_STATIC
// === Default settings
#define DEFAULT_STEP_PULSE_MICROSECONDS I2S_OUT_USEC_PER_PULSE

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
#define X2_DIRECTION_PIN         I2SO(4)
#define X2_STEP_PIN              I2SO(5)
#define X2_STEPPER_MS3           I2SO(6)
#define X2_DISABLE_PIN           I2SO(7)

// Motor Socket #3
#define Y_DISABLE_PIN           I2SO(8)
#define Y_DIRECTION_PIN         I2SO(9)
#define Y_STEP_PIN              I2SO(10)
#define Y_STEPPER_MS3           I2SO(11) 

/*
    Socket I/O reference
    The list of modules is here...
    https://github.com/bdring/6-Pack_CNC_Controller/wiki/CNC-I-O-Module-List
    Click on each module to get example for using the modules in the sockets

*/


// 4x Input Module in Socket #1
// https://github.com/bdring/6C=-Pack_CNC_Controller/wiki/4x-Switch-Input-module
#define X_LIMIT_PIN                 GPIO_NUM_33
#define X2_LIMIT_PIN                GPIO_NUM_32
#define Y_LIMIT_PIN                 GPIO_NUM_35

#define DEFAULT_INVERT_LIMIT_PINS       0  // Sets the default for N.O. switches

// Example 5V output CNC module in socket #3
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/4x-5V-Buffered-Output-Module
#define SPINDLE_TYPE            SpindleType::LASER
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_26  // 1st channel
#define DEFAULT_LASER_MODE      1

// RC Servo Module on Socket #4
// https://github.com/bdring/6-Pack_CNC_Controller/wiki/RC-Servo-BESC-CNC-I-O-Module
#define USER_ANALOG_PIN_0             GPIO_NUM_13

// ================= Setting Defaults ==========================
#define DEFAULT_X_STEPS_PER_MM      800
#define DEFAULT_Y_STEPS_PER_MM      800
#define DEFAULT_Z_STEPS_PER_MM      800
