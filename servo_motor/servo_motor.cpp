#include "mbed.h"
#include "servo_motor.h"


servo_motor::servo_motor(float duty_cicle,PinName pin){
    _duty_cicle = duty_cicle;
    _pin = pin;
    PwmOut motor(PinName _pin);
}

void servo_motor::move_motor(void){


}


// modificar el argumento para poder cambiar el periodo en 
// la funcion move_motor()

// crear una funcion miembro llada get_duty_cicle()
// que retorne read()