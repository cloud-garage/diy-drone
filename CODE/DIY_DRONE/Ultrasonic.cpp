#include "Ultrasonic.h"

Ultrasonic::Ultrasonic() {
    pinMode(T, OUTPUT);
    for (int i = 0; i < sizeof(E) / sizeof(E[0]); i++) {
        pinMode(E[i], INPUT);
    }
}
void Ultrasonic::trigger() {
    digitalWrite(T, 1);
    digitalWrite(T, 0);
}
float Ultrasonic::echo(int sensor) {
    
}