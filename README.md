# 6-Pack Grbl_ESP32 CNC Controller

![image](https://github.com/bdring/6-Pack_CNC_Controller/blob/master/images/20200711_120633.jpg)

![image](https://github.com/bdring/6-Pack_CNC_Controller/blob/master/images/20200711_120737.jpg)

### Overview

This is a fully modular CNC controller that runs Grbl_ESP32 firmware.

### Features

- ESP32 Sockets to fit both narrow and wide 2 x 19 pin types.
- (6) Stepper Driver Outputs. These can be used for 6 axes (XYZABC) or any (2) can be ganged to allow dual motors on a single axis. These ganged motors can be controlled independently for axis squaring. It supports these types of drivers. Each driver has an independent enable/disable pin.
  - Standard Pololu/StepStick style driver modules.
  - Trinamic SPI type drivers. These are the ultra quiet types with sensorless endstop capability.
  - External Driver with 5V opto isolators.
(5) CNC I/O Modules. These interface with your machine. They include, but are not limited to, siwtch inputs, spindle control and accessory control. Currently there are (5) modules available.
  - High current AC/DC relay
  - 4x 5V Buffered output for lasers, PWM, spindle direction, spindle enable, ect.
  - RS485 Modbus Spindles
  - 0-10V Output Spindles
  - 4x Switch input with Optocouplers, filtering and Schmitt triggers. 
- SD Card Socket
- JTAG Programming/Debugging connector (or access to addition I/O pins
