#include <Pulso.h>
#include <Tempo.h>

Pulso pulso1(14,15);
Pulso pulso2(16,17);
Pulso pulso3(18,19);
Tempo tempo(200);
Tempo tempoLoop(300);


void setup() {
  pulso1.inicio(true);
  pulso2.inicio(false);
  pulso3.inicio(false);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  digitalWrite(5, LOW);


  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);

  digitalWrite(10, LOW);
  digitalWrite(11, HIGH);

  digitalWrite(12, LOW);
  digitalWrite(13, LOW);



}

void loop() {
  static int x = 100;
  static int cont = 0;

  if(tempoLoop.timer()){
    switch (cont)
    {
    case 0:
      pulso1.pulse();
      break;
    case 1:
      pulso2.pulse();
      break;
    case 2:
      pulso3.pulse();
      break;
    default:
      break;
    }
    cont++;
    if(cont > 2){
      cont = 0;
    }
  }
  if(tempo.timer()){
    x--;
  }
  
}