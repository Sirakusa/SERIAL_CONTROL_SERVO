#ifndef SEND_DATA_H
#define SEND_DATA_H

#include "mbed.h"

class send_data{
    public:
        int get_data_buffer(void);
        void buffer(void);
        send_data(void);

    private:
        char _buffer[3];
        float _motor_value;
};

#endif