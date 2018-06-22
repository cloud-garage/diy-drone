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
         *      m_CW_Pin = clockwise
         *      m_CCW_Pin = countercw
         * 
         * e.g.
         *      m_CW_Pin      HIGH
         *      m_CCW_Pin     LOW
         *      => motor rotates clockwise
         */

        const uint8_t m_CW_Pin;
        const uint8_t m_CCW_Pin;

        /**
         * SPEED is the current speed of the motor
         * It's being set to a value from 0 to 255
         * by the MotorHandler.
         */

        int m_Speed = 0;

    public:

        /**
         * constructor that sets the clockwise and countercw pins
         */

        Motor(uint8_t cw_pin, uint8_t ccw_pin);
        
        /**
         * CW() sets the rotation to clockwise
         * CCW() setst the rotation to countercw
         */
        
        void CW(int speed);
        void CCW(int speed);
};

#endif