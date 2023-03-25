# Arduino Thermometer

A semi-complex arduino thermometer that uses an LCD to display the temperature (in Celsius) and humidity.

## "Smart" Features

Since the display is quite bright if you want to sleep next to it there are two ways to activate the display

### Light Level Detector

Using a photocell, the light levels of the room are taken into account. If he light levels are high enough then the display activates

### Sound Level Detector

Using a sound sensor, the display can activate when it detects peaks in the sound (like a clap). This can be used during the night (when the light levels are not sufficient enough).

## Considered Future Additions

Having a toggle button on the arduino for the whole screen would be very useful. This might be added in a patch.
