/**
 * TODO: get response from sensor and return it on echo(int sensor)
 */

#ifndef Ultrasonic_H
#define Ultrasonic_H

#include <Arduino.h>

class Ultrasonic
{
    private:

        /**
         * T is the trigger pin, used to trigger
         * all ultrasonic sensors.
         */

        const int T = 2; // trigger pin

        /**
         * Each sensor sends values to its echo pin in E
         */

        const int E[6] = {3, 4, 5, 6, 7, 8};

    public:

        /**
         * The constructor sets the pinModes:
         *      T => OUTPUT
         *      EN[6] => INPUT
         */
        
        Ultrasonic();
        
        /**
         * trigger() sends a signal to each ultrasonic sensor
         */
        
        void trigger();

        /**
         * echo(int sensor) returns the distance using pulseIn()
         */

        float echo(int sensor);
};

#endif