#include "mbed.h"
using namespace std::chrono;

Ticker flipper;
DigitalOut led(LED3);


void flip()
{
   led = !led;
}

int main()
{
   led = 0;
   flipper.attach(&flip, 500ms); 

   
   while (1);
}