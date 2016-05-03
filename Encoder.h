#ifndef ENCODER_H
#define ENCODER_H

#include "Arduino.h"

struct Encoder {
  unsigned Id;
  volatile unsigned Pulsos;
  unsigned long TempoMedido;
  unsigned long Rpm;
  
  Encoder();
  void reset();
  unsigned long calculaRpm(unsigned);
  String toString();
};

void setupEncoder();
void loopEncoder();

#endif
