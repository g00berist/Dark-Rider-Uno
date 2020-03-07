#include <Arduino.h>

byte leftMotor1 = 2;
byte leftMotor2 = 3;
byte leftPWM = 4;
byte rightMotor1 = 5;
byte rightMotor2 = 6;
byte rightPWM = 7;

void setup() {

	pinMode(leftMotor1, OUTPUT);
	pinMode(leftMotor2, OUTPUT);
	pinMode(leftPWM, OUTPUT);
	pinMode(rightMotor1, OUTPUT);
	pinMode(rightMotor2, OUTPUT);
	pinMode(rightPWM, OUTPUT);

	digitalWrite(leftMotor1, HIGH);
	digitalWrite(leftMotor2, LOW);
	analogWrite(leftPWM, 200);
	delay(1000);
	analogWrite(leftPWM, 0);


}

void loop() {

}
