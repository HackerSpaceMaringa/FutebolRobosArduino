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
#define BT_RX_PIN    9
#define BT_TX_PIN    8

/*
 * Definicoes do Motor
 */
// ------------ Pinos
#define MOTOR_INPUT_1_PIN_A 4
#define MOTOR_INPUT_2_PIN_A 5
#define MOTOR_ENABLE_A_PWM 10

#define MOTOR_INPUT_3_PIN_B 6
#define MOTOR_INPUT_4_PIN_B 7
#define MOTOR_ENABLE_B_PWM 11

// ------------ Definicoes de Controle
#define MT_DIREITA  0
#define MT_ESQUERDA 1

#define MT_VELOCITY_HIGH 250
#define MT_VELOCITY_MED  120
#define MT_VELOCITY_LOW  80

#endif
