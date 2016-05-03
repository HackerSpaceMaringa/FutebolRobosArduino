#include "Encoder.h"
#include "Bluetooth.h"

void setup() {
  Serial.begin(9600);
  setupEncoder();
  setupBluetooth();
}

void loop() {
  loopEncoder();
}
