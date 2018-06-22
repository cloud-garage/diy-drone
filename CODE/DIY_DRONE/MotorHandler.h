/**
 * TODO:
 *      - finish implementing steering functions
 *      - control accelaration when steering manually
 *      - callibrate m_RefSpeed
 */

#ifndef MotorHandler_H
#define MotorHandler_H

#include <Arduino.h>
#include "Motor.h"

class MotorHandler
{
    private:

        /**
         * The standard/reference motor speed m_RefSpeed is callibrated,
         * to make the drone stand still in the air.
         */

        const int m_RefSpeed = 255;

        /**
         * create Motor objects with two input pins each
         * m_FL = front left
         * m_FR = front right
         * m_BL = back left
         * m_BR = back right
         */
        
        Motor m_FL = Motor(9, 10);
        Motor m_FR = Motor(A0, A1);
        Motor m_BL = Motor(A2, A3);
        Motor m_BR = Motor(A6, A7);
        
    public:
        
        /**
         * constructor does nothing at the time
         */

        MotorHandler();

        /**
         * each steering function sets each motor object
         * to get the desired reult
         * 
         * e.g: Levitate():
         *      FL and BR rotate clockwise
         *      FR and BL rotate countercw
         *      => the drone stand still in the air,
         *      if m_RefSpeed is callibrated correctly
         */

        void Levitate();
        void Forward();
        void Backward();
        void Left();
        void Right();
};

#endif