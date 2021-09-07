#ifndef CUADRADO_H
#define CUADRADO_H

#include "Figura.hpp"

class Cuadrado: public Figura{
    public:
    Cuadrado(double lado);
    double Perimetro();
    double Area();
};

Cuadrado::Cuadrado(double lado) {
    this->x = lado;
}
double Cuadrado::Perimetro() {
    return 4*x;
};
double Cuadrado::Area() {
    return x*x;
};

#endif