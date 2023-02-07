#ifndef SERVO_MOTOR_H
#define SERVO_MOTOR_H

#include "mbed.h"

class servo_motor{
    public:
        servo_motor(float duty_cicle,int pin);
    private:
        float _duty_cicle;
        void move_motor(void);


};

#endif