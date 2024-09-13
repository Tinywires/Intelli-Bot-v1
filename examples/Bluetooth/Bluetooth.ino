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

// In this example, we assume the Bluetooth module is connected to the Arduino's default serial pins (RX and TX).

void setup() {
    // Start serial communication at 9600 baud rate (for the serial monitor)
    Serial.begin(9600);

    // Initialize the system (optional if you want to control motors or other peripherals)
    // No need for init() here as we are focusing on Bluetooth communication
    Serial.println("Bluetooth Communication Initialized");
    Serial.println("Waiting for Bluetooth input...");
}

void loop() {
    // Check if any data is available from the Bluetooth device
    if (Serial.available()) {
        // Read the incoming byte from the Bluetooth module
        char incomingByte = Serial.read();

        // Display the received character on the serial monitor
        Serial.print("Received via Bluetooth: ");
        Serial.println(incomingByte);
    }
}
