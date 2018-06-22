#include "Ultrasonic.h"

Ultrasonic::Ultrasonic()
{
    pinMode(m_Trigger, OUTPUT);
    for (int i = 0; i < sizeof(m_Echo) / sizeof(m_Echo[0]); i++) {
        pinMode(m_Echo[i], INPUT);
    }
}

void Ultrasonic::Trigger()
{
    digitalWrite(m_Trigger, 1);
    digitalWrite(m_Trigger, 0);
}

float Ultrasonic::Echo(int sensor)
{
    
}