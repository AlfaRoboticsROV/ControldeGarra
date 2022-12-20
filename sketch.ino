#include <Servo.h>
#define led 13
#define ser 5

Servo mot;

void setup() {
  Serial.begin(9600);
  delay(30);
  mot.attach(ser);
  mot.write(0);
  pinMode(led,OUTPUT);
  Serial.println("Hola, ¿Qué angulo deseas?");
}

String cad, cad1, cad2;
int vmotor=0;
void loop() {
  if(Serial.available()){
    cad=Serial.readString();
    vmotor=cad.toInt();
    Serial.print(cad);
  }
  
  mot.write(vmotor);
}