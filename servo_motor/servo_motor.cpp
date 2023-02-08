#include "mbed.h"
#include "servo_motor.h"

static PwmOut motor(PA_15);

servo_motor::servo_motor(float duty_cicle){
    _duty_cicle = duty_cicle;
}

void servo_motor::move_motor(float duty_cicle,int s){

    _duty_cicle = duty_cicle;

    if (s == RIGTH) {
        for (float i = _duty_cicle; i <= 1; i += 0.1) {
            motor.write(i);
            ThisThread::sleep_for(100ms);
        }
    }

    if (s == LEFT) {
        for (float i = _duty_cicle; i >= 0; i -= 0.1) {
            motor.write(i);
            ThisThread::sleep_for(100ms);
        }
    }
}


float servo_motor::get_status_motor(){
    return motor.read();
}