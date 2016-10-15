#include "Encoder.h"
#include "Definitions.h"

unsigned GlobalId = 0;

Encoder Encoders[2];
unsigned long TempoMedido;

long calculaTempoPassado() {
  return millis() - TempoMedido;
}

void resetTempoMedido() {
  TempoMedido = millis();
}

void incrementaMotorPulsos1() {
  Encoders[0].Pulsos++;
}

void incrementaMotorPulsos2() {
  Encoders[1].Pulsos++;
}

void habilitaInterrupcoes() {
  attachInterrupt(digitalPinToInterrupt(ENC_1_PIN), incrementaMotorPulsos1, FALLING);
  attachInterrupt(digitalPinToInterrupt(ENC_2_PIN), incrementaMotorPulsos2, FALLING);
}

void desabilitaInterrupcoes() {
  detachInterrupt(digitalPinToInterrupt(ENC_1_PIN));
  detachInterrupt(digitalPinToInterrupt(ENC_2_PIN));
}

void resetEncoders() {
  Encoders[0].reset();
  Encoders[1].reset();
}

void calculaRpm(unsigned TempoPassado) {
  Encoders[0].calculaRpm(TempoPassado);
  Encoders[1].calculaRpm(TempoPassado);
}

void imprimeEncoderInfo() {
  Serial.println(Encoders[0].toString());
  Serial.println(Encoders[1].toString());
}

void setupEncoder() {
  pinMode(ENC_1_PIN, INPUT);
  pinMode(ENC_2_PIN, INPUT);
  habilitaInterrupcoes();
}

void loopEncoder() {
  unsigned long TempoPassado = calculaTempoPassado();
  if (TempoPassado >= 1000) {
    desabilitaInterrupcoes();
    calculaRpm(TempoPassado);
    imprimeEncoderInfo();
    resetEncoders();
    resetTempoMedido();
    habilitaInterrupcoes();
  }
}

// ---------------------------------------------------- Classe Encoder ----------------------------------------------------

Encoder::Encoder() {
  Pulsos = 0;
  Rpm = 0;
  Id = GlobalId++;
}

void Encoder::reset() {
  Pulsos = 0;
}

unsigned long Encoder::calculaRpm(unsigned TempoPassado) {
  Rpm = (60L * 1000L * Pulsos) / (TempoPassado * PULSOS_POR_VOLTA);
  TempoMedido = millis(); //resetTempoMedido(); tem função pra isso, pog
  return Rpm;
}

String Encoder::toString() {
  String Information;
  Information = "{ Id:" + String(Id) + ", Pulsos:" + String(Pulsos) + ", Rpm:" + String(Rpm) + " }";
  return Information;
}
