#include <Arduino.h>
#line 1 "c:\\Users\\carpe\\Desktop\\ArduinoPython\\sketch.ino"
#line 1 "c:\\Users\\carpe\\Desktop\\ArduinoPython\\sketch.ino"
void setup();
#line 6 "c:\\Users\\carpe\\Desktop\\ArduinoPython\\sketch.ino"
void loop();
#line 1 "c:\\Users\\carpe\\Desktop\\ArduinoPython\\sketch.ino"
void setup()
{
	pinMode(13, OUTPUT);
}

void loop()
{
	digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
}

