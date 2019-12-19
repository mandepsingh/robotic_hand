#include<Servo.h>
Servo mandy1;
Servo mandy2;

Servo mandy3;

Servo mandy4;

Servo mandy5;

void setup() {
  pinMode(A0,INPUT);
  
  pinMode(A1,INPUT);
  
  pinMode(A2,INPUT);
  
  pinMode(A3,INPUT);
  
  pinMode(A4,INPUT);
  
  pinMode(A5,INPUT);

  mandy1.attach(11);
    
  mandy2.attach(9);
    
  mandy3.attach(5);
    
  mandy4.attach(8);
    
  mandy5.attach(10);
    int ma[5];
    }
void loop() {int pos=0;
int flex1=analogRead(A0);

int flex2=analogRead(A1);

int flex3=analogRead(A2);

int flex4=analogRead(A3);

int flex5=analogRead(A4);
 int pos1=map(flex1,400,700,0,180);
 pos1=constrain(pos1,0,180);
 
 mandy1.write(pos1); // put your main code here, to run repeatedly:

}
