#include <Servo.h>
Servo mandy;
Servo mandy1;
Servo mandy2;
Servo mandy3;
Servo mandy4;
int val,val1,val2,val3,val4;

void setup() {
  // put your setup code here, to run once:
mandy.attach(3);
mandy1.attach(5);
mandy2.attach(6);
mandy3.attach(9);
mandy4.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
val=analogRead(A0);
val=map(val, 0, 1023, 0, 180);
mandy.write(val);

val1=analogRead(A1);
val1=map(val1, 0, 1023, 0, 180);
mandy1.write(val1);

val2=analogRead(A2);
val2=map(val2, 0, 1023, 0, 180);
mandy2.write(val2);

val3=analogRead(A3);
val3=map(val3, 0, 1023, 0, 180);
mandy3.write(val3);

val4=analogRead(A4);
val4=map(val4, 0, 1023, 0, 180);
mandy4.write(val4);
delay(15);
}
