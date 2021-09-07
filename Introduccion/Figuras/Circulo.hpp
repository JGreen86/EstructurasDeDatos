#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.hpp"

#define PI 3.141592

class Circulo: public Figura{
    public:
    Circulo(){};
    Circulo(double radio);
    double Perimetro();
    double Area();
};

Circulo::Circulo(double radio) {
    this->x = radio;
};
double Circulo::Perimetro(){
    return 2*PI*x;
};
double Circulo::Area(){
    return PI*x*x;
};

#endif