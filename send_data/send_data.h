#ifndef SEND_DATA_H
#define SEND_DATA_H

#include "mbed.h"

class send_data{
    public:
        float get_data_buffer(void);
        void buffer(void);
        send_data(void);

    private:
        char _buffer[3];
        int _motor_value;
        enum shift{LEFT,RIGTH};
};

#endif