#include <Pulso.h>
#include <Tempo.h>

Pulso pulso1(2,3);
Pulso pulso2(4,5);
Pulso pulso3(6,7);
Tempo tempo(200);

void setup() {
  pulso1.inicio(true);
  pulso2.inicio(false);
  pulso3.inicio(false);
}

void loop() {
  static int x = 100;
  static int cont = 0;
  static int v = false;
  if(v){
    pulso1.pulse();
    v = false;
  }else{
    v = true;
  }
  delay(x);
  if(v){
    pulso2.pulse();
    v = false;
  }else{
    v = true;
  }
  delay(x);
  if(v){
    pulso3.pulse();
    v = false;
  }else{
    v = true;
  }
  delay(x);
  if(tempo.timer()){
    x--;
  }
  
}