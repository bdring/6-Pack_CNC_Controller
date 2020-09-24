#pragma once
// clang-format off

/*
    6_pack_stepstick_v1.h

    Covers all V1 versions V1p0, V1p1, etc

    Part of Grbl_ESP32
    Pin assignments for the ESP32 I2S 6-axis board
    220    - Bart Dring for Haakon Marek Walseng
     
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
#define MACHINE_NAME            "6 Pack Std XYYZ SW1 XYYZ 5v_Spin_Mist"

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


#define X_STEPPER_MS3           I2SO(3)   // Socket #1
#define Y_STEPPER_MS3           I2SO(6)   // Socket #2
#define Y2_STEPPER_MS3          I2SO(11)  // Socket #3
#define Z_STEPPER_MS3           I2SO(14)  // Socket #4

#define STEPPER_RESET           GPIO_NUM_19

// socket 1
#define X_DISABLE_PIN           I2SO(0)
#define X_DIRECTION_PIN         I2SO(1)
#define X_STEP_PIN              I2SO(2)

// socket 2
#define Y_DIRECTION_PIN         I2SO(4)
#define Y_STEP_PIN              I2SO(5)
#define Y_DISABLE_PIN           I2SO(7)

// socket 3
#define Y2_DISABLE_PIN           I2SO(8)
#define Y2_DIRECTION_PIN         I2SO(9)
#define Y2_STEP_PIN              I2SO(10)

// socket 4
#define Z_DIRECTION_PIN         I2SO(12)
#define Z_STEP_PIN              I2SO(13)
#define Z_DISABLE_PIN           I2SO(15)


/*
    Socket I/O reference
    The list of modules is here...
    https://github.com/bdring/6-Pack_CNC_Controller/wiki/CNC-I-O-Module-List
    Click on each module to get example for using the modules in the sockets
*/

 
// Socket #1
// #1 GPIO_NUM_33 
// #2 GPIO_NUM_32
// #3 GPIO_NUM_35 (input only)
// #4 GPIO_NUM_34 (input only)


// Socket #2
// #1 GPIO_NUM_2
// #2 GPIO_NUM_25
// #3 GPIO_NUM_39 (input only)
// #4 GPIO_NUM_36 (input only)

// Socket #3
// #1 GPIO_NUM_26
// #2 GPIO_NUM_4
// #3 GPIO_NUM_16
// #4 GPIO_NUM_27


// Socket #4
// #1 GPIO_NUM_14
// #2 GPIO_NUM_13
// #3 GPIO_NUM_15
// #4 GPIO_NUM_12


// Socket #5
// #1 GPIO_NUM_24  (output only)
// #2 GPIO_NUM_25  (output only)
// #3 GPIO_NUM_26  (output only)
// #4 GPIO_NUM_27  (output only)
 
// module socket #1 
#define X_LIMIT_PIN             GPIO_NUM_33
#define Y_LIMIT_PIN             GPIO_NUM_32
#define Y2_LIMIT_PIN             GPIO_NUM_35
#define Z_LIMIT_PIN             GPIO_NUM_34

#define DEFAULT_INVERT_LIMIT_PINS       0
#define DEFAULT_HOMING_SQUARED_AXES bit(Y_AXIS)


// 5V output CNC module in socket #3
#define SPINDLE_TYPE            SpindleType::PWM
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_26
#define SPINDLE_ENABLE_PIN      GPIO_NUM_4
#define SPINDLE_DIR_PIN         GPIO_NUM_16
#define COOLANT_MIST_PIN        GPIO_NUM_27

// === Default settings
#define DEFAULT_STEP_PULSE_MICROSECONDS I2S_OUT_USEC_PER_PULSE
