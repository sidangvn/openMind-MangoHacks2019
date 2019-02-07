
#include<Servo.h> // include server library

// create servo object to control a servo
Servo ser; 
Servo ser1;
Servo ser2;
Servo ser3;
Servo ser4;

int poser = 0; // initial position of server
int val; // initial value of input
int motorPin = 10;

void setup() 
{
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600); // Serial comm begin at 9600bps
  
  ser.attach(2);// finger 1
  ser1.attach(4);//finger 2
  ser2.attach(6); //finger 3
  ser3.attach(8);//finger 4
  ser4.attach(10);//finger 5
}

void loop() 
{
  if(Serial.available()) // if serial value is available 
  {
      val = Serial.read();// then read the serial value

      //Motor 1 - finger 1
      if(val == 'a') //if value input is equals to d
      {
        poser += 10; //than position of servo motor increases by 1 ( anti clockwise)
        ser.write(poser);// the servo will move according to position
        analogWrite(motorPin,120);
        delay(5);//delay for the servo to get to the position
      }
      if(val == 'b') //if value input is equals to a
      {
        poser -= 10; //than position of servo motor decreases by 1 (clockwise)
        ser.write(poser) ; // the servo will move according to position 
        analogWrite(motorPin, 0);
        delay(5);//delay for the servo to get to the position
      }

      //Motor 2 - finger 2
      if (val == 'c') //if value input is equals to d
      {
        poser += 10; //than position of servo motor increases by 1 ( anti clockwise)
        ser1.write(poser);// the servo will move according to position
        analogWrite(motorPin, 120);
        delay(5);//delay for the servo to get to the position
      }
      if (val == 'd') //if value input is equals to a
      {
        poser -= 10; //than position of servo motor decreases by 1 (clockwise)
        ser1.write(poser) ; // the servo will move according to position 
        analogWrite(motorPin, 0);
        delay(5);//delay for the servo to get to the position
      }

      //Motor 3 - finger 3
      if (val == 'e') //if value input is equals to d
      {
        poser += 10; //than position of servo motor increases by 1 ( anti clockwise)
        ser2.write(poser);// the servo will move according to position
        analogWrite(motorPin, 120);
        delay(5);//delay for the servo to get to the position
      }
      if (val == 'f') //if value input is equals to a
      {
        poser -= 10; //than position of servo motor decreases by 1 (clockwise)
        ser2.write(poser) ; // the servo will move according to position 
        analogWrite(motorPin, 0);
        delay(5);//delay for the servo to get to the position
      }

      //Motor 4 - finger 4
      if (val == 'g') //if value input is equals to d
      {
        poser += 10; //than position of servo motor increases by 1 ( anti clockwise)
        ser3.write(poser);// the servo will move according to position
        analogWrite(motorPin, 120);
        delay(5);//delay for the servo to get to the position
      }
      if (val == 'h') //if value input is equals to a
      {
        poser -= 10; //than position of servo motor decreases by 1 (clockwise)
        ser3.write(poser) ; // the servo will move according to position 
        analogWrite(motorPin, 0);
        delay(5);//delay for the servo to get to the position
      }

       //Motor 5 - finger 5
       if (val == 'i') //if value input is equals to d
      {
        poser += 10; //than position of servo motor increases by 1 ( anti clockwise)
        ser4.write(poser);// the servo will move according to position
        analogWrite(motorPin, 120);
        delay(5);//delay for the servo to get to the position
      }
      if (val == 'j') //if value input is equals to a
      {
        poser -= 10; //than position of servo motor decreases by 1 (clockwise)
        ser4.write(poser) ; // the servo will move according to position 
        analogWrite(motorPin, 0);
        delay(5);//delay for the servo to get to the position
      }
    }
}
