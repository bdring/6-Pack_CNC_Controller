# 6-Pack Grbl_ESP32 CNC Controller

<img src="http://www.buildlog.net/blog/wp-content/uploads/2020/07/20200711_120633.jpg" width="600">

<img src="http://www.buildlog.net/blog/wp-content/uploads/2020/07/20200711_120737.jpg" width="600">

### Overview

This is a fully modular CNC controller that runs Grbl_ESP32 firmware.

### Current Source Files.

The latest versions are [now on OSHLabs](https://oshwlab.com/bdring?tab=project&page=1) with the free version of EasyEDA. I did this to make it more accessible and easier to order.



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


[<img src="https://github.com/bdring/TMC2209_4x_DK/blob/main/images/tindie-logo.png" width="160">](https://www.tindie.com/products/33366583/6-pack-universal-cnc-controller/)

