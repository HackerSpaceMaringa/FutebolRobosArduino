#ifndef BLUETOOTH_H
#define BLUETOOTH_H

#include "Arduino.h"

void setupBluetooth();
int btAvailable();
String getMessage();
void sendMessage(String);

#endif
