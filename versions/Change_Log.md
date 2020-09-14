## 6 Pack CNC Controller PCB Change Log

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

