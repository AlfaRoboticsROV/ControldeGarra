# 1 "c:\\Users\\carpe\\Desktop\\ArduinoPython\\sketch.ino"
void setup()
{
 pinMode(13, 0x1);
}

void loop()
{
 digitalWrite(13, 0x1);
    delay(1000);
    digitalWrite(13, 0x0);
    delay(1000);
}
