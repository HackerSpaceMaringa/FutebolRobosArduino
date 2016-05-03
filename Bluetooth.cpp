#include "Bluetooth.h"
#include "Definitions.h"

#include "SoftwareSerial.h"

SoftwareSerial BtSerial(BT_RX_PIN, BT_TX_PIN);

void setupBluetooth() {
  BtSerial.begin(BT_BAUD_RATE);
}

int btAvailable() {
  return BtSerial.available();
}

String getMessage() {
  String Message;
  while (BtSerial.available() > 0)
    Message += BtSerial.read();
  return Message;
}

void sendMessage(String Message) {
  BtSerial.print(Message);
}

