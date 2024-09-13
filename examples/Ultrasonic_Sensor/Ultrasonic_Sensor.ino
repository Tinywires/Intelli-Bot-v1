
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

// Create an instance of the Ultrasonic class
Ultrasonic myUltrasonic;

void setup() {
    // Start the serial communication at a baud rate of 9600
    Serial.begin(9600);

    // Initialize the ultrasonic sensor (set up trigger and echo pins)
    myUltrasonic.init();
}

void loop() {
    // Measure distance in centimeters using the ultrasonic sensor
    myUltrasonic.measureDistanceCm();  // Trigger the ultrasonic sensor to measure distance in cm
    int distanceCm = myUltrasonic.getDistanceCm();  // Get the measured distance in centimeters

    // Output the measured distance in cm to the serial monitor
    Serial.print("Distance in cm: ");
    Serial.println(distanceCm);

    // Measure distance in inches using the ultrasonic sensor
    myUltrasonic.measureDistanceInch();  // Trigger the ultrasonic sensor to measure distance in inches
    int distanceInch = myUltrasonic.getDistanceInch();  // Get the measured distance in inches

    // Output the measured distance in inches to the serial monitor
    Serial.print("Distance in inches: ");
    Serial.println(distanceInch);

    // Add a small delay before the next reading
    delay(500);  // Delay in milliseconds (0.5 seconds)
}
