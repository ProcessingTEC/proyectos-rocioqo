void setup() {
  // put your setup code here, to run once:
pinMode (A0,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
// para concatenar el string que va a leer el Processing
Serial.print(analogRead(A0));
Serial.print(",");
Serial.println(analogRead(A0));
delay(500);
// Herramientas serial porter
}
