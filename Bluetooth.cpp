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

bool btCharacterFinal(char Char) {
  return Char == '\0' || Char == '\n' || Char == '\r';
}

String btRecebeMensagem() {
  String Message = "";
  char CurrentChar;
  while (true) {
    if (btBytesDisponiveis() > 0) {
      CurrentChar = BtSerial.read();
      if (btCharacterFinal(CurrentChar)) break;
      Message += CurrentChar;
    }
  }
  return Message;
}

void btEnviaMensagem(String Message) {
  BtSerial.print(Message);
}

