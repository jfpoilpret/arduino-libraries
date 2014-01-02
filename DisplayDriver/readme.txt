DisplayDriver
=============

This Arduino library manages a home-made board to display values onto a LED 7-segments with 4 digits. That board uses the IC MAX-7219 to multiplex LED current drive; this circuit uses a serial interface that requires only 3 Arduino pins.

This library depends itself on another Arduino library -LedControl- which can be found at http://playground.arduino.cc/uploads/Main/LedControl.zip and must be installed on your Arduino IDE setup first. It must also be explicitly included in your sketches (this is due to an Arduino IDE limitation, check https://code.google.com/p/arduino/issues/detail?id=236 for more details:

#include <LedControl.h>
#include <DisplayDriver.h>

The display driver board documentation (circuit and stripboard) can be found here:
https://github.com/jfpoilpret/arduino-libraries/docs
