#include <Pulso.h>
#include <Tempo.h>
#include <Config.h>

Pulso pulso1(14,15);
Pulso pulso2(16,17);
Pulso pulso3(18,19);
Tempo tempo(1000);
Tempo tempoLoop(TEMPO_LOOP);


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
  static unsigned long x = TEMPO_LOOP;
  static int cont = 0;
  static int cont_loop = 0;


  if(cont_loop > x){
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
    cont_loop = 0;
  }
  if(tempo.timer()){
    if(x > 1){
          x--;
              tempoLoop.periodo = x;



    }
    
  }
  cont_loop++;
  
}