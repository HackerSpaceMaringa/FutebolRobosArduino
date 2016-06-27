#ifndef MOTOR_H
#define MOTOR_H

class Motor {
  private:
    int DirectionPin[2];
    int PowerPin;

  public:
    Motor(int, int, int);

    void parar();  
    void giraFrente();
    void giraTras();
    void setVelocidade(int);

};

void setupMotor();

void mtViraParaEsquerda();
void mtViraParaDireita();
void mtVaiParaFrente();
void mtVaiParaTras();
void mtParar();
void mtSetVelocidade(int, int);

#endif
