# Bomax
## _Alexa-Integrated button_

Bomax is a device that thanks to a NodeMCU connect itself to the wifi and thanks to webhooks and IFTTT communicate with alexa.


## Tech

Lightrom uses a number of open source library to work properly:
- [Arduino] - Arduino core for ESP8266 WiFi chip
- [ESP8266WiFi] - NodeMCU WiFi connection
- [AnotherIFTTTWebhook] - Send webhooks to IFTTT using Arduino


## Installation and configuration
_Since I am very busy in this period I dedicate little time to this part, I'll write it in a better way when I have more time, meanwhile if you have problems you can still contact me on telegram._
To install bolight you need to:
- download and install all the libraries used (you can find them in the tech paragraph)
- make all the required connections (the schema can be found in the Schematic directory)
- open the .ino file, enter your data under the line "// Variable you need to modify" and upload it to your NodeMCU

Now in the serial monitor you can see "Button pressed" when button is pressed and if the webhook is correctly setted you can see your light turn on.
To set the webhook I used IFTTT and [this] site.

If you want also to have the 3D printed case you can find all the need files in the 3D file directory.

## Known problems
##### Button does not fit
There could be problems as the 3D printed button does not fit perfectly horizontal as there is a large slack (1mm per side) between the part of the button that slides and the part that stays in place.
As, with my ender 3, if I decreased this value, the button was no longer able to scroll.
In any case, the file is provided in STL, for direct printing and in .f3d to eventually modify it with Autodesk Fusion 360 in case you need a greater or lesser slack (if you contact me I can do it for you if the commitments allow me )

## License

GPL-3.0 License

**Free Software, Hell Yeah!**

[//]: # (These are reference links used in the body of this note and get stripped out when the markdown processor does its job. There is no need to format nicely because it shouldn't be seen. Thanks SO - http://stackoverflow.com/questions/4823468/store-comments-in-markdown-syntax)

   [Arduino]: <https://github.com/esp8266/Arduino/blob/master/cores/esp8266/Arduino.h>
   [ESP8266WiFi]: <https://github.com/esp8266/Arduino/blob/master/libraries/ESP8266WiFi/src/ESP8266WiFi.h>
   [AnotherIFTTTWebhook]: <https://github.com/Siytek/AnotherIFTTTWebhook>
   [this]: <https://mkzense.com/>
