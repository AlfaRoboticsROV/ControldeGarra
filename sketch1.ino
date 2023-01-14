int pulsador=2;
int LED=13;
int estado=LOW;

void setup() {
    pinMode(pulsador,INPUT);
    pinMode(LED,OUTPUT);
    digitalWrite(LED,LOW);
}
void loop() {
    while(digitalRead(pulsador)==LOW);
    estado=digitalRead(LED);
    digitalWrite(LED, !estado);
}