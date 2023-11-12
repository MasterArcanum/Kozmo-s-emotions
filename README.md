# OLED Eye Animation for Robotics
This Arduino sketch is designed to animate eyes on an OLED display, typically used in robotics to give a lifelike appearance to robots. The code cycles through a series of predefined bitmap images representing different eye expressions, creating an animated effect.

<h2>How to use</h2>
Upload the .ino file to your Arduino board with an attached SSD1306 OLED display. Ensure the display is correctly wired to the Arduino, and the sketch should start cycling through the eye animations automatically.

<h2>Hardware Requirements</h2>
Arduino compatible board
OLED display compatible with SSD1306 driver
Connecting wires
Required Libraries
Adafruit_GFX.h
Adafruit_SSD1306.h
These libraries can be installed through the Arduino IDE Library Manager.

<h2>Example Usage</h2>
Once the sketch is uploaded, the OLED display will show a series of eye animations. The animations run in a loop, displaying each set of eyes for one second.

<h2>License</h2>
This project is released under the MIT License.

<h2>Authors and Acknowledgements</h2>
This code was written by <strong>MasterArcanum</strong>. Thanks to Adafruit for providing the necessary libraries for interfacing with the SSD1306 OLED display.


<h2>Connection diagram</h2>


![Scheme](https://github.com/MasterArcanum/Kozmo_emotion/blob/main/scheme.png)



<h2>Example of emotions</h2>


![Scheme](https://github.com/MasterArcanum/Kozmo_emotion/blob/main/emotion.png)


