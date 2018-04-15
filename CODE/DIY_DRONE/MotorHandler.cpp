#include "MotorHandler.h"

MotorHandler::MotorHandler() {
}

void MotorHandler::still() {
    Serial.println("MotorHandler::still()");
    FL.cw(STD_SPEED);
    FR.ccw(STD_SPEED);
    BL.ccw(STD_SPEED);
    BR.cw(STD_SPEED);
}

void MotorHandler::forward() {

}

void MotorHandler::backward() {

}

void MotorHandler::left() {
    FL.cw(STD_SPEED);
    FR.cw(STD_SPEED);
    BL.cw(STD_SPEED);
    BR.cw(STD_SPEED);
}

void MotorHandler::right() {
    Serial.println("MotorHandler::right()");
    FL.ccw(STD_SPEED);
    FR.ccw(STD_SPEED);
    BL.ccw(STD_SPEED);
    BR.ccw(STD_SPEED);
}