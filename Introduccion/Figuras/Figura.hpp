#ifndef FIGURA_H
#define FIGURA_H

class Figura {
    protected:
        double x=0;
    public:
        Figura(){};
        Figura(double cx);
    virtual double Perimetro() = 0;
    virtual double Area() = 0;
};

Figura::Figura(double cx){
    this->x = cx;
};

#endif