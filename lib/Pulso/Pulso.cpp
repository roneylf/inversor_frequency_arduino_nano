#include <Pulso.h>


Pulso::Pulso(int pin01, int pin02){
    Pulso::ard_pin01 = pin01;
    Pulso::ard_pin02 = pin02;
}

void Pulso::inicio(bool invert){
    pinMode(ard_pin01, OUTPUT);
    pinMode(ard_pin02, OUTPUT);
    if(invert){
        pino01 = !pino01;
        pino02 = !pino01;
    }
}
void Pulso::pulse(){
    if(!pino01){
        digitalWrite(ard_pin01, pino01);
        digitalWrite(ard_pin02, pino02);
    }
    else{
        digitalWrite(ard_pin02, pino02);
        digitalWrite(ard_pin01, pino01);
    }
        pino01 = !pino01;
        pino02 = !pino01;
}