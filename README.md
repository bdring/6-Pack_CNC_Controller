# 6-Pack Grbl_ESP32 CNC Controller

![image](https://user-images.githubusercontent.com/189677/85073217-0372b200-b180-11ea-99b6-4b685298abdd.png)

### Overview

This is an experimental controller primarily deigned to test the use of I2C Shift Registers to add additional digital outputs.

**Note:** This is not recommended for use in the current revision. Some changes are planned that will vastly improve the functionality

### Features

- ESP32 Socket to fit both narrow and wide 2 x 19 pin types.
- 6 Stepper Driver Outputs. These can be used for 6 axes (XYZABC) or any two can be ganged to allow dual motors on a single axis. These ganged motors can be controlled independently for axis squaring. It supports these types of drivers. Each driver has an independent enable/disable pin.
  - Standard StepStick style driver modules (see limitations)
  - Trinamic SPI type drivers. These are the ultra quiet types with sensorless endstop capability.
  - External Driver with 5V opto isolators.
- 2 Spindle modules. This is a new concept being tested that allows great flexibility. One could be used for a spindle and the other could be used to control a vacuum, coolant, etc.  Each socket has access to 4 I/O pins. The following modules are planned.
  - High current AC/DC relay
  - 5V Laser PWM
  - RS485 Modbus
  - 0-10V output
  - High current DC MOSFET.
- SD Card Socket
- JTAG Programming/Debugging connector (or access to addition I/O pins)
- Limit switch connector
- Probe connector
- 2 fan connectors 5V or motor voltage
- 8 spare output pins.
