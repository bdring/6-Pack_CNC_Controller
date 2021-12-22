#pragma once
// clang-format off

/*
    6_pack_trinamic_5160_XYYZZA_input1_relay3_V1.h

    2021=-10-22 B. Dring for Jim Flory

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
#define MACHINE_NAME            "6 Pack 5160 XYYZZA PWM"

#ifdef N_AXIS
        #undef N_AXIS
#endif
#define N_AXIS 4

// === Special Features

// I2S (steppers & other output-only pins)
#define USE_I2S_OUT
#define USE_I2S_STEPS
//#define DEFAULT_STEPPER ST_I2S_STATIC

#define I2S_OUT_BCK      GPIO_NUM_22
#define I2S_OUT_WS       GPIO_NUM_17
#define I2S_OUT_DATA     GPIO_NUM_21

// === motors

#define TRINAMIC_RUN_MODE           Motors::TrinamicMode::StealthChop
#define TRINAMIC_HOMING_MODE        Motors::TrinamicMode::StealthChop

#define X_TRINAMIC_DRIVER       5160
#define X_DISABLE_PIN           I2SO(0)
#define X_DIRECTION_PIN         I2SO(1)
#define X_STEP_PIN              I2SO(2)
#define X_CS_PIN                I2SO(3)
#define X_RSENSE                TMC5160_RSENSE_DEFAULT

#define Y_TRINAMIC_DRIVER       5160
#define Y_DIRECTION_PIN         I2SO(4)
#define Y_STEP_PIN              I2SO(5)
#define Y_DISABLE_PIN           I2SO(7)
#define Y_CS_PIN                I2SO(6)
#define Y_RSENSE                TMC5160_RSENSE_DEFAULT

#define Y2_TRINAMIC_DRIVER       5160
#define Y2_DISABLE_PIN           I2SO(8)
#define Y2_DIRECTION_PIN         I2SO(9)
#define Y2_STEP_PIN              I2SO(10)
#define Y2_CS_PIN                I2SO(11)
#define Y2_RSENSE                TMC5160_RSENSE_DEFAULT

#define Z_TRINAMIC_DRIVER       5160
#define Z_DIRECTION_PIN         I2SO(12)
#define Z_STEP_PIN              I2SO(13)
#define Z_DISABLE_PIN           I2SO(15)
#define Z_CS_PIN                I2SO(14)
#define Z_RSENSE                TMC5160_RSENSE_DEFAULT

#define Z2_TRINAMIC_DRIVER       5160
#define Z2_DISABLE_PIN           I2SO(16)
#define Z2_DIRECTION_PIN         I2SO(17)
#define Z2_STEP_PIN              I2SO(18)
#define Z2_CS_PIN                I2SO(19)
#define Z2_RSENSE                TMC5160_RSENSE_DEFAULT

// No 6th motor
// Motor Socket #6 (Change motor number to letter to use motor)
#define A_TRINAMIC_DRIVER       5160
#define A_DIRECTION_PIN         I2SO(20)
#define A_STEP_PIN              I2SO(21)
#define A_CS_PIN                I2SO(22)
#define A_DISABLE_PIN           I2SO(23)
#define A_RSENSE                TMC5160_RSENSE_DEFAULT

// === CNC I/O Modules

// Socket #1
#define X_LIMIT_PIN             GPIO_NUM_33 // Wire both x switches N.O. here
#define Y_LIMIT_PIN             GPIO_NUM_32 // Wire both y switches N.O. here
#define Y2_LIMIT_PIN            GPIO_NUM_35
#define Z_LIMIT_PIN             GPIO_NUM_34

#define Z2_LIMIT_PIN            GPIO_NUM_2
#define PROBE_PIN               GPIO_NUM_25

// Relay in Socket #3
#define SPINDLE_TYPE            SpindleType::LASER
#define LASER_OUTPUT_PIN        GPIO_NUM_26
#define LASER_ENABLE_PIN        GPIO_NUM_4   // 2nd channel


// === Default settings
#define DEFAULT_STEP_PULSE_MICROSECONDS I2S_OUT_USEC_PER_PULSE
#define DEFAULT_INVERT_LIMIT_PINS       1  // for N.O. switches
#define DEFAULT_INVERT_PROBE_PIN        1  // for N.C. switches
