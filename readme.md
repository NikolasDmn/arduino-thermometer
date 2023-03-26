# Arduino Thermometer

A semi-complex arduino thermometer that uses an LCD to display the temperature (in Celsius) and humidity.

## "Smart" Features

Since the display is quite bright if you want to sleep next to it there are two ways to activate the display

### Dynamic Light Level Detector

Using a photocell, the light levels of the room are taken into account. If the light levels are high enough then the display activates. On boot, the arduino stores the ambient light levels and uses that to determine what is acceptable. If the light levels go down, the LCD will close. If the specific threshold is not ideal, a simple reboot will readjust it.

### Sound Level Detector

Using a sound sensor, the display can activate when it detects peaks in the sound (like a clap). This can be used during the night (when the light levels are not sufficient enough).

## Considered Future Additions

Having a toggle button on the arduino for the whole screen would be very useful. This might be added in a patch.
