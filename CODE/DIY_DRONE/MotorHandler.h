/**
 * TODO:
 *      - finish implementing steering functions
 *      - control accelaration when steering manually
 */

#ifndef MotorHandler_H
#define MotorHandler_H

#include <Arduino.h>
#include "Motor.h"

class MotorHandler
{
    private:

        /**
         * The standard motor speed STD_SPEED is callibrated,
         * to make the drone stand still in the air.
         * Its
         */

        const int STD_SPEED = 255;

        /**
         * create Motor objects with two input pins each
         * FL = front left
         * FR = front right
         * BL = back left
         * BR = back right
         */
        
        Motor FL = Motor(9, 10);
        Motor FR = Motor(A0, A1);
        Motor BL = Motor(A2, A3);
        Motor BR = Motor(A6, A7);
        
    public:
        
        /**
         * constructor does nothing at the time
         */

        MotorHandler();

        /**
         * each steering function sets each motor objects
         * to get the desired reult
         * 
         * e.g: still():
         *      FL and BR rotate clockwise
         *      FR and BL rotate counntercw
         *      => the drone stand still in the air,
         *      if STD_SPEED is callibrated correctly
         */

        void still();
        void forward();
        void backward();
        void left();
        void right();
};

#endif