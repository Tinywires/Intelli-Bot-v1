#include "IntelliBot_v1.h"

Motors::Motors() {
  // Constructor - nothing to initialize here for now
}

void Motors::init() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
}

void Motors::forward() {
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
}

void Motors::backward() {
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
}

void Motors::right() {
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, LOW);
  digitalWrite(m4, LOW);
}

void Motors::fastRight() {
  digitalWrite(m1, LOW);
  digitalWrite(m2, HIGH);
  digitalWrite(m3, LOW);
  digitalWrite(m4, HIGH);
}

void Motors::left() {
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
}

void Motors::fastLeft() {
  digitalWrite(m1, HIGH);
  digitalWrite(m2, LOW);
  digitalWrite(m3, HIGH);
  digitalWrite(m4, LOW);
}

void Motors::brake() {
  digitalWrite(m1, LOW);
  digitalWrite(m2, LOW);
  digitalWrite(m3, LOW);
  digitalWrite(m4, LOW);
}

Ultrasonic::Ultrasonic() {
  // Constructor - nothing to initialize here for now
}

void Ultrasonic::init() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void Ultrasonic::measureDistanceCm() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  float duration = pulseIn(echo, HIGH);
  distanceCmValue = duration / 58.2;
}

void Ultrasonic::measureDistanceInch() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  float duration = pulseIn(echo, HIGH);
  distanceInchValue = duration / 148.0;
}

int Ultrasonic::getDistanceCm() {
  return distanceCmValue;
}

int Ultrasonic::getDistanceInch() {
  return distanceInchValue;
}

IR_Sensors::IR_Sensors() {
  // Constructor - nothing to initialize here for now
}

void IR_Sensors::init() {
  pinMode(rightIRSensorPin, INPUT);
  pinMode(leftIRSensorPin, INPUT);
}

void IR_Sensors::readRightIR() {
  rightIR = digitalRead(rightIRSensorPin);
}

void IR_Sensors::readLeftIR() {
  leftIR = digitalRead(leftIRSensorPin);
}

byte IR_Sensors::getRightIR() {
  return rightIR;
}

byte IR_Sensors::getLeftIR() {
  return leftIR;
}
