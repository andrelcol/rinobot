#include "digital_sensor.h"
#include <iostream>
#include <Arduido.h>
using namespace std;

DigitalSensor::DigitalSensor(int pin){
  this->pin = pin;
}

int DigitalSensor::readSensor(){
  this->raw_reading = digialRead(this->pin); // sempre apontando como se fosse objeito, já que vai usar o pin do robot.h, sempre que mudar, muda também. sempre usar ponteiro.
//  this->enemy_close = this->raw_reading<2000 ? true : false;
  if (raw_reading == 1)
    return true;
  else
    return false;   
//  leAlgo = this->raw_reading==1 ? true : false; //operador ternario usado pra retornar somente, faz a mesma coisa que o if acima
}
//int DigitalSensor::fil
