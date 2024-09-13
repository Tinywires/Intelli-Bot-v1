
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

// Create an instance of the Motors class
Motors myMotors;

void setup() {
    // Initialize the motors by setting up the pins as outputs
    myMotors.init();

    // Start serial communication at a baud rate of 9600 (optional for monitoring)
    Serial.begin(9600);
}

void loop() {
    // Move the robot forward for 2 seconds
    Serial.println("Moving forward");
    myMotors.forward();   // Move forward
    delay(2000);          // Wait for 2 seconds

    // Stop the robot for 1 second
    Serial.println("Stopping");
    myMotors.brake();     // Stop the motors
    delay(1000);          // Wait for 1 second

    // Move the robot backward for 2 seconds
    Serial.println("Moving backward");
    myMotors.backward();  // Move backward
    delay(2000);          // Wait for 2 seconds

    // Stop the robot for 1 second
    Serial.println("Stopping");
    myMotors.brake();     // Stop the motors
    delay(1000);          // Wait for 1 second

    // Turn the robot left for 1.5 seconds
    Serial.println("Turning left");
    myMotors.left();      // Turn left
    delay(1500);          // Wait for 1.5 seconds

    // Stop the robot for 1 second
    Serial.println("Stopping");
    myMotors.brake();     // Stop the motors
    delay(1000);          // Wait for 1 second

    // Turn the robot right for 1.5 seconds
    Serial.println("Turning right");
    myMotors.right();     // Turn right
    delay(1500);          // Wait for 1.5 seconds

    // Stop the robot for 1 second
    Serial.println("Stopping");
    myMotors.brake();     // Stop the motors
    delay(1000);          // Wait for 1 second

    // Turn the robot fast left for 1 second
    Serial.println("Fast turning left");
    myMotors.fastLeft();  // Fast turn left
    delay(1000);          // Wait for 1 second

    // Turn the robot fast right for 1 second
    Serial.println("Fast turning right");
    myMotors.fastRight(); // Fast turn right
    delay(1000);          // Wait for 1 second

    // Stop the robot for 1 second before restarting the loop
    Serial.println("Stopping");
    myMotors.brake();     // Stop the motors
    delay(1000);          // Wait for 1 second
}
