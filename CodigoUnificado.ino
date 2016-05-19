#include "Encoder.h"
#include "Bluetooth.h"

void setup() {
  Serial.begin(9600);
  setupEncoder();
  setupBluetooth();
}

void loop() {
  if (btBytesDisponiveis() > 0) {
    String Message = btRecebeMensagem();
    Serial.println(Message);
  }
}
