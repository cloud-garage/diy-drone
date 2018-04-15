/**
 * TODO:
 */

#ifndef Motor_H
#define Motor_H

#include <Arduino.h>

class Motor
{
    private:
        
        /**
         * each motor has 2 connections:
         *      CW_PIN = clockwise
         *      CCW_PIN = countercw
         * 
         * e.g.
         *      CW_PIN      HIGH
         *      CCW_PIN     LOW
         *      => motor rotates clockwise
         */

        const uint8_t CW_PIN;
        const uint8_t CCW_PIN;

        /**
         * SPEED is the current speed of the motor
         * It's being set to a value from 0 to 255
         * by the MotorHandler.
         */

        int SPEED;

    public:

        /**
         * constructor that sets the clockwise and countercw pins
         */

        Motor(uint8_t cw_pin, uint8_t ccw_pin);
        
        /**
         * cw() sets the rotation to clockwise
         * ccw() setst the rotation to countercw
         */
        
        void cw(int speed);
        void ccw(int speed);
};

#endif