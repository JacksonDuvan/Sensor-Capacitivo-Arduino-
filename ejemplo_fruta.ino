#include <CapacitiveSensor.h>

CapacitiveSensor sensor = CapacitiveSensor(4,3); //Declaramos una variable y los pines de arduino

int led = 2; //Pin del led
long estado = 0;
int pulsado = LOW;//Comienza en estado bajo 
void setup() {
  pinMode(led,OUTPUT);
}
void loop() {

  estado = sensor.capacitiveSensor(30);//Declaramos velocidad 

  if (estado == HIGH){ //Condicional en alto 
    pulsado = !pulsado;
    digitalWrite(led,pulsado);
    delay(500);
    
    }
  
}
