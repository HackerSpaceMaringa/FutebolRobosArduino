#include "Bluetooth.h"
#include "Definitions.h"

#include "SoftwareSerial.h"

SoftwareSerial BtSerial(BT_RX_PIN, BT_TX_PIN);

void setupBluetooth() {
  pinMode(BT_RX_PIN, INPUT);
  pinMode(BT_TX_PIN, OUTPUT);
  BtSerial.begin(BT_BAUD_RATE);
}

int btBytesDisponiveis() {
  return BtSerial.available();
}

String btRecebeMensagem() {
  String Message;
  int Length = BtSerial.read();
  for (int I = 0; I < Length;) {
    if (BtSerial.available() > 0) {
      Message += (char)BtSerial.read();
      ++I;
    }
  }
  return Message;
}

void btEnviaMensagem(String Message) {
  BtSerial.print(Message);
}

