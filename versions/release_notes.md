# Version 0.5 Release Notes

### Hardware

- StepStick Drivers - 
  - Set the TMC5160/Default jumper to the default position
  - Set the Vcc jumper to the 3.3V position.
  - The microstepping selection pins on the sockets are shared with the SPI bus pins used for Trinamic drivers. These must be manually driven to the state you want for the microstepping level. The SPI is also shared with the SD card, so currently you cannot use stepstick and SD at the same time. This will be addressed in the next revision. some ideas
    - Jumpers
    - A second SPI from the the ESP32
    - ATTiny microcontroller
- Things to fix
  - Minor: Via under pad of some SRs
