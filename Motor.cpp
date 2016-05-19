#include "Definitions.h"
#include "Motor.h"
#include "Arduino.h"

#define PIN_A 0
#define PIN_B 1

/*
 * Tabela para as possibilidades de A e B.
 *        A           B         Resultado
 *        0           0          Parado
 *        0           1          Para trás
 *        1           0          Para frente
 *        1           1          Parado
 */

Motor MotorDireita(MOTOR_DIR_PIN_A, MOTOR_DIR_PIN_B);
Motor MotorEsquerda(MOTOR_ESQ_PIN_A, MOTOR_ESQ_PIN_B);

void mtSetVelocidade(int V, int MotorID) {
  if (MotorID == MT_ESQUERDA) MotorEsquerda.setVelocidade(V);
  else if (MotorID == MT_DIREITA) MotorEsquerda.setVelocidade(V);
}

void mtViraParaEsquerda() {
  MotorDireita.giraFrente();
  MotorEsquerda.giraTras();
}

void mtViraParaDireita() {
  MotorDireita.giraFrente();
  MotorEsquerda.giraTras();
}

void mtVaiParaFrente() {
  MotorDireita.giraFrente();
  MotorEsquerda.giraFrente();
}

void mtVaiParaTras() {
  MotorDireita.giraFrente();
  MotorEsquerda.giraFrente();
}

void mtParar() {
  MotorDireita.parar();
  MotorEsquerda.parar();
}

// ---------------------------------------------------- Classe Motor ----------------------------------------------------

void setupMotor() {
  pinMode(MOTOR_DIR_PIN_A, OUTPUT);
  pinMode(MOTOR_DIR_PIN_B, OUTPUT);
  pinMode(MOTOR_ESQ_PIN_A, OUTPUT);
  pinMode(MOTOR_ESQ_PIN_B, OUTPUT);

  pinMode(MOTOR_DIR_PWM, OUTPUT);
  pinMode(MOTOR_ESQ_PWM, OUTPUT);
}

Motor::Motor(int PinA, int PinB, int PinPWM) {
  DirectionPin[PIN_A] = PinA;
  DirectionPin[PIN_B] = PinB;
  PowerPin = PinPWM;
}

void Motor::parar() {
  digitalWrite(DirectionPin[PIN_A], LOW);
  digitalWrite(DirectionPin[PIN_B], LOW);
}

void Motor::giraFrente() {
  digitalWrite(DirectionPin[PIN_A], HIGH);
  digitalWrite(DirectionPin[PIN_B], LOW);
}

void Motor::giraTras() {
  digitalWrite(DirectionPin[PIN_A], LOW);
  digitalWrite(DirectionPin[PIN_B], HIGH);
}

void Motor::setVelocidade(int V) {
  analogWrite(PowerPin, V);
}
