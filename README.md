# Futebol de Robôs

[![Build Status](https://travis-ci.org/HackerSpaceMaringa/FutebolRobosArduino.svg?branch=master)](https://travis-ci.org/HackerSpaceMaringa/FutebolRobosArduino)

Projeto completo do Futebol de Robôs mantido pelo Hackerspace Maringá.

## Índice

- [Sobre](#sobre)
- __O Projeto__
    - [Hardware](#hardware)
        - [Microcontrolador](#microcontrolador)
        - [Comunicação](#comunicação)
        - [Controle dos Motores](#controle dos motores)
        - [Monitoramento da Bateria](#monitoramento da bateria)
    - [Software](#software)
- [TODO](#todo)
- [Créditos](#créditos)
- [Licença](#licença)

### Sobre

TODO

### Hardware

#### Microcontrolador

O [Arduino Nano](https://www.arduino.cc/) foi escolhido como microcontrolador para este projeto por oferecer uma experiência simples e acessível, sendo fácil de utilizar para iniciantes e flexível para usuários avançados.

#### Comunicação

A comunicação foi substituída de Rádio frequência para bluetooth com o objetivo de evitar conflitos com a frequência de outros times e diminuir a complexidade do projeto. Utilizaremos um módulo HC-05 para efetuar o envio/recebimento de mensagens.

#### Controle dos Motores

Para o controle dos motores utilizaremos o circuito integrado L298. Este circuito oferece duas Pontes H no mesmo pacote, podendo receber voltagens até 46V, com correntes até 4A, além de grande imunidade à ruído nos inputs lógicos.

#### Monitoramento da Bateria

TODO

### Software

### Créditos
- [Caio Henrique Segawa Tonetti](github.com/lionswrath)
- Alexandre Santiago da Silva   
- Kariston Franzin Boveto 
- Marcos Yukio Siraichi
- Christian Takashi Nakata
- Fernando Hideo Kokubu
- Willy John Nakamura Goto
- Paulo André Camargo Cocco

### TODO

#### Client-side(CS)
- [x] Schematic (Eagle) 
- [x] Montagem protoboard
- [x] Implementação Comunicação Bluetooth
- [ ] Implementação Protocolo
- [x] Implementação Controle dos motores
- [ ] Implementação Movimentação
- [ ] Board (Eagle)
- [ ] Verificar preço produção Board
- [ ] Finalizar compra dos componentes
- [ ] Soldar as placas

#### Server-side(SS)
- [x] Script de Comunicação Bluetooth
- [ ] Implementação Protocolo
- [ ] Implementação Detecção dos Robôs
- [ ] Implementação da Estratégia

#### Testes
- [x] CS:Testes Comunicação Bluetooth (Protoboard)
- [ ] CS:Testes Comunicação Bluetooth (Board)
- [ ] CS:Testes de Recepção do Protocolo
- [x] CS:Testes Controle Motores (Protoboard)
- [ ] CS:Testes Controle Motores (Board)
- [ ] CS:Testes Movimentação
- [ ] CS:Testes Monitoramento da Bateria (Protoboard)
- [ ] CS:Testes Monitoramento da Bateria (Board)
- [x] SS:Testes do Script de Comunicação Bluetooth
- [ ] SS:Testes de Envio do Protocolo
- [ ] SS:Testes Detecção dos Robôs
- [ ] SS:Testes da Estratégia

### Licença
This project extends GNU GPL v. 3, so be aware of that, regarding copying, modifying and (re)destributing.
