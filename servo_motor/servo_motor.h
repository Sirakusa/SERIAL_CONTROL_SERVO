#ifndef SERVO_MOTOR_H
#define SERVO_MOTOR_H

#include "mbed.h"

class servo_motor{
    public:
        servo_motor(void);
        float get_status_motor(void); 
        void move_motor(float duty_cicle,int shift);

    private:
        float _duty_cicle;
        enum shift{LEFT,RIGTH};
};

#endif