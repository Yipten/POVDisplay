# POVDisplay

## What is it? 

This is code written for a persistence of vision display powered by an Arduino Nano. The Arduino drives five LEDs which are rapidly updated to cause text to be displayed. 

## Use

The string of characters in `text[]` will be displayed. 

Supported characters include capital letters, numbers, spaces, and these special characters: `!"#$%&'{}*+,-./:;<=>?@` (ASCII values 32 through 90). 

## How does it work? 

As it may be guessed, this program is heavily realiant on precise timing. The amount of time each revolution takes is measured using the built-in `micros()` function and a hall effect sensor. The sensor is mounted on the rotating platform and is triggered each revolution by a stationary magnet. Every time the sensor is triggered, the variables `timeStamp` and `prevTimeStamp` are used to calculate the value of `microsPerRev` (microseconds per revolution) for the previous revolution. This, along with the value of `spacing`, is used to calculate the amount of time to delay between drawing each "column" of LEDs. 

All of the display data is stored in `DisplayData::characters` in 5-by-5 grids. The nested for loops iterate through this based on the characters in `text[]`. 
