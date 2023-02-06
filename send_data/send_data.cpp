#include "mbed.h"
#include "send_data.h"
#include <algorithm>

send_data::send_data(){
    _c = NULL;
    _buffer[2] = {};
    _i = 0;
    _motor_value = 0;
}

void send_data::buffer(){

    static BufferedSerial pc(USBTX, USBRX);

    while (1) {

        if ((_i != 3) && pc.readable()) {
            pc.read(_c,sizeof(_c));
            pc.write(_c,sizeof(_c));
            _buffer[_i] = *_c;
            _i++;
        }
        if (_i == 3) {
            _motor_value = atoi(_buffer);
            break;
        }
    }
}

int send_data::get_data_buffer(){
    return _motor_value;
}