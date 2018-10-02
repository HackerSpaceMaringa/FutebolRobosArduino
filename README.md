# Futebol de Robôs

[![Build Status](https://travis-ci.org/HackerSpaceMaringa/FutebolRobosArduino.svg?branch=master)](https://travis-ci.org/HackerSpaceMaringa/FutebolRobosArduino)

O projeto Futebol de Robôs surgiu da parceria do HackerSpace Maringá com o Professor Nardênio Almeida Martins, do Departamento de Informática (DIN) da Universidade Estadual de Maringá (UEM). O projeto inclui, desenvolver os circuitos, PCB, firmware (no microcontrolador) e software (com as estratégias e visão computacional). Devido a graduação de vários membros, o projeto caminha dentro do possível. Atualmente, foram impressas as PCBs da v2, feito o firmware v1 e software de visão computacional.  

Projeto completo do Futebol de Robôs mantido pelo Hackerspace Maringá.

## Índice

- [Sobre](#sobre)
- __O Projeto__
    - [Hardware](#hardware)
        - [Microcontrolador](#microcontrolador)
        - [Comunicação](#comunicação)
        - [Controle dos Motores](#controle-dos-motores)
        - [Monitoramento da Bateria](#monitoramento-da-bateria)
    - [Software](#software)
- [Avanço do Projeto](#avanço-do-projeto)
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

TODO

### Créditos
- [Caio Henrique Segawa Tonetti](https://github.com/LionsWrath)
- Alexandre Santiago da Silva   
- Kariston Franzin Boveto 
- [Marcos Yukio Siraichi](https://github.com/ysiraichi)
- [Christian Takashi Nakata](https://github.com/Alpaca-kun)
- Fernando Hideo Kokubu
- Willy John Nakamura Goto
- Paulo André Camargo Cocco
- [Jair Guilherme Certorio](https://github.com/jcert)

### Avanço do Projeto

O avanço do projeto pode ser acompanhado no arquivo [TODO.md](https://github.com/HackerSpaceMaringa/FutebolRobosArduino/blob/master/TODO.md)

### Licença
This project extends [GNU GPL v. 3](./LICENSE), so be aware of that, regarding copying, modifying and (re)destributing.
