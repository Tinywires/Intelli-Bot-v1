#ifndef IntelliBot_v1_h
#define IntelliBot_v1_h

#include <Arduino.h>

class Motors {
private:
  const byte m1 = 2;
  const byte m2 = 3;
  const byte m3 = 4;
  const byte m4 = 5;

public:
  Motors();
  void init();
  void forward();
  void backward();
  void right();
  void fastRight();
  void left();
  void fastLeft();
  void brake();
};

class Ultrasonic {
private:
  const byte trig = 11;
  const byte echo = 10;
  int distanceCmValue = 0;
  int distanceInchValue = 0;

public:
  Ultrasonic();
  void init();
  void measureDistanceCm();
  void measureDistanceInch();
  int getDistanceCm();
  int getDistanceInch();
};

class IR_Sensors {
private:
  const byte rightIRSensorPin = 7;
  const byte leftIRSensorPin = 6;
  byte rightIR;
  byte leftIR;

public:
  IR_Sensors();
  void init();
  void readRightIR();
  void readLeftIR();
  byte getRightIR();
  byte getLeftIR();
  const byte whiteColor = LOW;
  const byte blackColor = HIGH;
};

#endif
