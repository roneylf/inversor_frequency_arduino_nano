#include <Tempo.h>

#include "Arduino.h"




unsigned long tempoa; // usado na função timer()
unsigned long periodo;
bool expo = false;
uint8_t cont = 0;
unsigned long periodoa;

Tempo::Tempo(unsigned long a)
{
  periodo = a;
}

bool Tempo::timer(){
  if(expo && (periodoa*10 < periodo)){
    cont++;
    if(cont > 10){
      periodoa = periodo;
      periodo = periodo*2;
      cont = 0;
    }
  }

  bool tmp = false;
  if(millis()-tempoa > periodo){
    tmp = true;
    tempoa = millis();}
  return tmp;}
