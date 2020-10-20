#include <iostream>
using namespace std;

class Persona {
    private:
        string nombre;
        int edad;
    public:
        Persona(string nombre, int edad) {
            this->nombre = nombre;
            this->edad = edad;
        }
        void setNombre(string nombre) {
            this->nombre = nombre;
        }
        void setEdad(int edad) {
            this->edad = edad;
        }
        string getNombre() {
            return this->nombre;
        }
        int getEdad() {
            return this->edad;
        }
};

int main() {
    Persona persona1 = Persona("Homero Simpson",47);
    Persona *p = &persona1; // p apunta a persona1
    cout<<p->getNombre()<<endl;
    cout<<p->getEdad()<<endl;

    Persona *p1 = new Persona("Bart Simpson",10);
    cout<<p1->getNombre()<<endl;
    cout<<p1->getEdad()<<endl;
    delete p1;

    return 0;
}