#include <iostream>
#include <unordered_map>
#include <vector>

class Automovil
{
private:
    std::string noSerie;
    std::string modelo;
    std::string marca;
    std::string color;
    int numeroPuertas;
    int anio;

public:
    Automovil();
    Automovil(std::string _noSerie, std::string _modelo, std::string _marca, std::string _color, int _numeroPuertas, int _anio) {
        noSerie = _noSerie;
        modelo = _modelo;
        marca = _marca;
        color = _color;
        numeroPuertas = _numeroPuertas;
        anio = _anio;
    }

    std::string getNoSerie() {
        return noSerie;
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

void imprimir(std::unordered_map<std::string,Automovil> map) {
    for(auto& x : map) {
        std::cout<<"Número de serie = "<<x.first<<", ";
        x.second.imprimir();
    }
}
int main() {
    std::unordered_map<std::string,Automovil> catalogo;

    std::pair<std::string,Automovil> auto1("JHR451231",Automovil("JHR451231","versa","nissan","blanco",4,2015));

    catalogo.insert(auto1);

    catalogo.insert(
    {
        "ABC45512",
        Automovil("ABC45512","sentra","nissan","gris",4,2001)
    }
    );

    catalogo.insert({
        {"BCA456512",Automovil("BCA456512","tacoma","toyota","blanco",2,2010)},
        {"DAC784512",Automovil("DAC784512","bronco","ford","rojo",2,1998)},
        {"LOL451231",Automovil("LOL451231","bocho","volkswagen","azul",2,1984)}
    });

    imprimir(catalogo);
    return 0;
}