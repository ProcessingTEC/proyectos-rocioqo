#include <Servo.h>

Servo myservo;
Servo myservoY;
int posX, posY;

void setup()
{
Serial.begin(9600);
myservo.attach(9);
myservoY.attach(10);
  
}

void loop()
{
 int val=map(posX,0,600,0,180);
  myservo.write(val);
  int val2=map(posY,0,600,0,180);
  myservoY.write(val2);
  
 // delay(50);
  }
                                                                            
void serialEvent() {
  if (Serial.available())
  {
    posX = Serial.parseInt();
    posY = Serial.parseInt();

  }
  }

















  
