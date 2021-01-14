#include <iostream>
#include <string>
#include <list>

class Automovil
{
private:
    std::string modelo;
    std::string marca;
    std::string color;
    int numeroPuertas;
    int anio;

public:
    Automovil();
    Automovil(std::string _modelo, std::string _marca, std::string _color, int _numeroPuertas, int _anio) {
        modelo = _modelo;
        marca = _marca;
        color = _color;
        numeroPuertas = _numeroPuertas;
        anio = _anio;
    }

    std::string getModelo() {
        return modelo;
    }
    std::string getMarca() {
        return marca;
    }
    std::string getColor() {
        return color;
    }
    int getNumPuertas() {
        return numeroPuertas;
    }
    int getAnio() {
        return anio;
    }
    void setModelo(std::string _modelo) {
        modelo = _modelo;
    }
    void setMarca(std::string _marca) {
        marca = _marca;
    }
    void setColor(std::string _color) {
        color = _color;
    }
    void setNumPuertas(int _numeroPuertas) {
        numeroPuertas = _numeroPuertas;
    }
    void setAnio(int _anio) {
        anio = _anio;
    }
    //
    void imprimir() {
        std::cout<<marca<<" "<<modelo<<" "<<anio<<", color "<<color<<" con "<<numeroPuertas<<" puertas"<<std::endl;
    }
    // comparador por default
    bool operator <(Automovil automovil) {
        return anio < automovil.getAnio();
    }
};
// ordenar por año en orden descendente
bool ordenarDescendente(Automovil auto1, Automovil auto2) {
    return auto1.getAnio() > auto2.getAnio();
}
// comparar autos por marca, ordenar por marca de manera ascendente
struct compararPorMarca {
    bool operator()(Automovil auto1, Automovil auto2) {
        return auto1.getMarca() < auto2.getMarca();
    }
};

void imprimir(std::list<Automovil> lista) {
    std::list<Automovil>::iterator it;
    for(it = lista.begin(); it != lista.end(); it++) {
        it->imprimir();
    }
}
int main() {
    std::list<Automovil> listaDeAutos = {
        Automovil("versa","nissan","blanco",4,2015),
        Automovil("sentra","nissan","gris",4,2001),
        Automovil("tacoma","toyota","blanco",2,2010),
        Automovil("bronco","ford","rojo",2,1998),
        Automovil("bocho","volkswagen","azul",2,1984)
    };

    listaDeAutos.sort(compararPorMarca()); // ordenar por año de menor a mayor
    imprimir(listaDeAutos);




    // función lambda, ordenar por color de manera ascendente
    /*listaDeAutos.sort([](Automovil auto1, Automovil auto2) {
        return auto1.getColor() < auto2.getColor();
    });
    imprimir(listaDeAutos);*/
    return 0;
}