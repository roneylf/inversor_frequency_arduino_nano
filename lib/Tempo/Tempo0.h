#include <iostream>

#include "Arduino.h"
using namespace std;

class Tempo
{
      // São atributos
  unsigned long tempoa; // usado na função timer()
  uint8_t cont;
  unsigned long periodoa;

public:
  unsigned long periodo;
  bool expo;
  Tempo(unsigned long a);
  bool timer();
};
