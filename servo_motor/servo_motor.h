#ifndef SERVO_MOTOR_H
#define SERVO_MOTOR_H

#include "mbed.h"

class servo_motor{
    public:
        servo_motor(float duty_cicle);
        float get_status_motor(void); 
        void move_motor(void);

    private:
        float _duty_cicle;
};

#endif