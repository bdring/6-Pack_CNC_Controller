## 6 Pack CNC Controller PCB Change Log

### V1.8

-  Changed the power supply to the latest chip I have been using that is usually available on JLC. TI p/n TPS54360 LCSC P/N C44377
- Added an expansion port on the upper right corner. This has no immediate use, but I think it could prove useful in the future.
- Changed stepper motor terminal block type. The version 1.5 one can be difficult to get and has caused delays.
- Added a pull down resistor on the I2S clock signal. This mitigates startup pulses on some I2SO pins.

### V1.5

-  Change 5V power supply from MSP MP1584EN to Diodes Inc AP64350SP-13 
  - MP1584 is now obsolete
  - AP64350SP-13 increases the operating voltage from 28V to 40V
- Update Silkscreen
  - Removed references to functions on module pins
  - Added reference where Stallguard pins are hardwired to module pins.
  - Move JTAG closed to ESP32
  - Removed any axis letter reference and changed them to 1-6 to avoid confusion



### Future Changes

- Remove JTAG and make a module for it.
- Change LED to Lite On LTST-C170KGKT (too bright and make consistent with modules) 

