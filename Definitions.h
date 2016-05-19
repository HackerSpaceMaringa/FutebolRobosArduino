#ifndef DEFINITIONS_H
#define DEFINITIONS_H

/*
 * Definicoes do Encoder
 */
#define PULSOS_POR_VOLTA 20

#define ENC_1_PIN 2
#define ENC_2_PIN 3

/*
 * Definicoes do Bluetooth
 */
#define BT_BAUD_RATE 9600
#define BT_RX_PIN    8
#define BT_TX_PIN    9

/*
 * Definicoes do Motor
 */
// ------------ Pinos
#define MOTOR_DIR_PIN_A 4
#define MOTOR_DIR_PIN_B 5
#define MOTOR_ESQ_PIN_A 6
#define MOTOR_ESQ_PIN_B 7
#define MOTOR_DIR_PWM 10
#define MOTOR_ESQ_PWM 11

// ------------ Definicoes de Controle
#define MT_DIREITA  0
#define MT_ESQUERDA 0

#define MT_VELOCITY_HIGH 250
#define MT_VELOCITY_MED  120
#define MT_VELOCITY_LOW  80

#endif
