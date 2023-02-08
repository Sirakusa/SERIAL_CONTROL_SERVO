#include "mbed.h"
#include "servo_motor.h"

static PwmOut motor(PA_15);

servo_motor::servo_motor(float duty_cicle){
    _duty_cicle = duty_cicle;
}

void servo_motor::move_motor(){
    motor.write(_duty_cicle);
}

float servo_motor::get_status_motor(){
    return motor.read();
}


// modificar el argumento para poder cambiar el periodo en 
// la funcion move_motor()

// crear una funcion miembro llada get_duty_cicle()
// que retorne read()