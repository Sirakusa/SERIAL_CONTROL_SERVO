#include "mbed.h"
#include <cstdio>

static BufferedSerial pc(USBTX, USBRX); // tx, rx
DigitalOut led(LED1);

float brightness = 0.0;

int main(){

    char msg[] = "Press 'u' to turn LED1 brightness up, 'd' to turn it down\n";
    char *c = new char[7];

    pc.write(msg, sizeof(msg));

    while (true) {
        pc.read(c, sizeof(c));
        pc.write(c, sizeof(c));

        int val = atoi(c);

        if (val == 1) {
            led = 1;
            printf("\n");
        }

        if (val == 0) {
            led = 0;
            printf("\n");
        }

    }
}