/**
 * TODO: everything
 */

#ifndef Gyrosensor_H
#define Gyrosensor_H

#include <Arduino.h>

class Gyrosensor
{
    private:

        /**
         * the gyrosensor uses the two serial ports from the Arduino
         * SDA: A4
         * SCL: A5
         */
        
        const uint8_t m_SDA_Pin = A4;
        const uint8_t m_SCL_Pin = A5;

    public:

        Gyrosensor();
};

#endif