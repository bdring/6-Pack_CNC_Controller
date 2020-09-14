#pragma once
// clang-format off

/*
    6_pack_std_1_SW_3_Relay_Spdl.h

    StepStick Drivers
    Switch on #1 with XYAB Limits
    Relay on #3 as Spindle

    Part of Grbl_ESP32
    Pin assignments for the ESP32 6 Pack
   
    2020-09-13 B. Drine for Alex F.

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
#define MACHINE_NAME            "6 Pack Std XYAB 1_SW 3_Relay" 

#define N_AXIS 5 // Z not used

#ifdef ENABLE_SD_CARD
    #undef ENABLE_SD_CARD
#endif

// homing Cycles
#ifdef HOMING_CYCLE_0
    #undef HOMING_CYCLE_0
#endif
#define HOMING_CYCLE_0 bit(X_AXIS)

#ifdef HOMING_CYCLE_1
    #undef HOMING_CYCLE_1
#endif
#define HOMING_CYCLE_1 bit(Y_AXIS)

#ifdef HOMING_CYCLE_2
    #undef HOMING_CYCLE_2
#endif
#define HOMING_CYCLE_2 bit(A_AXIS)

#ifdef HOMING_CYCLE_3
    #undef HOMING_CYCLE_3
#endif
#define HOMING_CYCLE_3 bit(B_AXIS)

// === Special Features

// I2S (steppers & other output-only pins)
#define USE_I2S_OUT
#define USE_I2S_STEPS
//#define DEFAULT_STEPPER ST_I2S_STATIC

#define USE_STEPSTICK   // makes sure MS1,2,3 !reset and !sleep are set

#define I2S_OUT_BCK      GPIO_NUM_22
#define I2S_OUT_WS       GPIO_NUM_17
#define I2S_OUT_DATA     GPIO_NUM_21
// === Default settings
#define DEFAULT_STEP_PULSE_MICROSECONDS I2S_OUT_USEC_PER_PULSE


#define X_STEPPER_MS3           I2SO(3) 
#define Y_STEPPER_MS3           I2SO(6) 
#define A_STEPPER_MS3           I2SO(11)
#define B_STEPPER_MS3           I2SO(14) 

#define STEPPER_RESET           GPIO_NUM_19

// Socket 1
#define X_DISABLE_PIN           I2SO(0)
#define X_DIRECTION_PIN         I2SO(1)
#define X_STEP_PIN              I2SO(2)

// motor socket #2
#define Y_DIRECTION_PIN         I2SO(4)
#define Y_STEP_PIN              I2SO(5)
#define Y_DISABLE_PIN           I2SO(7)

// motor socket #3
#define A_DISABLE_PIN           I2SO(8)
#define A_DIRECTION_PIN         I2SO(9)
#define A_STEP_PIN              I2SO(10)

// motor socket #4
#define B_DIRECTION_PIN         I2SO(12)
#define B_STEP_PIN              I2SO(13)
#define B_DISABLE_PIN           I2SO(15)


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
// #1 I2SO(24)  (output only)
// #2 I2SO(25)  (output only)
// #3 I2SO(26)  (output only)
// #4 I2SO(27)  (output only)

// socket #1
#define X_LIMIT_PIN             GPIO_NUM_33
#define Y_LIMIT_PIN             GPIO_NUM_32
#define A_LIMIT_PIN             GPIO_NUM_35
#define B_LIMIT_PIN             GPIO_NUM_34

#define DEFAULT_INVERT_LIMIT_PINS       0
#define DEFAULT_HOMING_DIR_MASK         11011


// Socket #2
//Empty

// Socket 3 Relay
#define SPINDLE_OUTPUT_PIN      GPIO_NUM_26
#define SPINDLE_TYPE            SPINDLE_TYPE_RELAY




