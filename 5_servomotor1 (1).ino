#include<Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;

int pos=0;

void setup()
{
  
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,INPUT);
  
  servo1.attach(7);
  servo2.attach(8);
  servo3.attach(9);
  servo4.attach(10);
  servo5.attach(11);
   
}

void loop()
{
  if(digitalRead(2)==LOW){
    servo1.write(90);
  }
  else
     servo1.write(0);
  
  if(digitalRead(3)==LOW){
    servo2.write(90);
  }
  else
 servo2.write(0);
 
  if(digitalRead(4)==LOW){
    servo3.write(90);
  }
  else
 servo3.write(0);
 
  if(digitalRead(5)==LOW){
    servo4.write(90);
  }
  else
 servo4.write(0);
  if(digitalRead(6)==LOW){
    servo5.write(90);
  }
  else
 servo5.write(0);


  
}