#include<Arduino.h>
class Pulso
{
private:
    bool pino01 = false;
    bool pino02 = true;
    int ard_pin01;
    int ard_pin02;

    
public:
    Pulso(int pin01, int pin02);
    void inicio(bool invert);
    void pulse();
};

