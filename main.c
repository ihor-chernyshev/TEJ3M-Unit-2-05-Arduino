//Created by Ihor Chernyshev
//Created on March 2025
//This program moves the servo to 180° and back to 0°

#include <Servo.h>

Servo servo; // Creating an object called "Servo"

int portNumber = 9;
int waitTime = 1000;

void setup()
{
    // Setting up servo
    servo.attach(portNumber);
    servo.write(0);
    delay(waitTime);
}

void loop()
{
    servo.write(180); // Goes to 180°
    delay(waitTime); // Waits till servo reach 180°
    servo.write(0); // Goes to 0°
    delay(waitTime); // Waits till servo reach 0°
}
