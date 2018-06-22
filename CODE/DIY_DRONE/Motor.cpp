#include "Motor.h"

Motor::Motor(uint8_t cw_pin, uint8_t ccw_pin)
    : m_CW_Pin(cw_pin), m_CCW_Pin(ccw_pin), m_Speed(0)
{
    analogWrite(m_CW_Pin, 0);
    analogWrite(m_CCW_Pin, 0);
}

void Motor::CW(int speed)
{
    m_Speed = speed;
    analogWrite(m_CCW_Pin, 0);
    analogWrite(m_CW_Pin, m_Speed);
    Serial.println("Motor::cw() CW:" + String(m_CCW_Pin) + " CW:" + String(m_CW_Pin));
}

void Motor::CCW(int speed)
{
    m_Speed = speed;
    analogWrite(m_CW_Pin, 0);
    analogWrite(m_CCW_Pin, m_Speed);
    Serial.println("Motor::CCW() CCW:" + String(m_CCW_Pin) + " CW:" + String(m_CW_Pin));
}