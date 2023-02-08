#include "mbed.h"
#include "send_data.h"
#include <algorithm>
#include <cstdio>

send_data::send_data(){
    _buffer[2] = {};
    _motor_value = 0;
}

void send_data::buffer(){

    static BufferedSerial pc(USBTX, USBRX);

        if (pc.readable()) {
            ThisThread::sleep_for(5000ms);
            pc.read(_buffer,sizeof(_buffer));

            _motor_value = atoi(_buffer);
        }
}

float send_data::get_data_buffer(){
    _motor_value = float(_motor_value)
    return _motor_value;
}