
/**************

Library For 
Intelli Bot v1 DIY 5 in 1 Robotics Kit

url=https:https://github.com/Tinywires/Intelli-Bot-v1.
Checkout the Videos = https://www.youtube.com/playlist?list=PLit10xGTY01HNOcqG7IwZn4ux5e_xoyuk
More Details = https://techeonics.com/category/intelli-bot/

By TinyWires Technologies <www.tinywires.com>
Powered By Techeonics
<tinywires.tech@gmail.com> 
<thetecheonics@gmail.com>

Maker - @SHIVAM
        @GAURAVK5

Youtube- https://www.youtube.com/c/THETECHEONICS
See <https://www.techeonics.com> for details.

********************/

#include <IntelliBot_v1.h>  // Include the custom IntelliBot_v1 library

// Create an instance of the IR_Sensors class
IR_Sensors myIRSensors;

void setup() {
    // Start serial communication at 9600 baud rate
    Serial.begin(9600);

    // Initialize the IR sensors (set up pins)
    myIRSensors.init();
}

void loop() {
    // Read values from the left and right IR sensors
    myIRSensors.readLeftIR();   // Read the left IR sensor value
    myIRSensors.readRightIR();  // Read the right IR sensor value

    // Get the current value of the left IR sensor
    byte leftIRValue = myIRSensors.getLeftIR();
    // Get the current value of the right IR sensor
    byte rightIRValue = myIRSensors.getRightIR();

    // Output left IR sensor value to the serial monitor
    Serial.print("Left IR Sensor: ");
    if (leftIRValue == myIRSensors.whiteColor) {
        Serial.println("White Surface");
    } else if (leftIRValue == myIRSensors.blackColor) {
        Serial.println("Black Surface");
    }

    // Output right IR sensor value to the serial monitor
    Serial.print("Right IR Sensor: ");
    if (rightIRValue == myIRSensors.whiteColor) {
        Serial.println("White Surface");
    } else if (rightIRValue == myIRSensors.blackColor) {
        Serial.println("Black Surface");
    }

    // Small delay before the next sensor reading
    delay(500);  // Delay of 0.5 seconds
}
