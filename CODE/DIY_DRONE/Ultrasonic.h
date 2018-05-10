/**
 * TODO:
 *      - get response from sensor and return it on Echo(int sensor)
 *      - basically everything
 */

#ifndef Ultrasonic_H
#define Ultrasonic_H

#include <Arduino.h>

class Ultrasonic
{
    private:

        /**
         * m_Trigger is the trigger pin, used to trigger
         * all ultrasonic sensors.
         */

        const int m_Trigger = 2; // trigger pin

        /**
         * Each sensor sends values to its echo pin in m_E
         */

        const int m_Echo[6] = {3, 4, 5, 6, 7, 8};

    public:

        /**
         * The constructor sets the pinModes:
         *      m_Trigger => OUTPUT
         *      m_Echo[6] => INPUT
         */
        
        Ultrasonic();
        
        /**
         * trigger() sends a signal to each ultrasonic sensor
         */
        
        void Trigger();

        /**
         * echo(int sensor) returns the distance using pulseIn()
         */

        float Echo(int sensor);
};

#endif