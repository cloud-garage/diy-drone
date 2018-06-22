#include "MotorHandler.h"

MotorHandler::MotorHandler()
{

}

void MotorHandler::Levitate()
{
    Serial.println("MotorHandler::Levitate()");
    m_FL.CW(m_RefSpeed);
    m_FR.CCW(m_RefSpeed);
    m_BL.CCW(m_RefSpeed);
    m_BR.CW(m_RefSpeed);
}

void MotorHandler::Forward()
{

}

void MotorHandler::Backward()
{

}

void MotorHandler::Left()
{
    m_FL.CW(m_RefSpeed);
    m_FR.CW(m_RefSpeed);
    m_BL.CW(m_RefSpeed);
    m_BR.CW(m_RefSpeed);
}

void MotorHandler::Right()
{
    Serial.println("MotorHandler::Right()");
    m_FL.CCW(m_RefSpeed);
    m_FR.CCW(m_RefSpeed);
    m_BL.CCW(m_RefSpeed);
    m_BR.CCW(m_RefSpeed);
}