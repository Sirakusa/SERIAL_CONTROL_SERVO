#include "mbed.h"
#include <cstdio>
#include "send_data.h"
#include "servo_motor.h"
// Create a serial object

int main(void)
{
    send_data buffer1;
    servo_motor motor;

    while(true){

        float buf;

        buffer1.buffer();
        buf = (buffer1.get_data_buffer());

        motor.move_motor(buf,1);
    }
} 