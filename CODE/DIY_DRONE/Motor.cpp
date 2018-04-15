#include "Motor.h"

Motor::Motor(uint8_t cw_pin, uint8_t ccw_pin) {
    CW_PIN = cw_pin;
    CCW_PIN = ccw_pin;
    analogWrite(CW_PIN, 0);
    analogWrite(CCW_PIN, 0);
}

void Motor::cw(int speed) {
    SPEED = speed;
    analogWrite(CCW_PIN, 0);
    analogWrite(CW_PIN, SPEED);
    Serial.println("Motor::cw() CCW:" + String(CCW_PIN) + " CW:" + String(CW_PIN));
}

void Motor::ccw(int speed) {
    SPEED = speed;
    analogWrite(CW_PIN, 0);
    analogWrite(CCW_PIN, SPEED);
    Serial.println("Motor::ccw() CCW:" + String(CCW_PIN) + " CW:" + String(CW_PIN));
}