/*
 * UltraSonicSensor - SimpleDistanceMeter
 *
 * Sample sketch that measures distances calculated by an ultrasound sensor
 * (HC-SR04) and prints them to the serial output.
 *
 * In order to prepare the Arduino circuit, you need to:
 * 1. Connect Arduino pins 8&9 to the TRIGGER & ECHO pins of the HC-SR04
 * 2. Connect the HC-SR04 GND and V+ pins to those of Arduino
 * 3. Plug the Arduino to a power supply
 *
 * IMPORTANT: the HC-SR04 is very sensitive to electrical noise, which will depend
 * on other devices ou plug to your Arduino; such sensitivity can lead to weird
 * measurements. The best way to deal with electrical noise is to add a decoupling
 * capacitor (electrolytic capacity ~100uF) between V+ and Ground as near the sensor
 * as possible.
 * Library and board created in December 2013
 * by Jean-Francois Poilpret
 * 
 * This example code is in the public domain.
 */

// include the library code:
#include "UltraSonicSensor.h"

// Arduino pins connected to the HC-SR04
#define ECHO 9
#define TRIGGER 8

// Wait time in milliseconds between 2 distance reads
// This value should be at least ~40ms to avoid interferences between two consecutive reads
#define LOOP_DELAY_MS 200

// Controller for the HC-SR04 (must be declared global)
UltraSonicSensor sensor(TRIGGER, ECHO);

// The setup function is called once at startup of the sketch
void setup()
{
    // setup serial communication
    Serial.begin(57600);
}

// The loop function is called in an endless loop
void loop()
{
    // Read and calculate distance from sensor
    unsigned int dist = sensor.getDistanceInCm();
    // Sends it to serial device
    Serial.println(dist);
    // Wait for a few hundred milliseconds
    delay(LOOP_DELAY_MS);
}

