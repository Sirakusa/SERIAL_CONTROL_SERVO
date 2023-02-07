#include "mbed.h"
#include <cstdio>
#include "send_data.h"
// Create a serial object

int main(void)
{
    while(true){

        send_data *buffer1 = new send_data();

        int buf;

        buffer1 -> buffer();

        buf = buffer1 -> get_data_buffer();

        delete buffer1;

    }
} 