#include "SoftwareSerial.h"

#include "Definitions.h"
#include "Encoder.h"
#include "Bluetooth.h"
#include "Motor.h"

void setup() {
  Serial.begin(9600);
  setupEncoder();
  setupBluetooth();
  setupMotor();
}

void loop() {
  if (btBytesDisponiveis() > 0) {
    String Message = btRecebeMensagem();
    Serial.print("Message: ");
    Serial.println(Message);

    if (Message == "ViraDireita") {
        mtViraParaDireita();
    }

    if (Message == "ViraEsquerda") {
        mtViraParaEsquerda();
    }

    if(Message == "VaiParaFrente") {
        mtVaiParaFrente();
    }

    if(Message == "VaiParaTras") {
        mtVaiParaTras();
    }

    if(Message == "Parar") {
        mtParar();
    }
  }

  loopEncoder();
}
