/*
  DisplayDriver Library - Counter

 Demonstrates the use of the DisplayDriver DIY board and library.
 This sketch just increments and displays a counter from 0 to 9999
 and restarts from 0.

 Since the library uses LedControl library (to drive MAX7219 circuit), the
 latter library must be copied into the list of arduino libraries; it can be 
 found at http://playground.arduino.cc/uploads/Main/LedControl.zip

 The circuit:
 * DisplayDriver board DIN pin to Arduino digital pin 4
 * DisplayDriver board CLK pin to Arduino digital pin 3
 * DisplayDriver board LOAD pin to Arduino digital pin 2
 * DisplayDriver board V+ and GND pins to +5V and ground respectively
 
 Library and board created in December 2013
 by Jean-Francois Poilpret
 
 This example code is in the public domain.
 
 */

// include the library code:
// Since the library also depends on LedControl.h the latter must be included first
#include <LedControl.h>
#include <DisplayDriver.h>

// Wait time in milliseconds between counter increments
#define LOOP_DELAY_MS 200

// Arduino pins connected to the display driver
#define MUX_DISP_DIN 4
#define MUX_DISP_CLK 3
#define MUX_DISP_LOAD 2

// Instantiates the driver for the display board
DisplayDriver driver(MUX_DISP_DIN, MUX_DISP_CLK, MUX_DISP_LOAD);

void setup()
{
  // Nothing to do here
}

// the main loop just increments a counter and displays it
void loop()
{
  // declare the counter and assign it an initial value
  static unsigned int counter = 0;
  // display the current value to the display board
  driver.displayValue(counter);
  // wait for a few hundred milliseconds
  delay(LOOP_DELAY_MS);
  // increment the counter for the next loop() call
  counter++;
  // reset to 0 if needed (this is necessary as the board only
  // allows values between 0 and 9999)
  if (counter > 9999)
  {
    counter = 0;
  }
}

