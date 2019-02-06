#include<Servo.h> // include server library

// create servo object to control a servo
Servo ser; 
Servo ser1;
Servo ser2;
Servo ser3;

int poser = 0; // initial position of server
int val; // initial value of input
int motorPin = 3;

void setup() 
{
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600); // Serial comm begin at 9600bps
  
  ser.attach(2);// base
  ser1.attach(4);//left
  ser2.attach(6); //right
  ser3.attach(8);//kep
}

void loop() 
{
  if(Serial.available()) // if serial value is available 
  {
      val = Serial.read();// then read the serial value

      //Motor 1 - base motor
      if(val == 'd') //if value input is equals to d
      {
        poser += 10; //than position of servo motor increases by 1 ( anti clockwise)
        ser.write(poser);// the servo will move according to position
        analogWrite(motorPin, 125);
        delay(5);//delay for the servo to get to the position
      }
      if(val == 'a') //if value input is equals to a
      {
        poser -= 10; //than position of servo motor decreases by 1 (clockwise)
        ser.write(poser) ; // the servo will move according to position 
        analogWrite(motorPin, 255);
        delay(5);//delay for the servo to get to the position
      }

      //Motor 2 - left motor
      if (val == 'z') //if value input is equals to d
      {
        poser += 10; //than position of servo motor increases by 1 ( anti clockwise)
        ser1.write(poser);// the servo will move according to position
        analogWrite(motorPin, 125);
        delay(5);//delay for the servo to get to the position
      }
      if (val == 'x') //if value input is equals to a
      {
        poser -= 10; //than position of servo motor decreases by 1 (clockwise)
        ser1.write(poser) ; // the servo will move according to position 
        analogWrite(motorPin, 255);
        delay(5);//delay for the servo to get to the position
      }

      //Motor 3 - right motor
      if (val == 'k') //if value input is equals to d
      {
        poser += 10; //than position of servo motor increases by 1 ( anti clockwise)
        ser2.write(poser);// the servo will move according to position
        analogWrite(motorPin, 125);
        delay(5);//delay for the servo to get to the position
      }
      if (val == 'j') //if value input is equals to a
      {
        poser -= 10; //than position of servo motor decreases by 1 (clockwise)
        ser2.write(poser) ; // the servo will move according to position 
        analogWrite(motorPin, 255);
        delay(5);//delay for the servo to get to the position
      }

      //Motor 4 - motor top
      if (val == 'n') //if value input is equals to d
      {
        poser += 10; //than position of servo motor increases by 1 ( anti clockwise)
        ser3.write(poser);// the servo will move according to position
        analogWrite(motorPin, 125);
        delay(5);//delay for the servo to get to the position
      }
      if (val == 'm') //if value input is equals to a
      {
        poser -= 10; //than position of servo motor decreases by 1 (clockwise)
        ser3.write(poser) ; // the servo will move according to position 
        analogWrite(motorPin, 255);
        delay(5);//delay for the servo to get to the position
      }
    }
}
