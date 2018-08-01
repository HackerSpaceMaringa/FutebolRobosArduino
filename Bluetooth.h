#ifndef BLUETOOTH_H
#define BLUETOOTH_H

#include "Arduino.h"

void setupBluetooth();
int btBytesDisponiveis();
String btRecebeMensagem();
void btEnviaMensagem(String);

#endif
