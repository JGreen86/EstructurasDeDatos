#include "Figura.hpp"
#include "Circulo.hpp"
#include "Cuadrado.hpp"
#include <iostream>

int main(){

    double lado=5.0,radio=4.0;

    Circulo circ1(radio);
    Cuadrado cuad1(lado);

    std::cout<<"Perimetro del cuadrado: "<<cuad1.Perimetro()<<std::endl;
    std::cout<<"Area del cuadrado: "<<cuad1.Area()<<std::endl;
    
    std::cout<<"Perimetro del circulo: "<<circ1.Perimetro()<<std::endl;
    std::cout<<"Area del circulo: "<<circ1.Area()<<std::endl;

    return 0;
}