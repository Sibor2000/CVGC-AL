#include "Joystick.h"

/*
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, 
  JOYSTICK_TYPE_JOYSTICK, 0, 0,
  false, false, false, false, false, false,
  false, false, true, true, true);
*/

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, 
  JOYSTICK_TYPE_JOYSTICK,2,0,0,0,0,0,0,0,0,0,1,1,1);

int val;
int encoder0PinA = 0;
int encoder0PinB = 1;
int encoder0Pos = 0;
int encoder0PinALast = LOW;
int n = LOW;

int limit0PinA = 8;
int lb;

int limit0PinB=9;
int la;

int potent0PinA = A0;
int potentI;

int potent0PinB= A1;
int potentII;

int potent0PinC = A2;
int potentIII;






void setup() {
  // put your setup code here, to run once:


  Joystick.setSteeringRange(-20, 20);
  Joystick.setAcceleratorRange(144, 108);
  Joystick.setBrakeRange(58, 15);

  Joystick.begin();

  pinMode (encoder0PinA, INPUT_PULLUP);
  pinMode (encoder0PinB, INPUT_PULLUP);
  pinMode (limit0PinA, INPUT_PULLUP);
  pinMode (limit0PinB, INPUT_PULLUP);
//  pinMode(rocker0PinA, INPUT_PULLUP);
  pinMode(potent0PinA , INPUT_PULLUP);
  pinMode(potent0PinB , INPUT_PULLUP);
  pinMode(potent0PinC , INPUT_PULLUP);
  Serial.begin (9600);

}

void loop() {
  // put your main code here, to run repeatedly:



  n = digitalRead(encoder0PinA);
  if ((encoder0PinALast == LOW) && (n == HIGH)) 
  {
    if (digitalRead(encoder0PinB) == LOW) 
    {
      encoder0Pos--;
    } else 
    {
      encoder0Pos++;
    }
    Serial.print (encoder0Pos);
    Serial.print ("/");
    Joystick.setSteering(encoder0Pos);
  }
  encoder0PinALast = n;


  la=digitalRead(limit0PinA);
  //Serial.println("la=");
  if (la== LOW)
  {
    Serial.println("1");
    Joystick.pressButton(1);
    
  }
  else
  {
    Serial.println("0");
    Joystick.releaseButton(1);
  }



  lb=digitalRead(limit0PinB);
 // Serial.println("lb=");
  if (lb== LOW)
  {
  //  Serial.println("1");
    Joystick.pressButton(0);
  }
  else
  {
   // Serial.println("0");
    Joystick.releaseButton(0);
  }

    potentI=analogRead(potent0PinA);
  //Serial.println("potI= ");
  //Serial.println(potentI);
  Joystick.setAccelerator(potentI);

    potentII=analogRead(potent0PinB);
  //Serial.println("potII= ");
  //Serial.println(potentII);
  Joystick.setBrake(potentII);

    potentIII=analogRead(potent0PinC);
  //Serial.println("potIII= ");
  //Serial.println(potentIII);

//delay(1000);

}
