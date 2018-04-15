/**
 * TODO:
 *      - ultrasonic
 *      - gyrosensor
 *      - control accelaration when steering manually
 */

#include <Arduino.h>
#include <Scheduler.h>
#include "MotorHandler.h"
#include "Ultrasonic.h"
#include "Gyrosensor.h"

// SETUP

MotorHandler mh = MotorHandler();
Ultrasonic us = Ultrasonic();
Gyrosensor gs = Gyrosensor();

void manual_steering();
void ultrasonic();
void gyrosensor();

void setup()
{
    Serial.begin(9600);
    while(!Serial);
    mh.enable();
    Scheduler.startLoop(manual_steering);
    Scheduler.startLoop(ultrasonic);
    Scheduler.startLoop(gyrosensor);
}

void loop() {
    Scheduler.yield();
}

// MAIN

void manual_steering()
{

    /**
     * for testing purposes only
     */

    mh.still();
    Serial.println("cw");
    delay(1000);
    mh.right();
    Serial.println("ccw");
    delay(1000);
    Scheduler.yield();
}

void ultrasonic() {
    Scheduler.yield();
}

void gyrosensor() {
    Scheduler.yield();
}