#include "DisplayData.h"

// text to be displayed
const char text[] = "HELLO";
// degrees between each column of lights
const float spacing = 1.5;

// timestamp for determining microseconds per revolution
unsigned long timeStamp;
// microseconds per revolution
unsigned long microsPerRev;

void setup() {
  timeStamp = 0;
  microsPerRev = 0;
  // 5 LEDs
  for (byte i = 2; i <= 6; i++)
    pinMode(i, OUTPUT);
  // hall effect sensor
  pinMode(8, INPUT);
}

void loop() {
  for (byte ch = 0; ch < sizeof(text) / sizeof(char) - 1; ch++) {
    byte z = text[ch] - 32;
    for (byte x = 0; x < 5; x++) {
      for (byte y = 0; y < 5; y++)
        // turns LED on or off
        digitalWrite(y + 2, DisplayData::characters[z][y][x]);
      delayMicroseconds(spacing / 360.0 * microsPerRev);  //delay between columns
    }
    // off between letters
    allOff();
    delayMicroseconds(spacing / 360.0 * microsPerRev);
  }
  // off between end and start
  allOff();
  // wait for revolution to finish
  while (digitalRead(8));
  // record the previous timestamp
  unsigned long prevTimeStamp = timeStamp;
  // get current time in microseconds
  timeStamp = micros();
  // get elapsed microseconds in last revolution
  microsPerRev = timeStamp - prevTimeStamp;
}

// turns all LEDs off
void allOff() {
  for (byte i = 2; i <= 6; i++)
    digitalWrite(i, LOW);
}
