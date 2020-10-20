#include <iostream>
using namespace std;

int main() {    
    int x;
    x = 5;

    int *p; // p es un puntero a entero, es decir, p va a almacenar direcciones de memoria
    // de tipo entero
    p = &x; // p almacena la dirección de memoria de x, es decir, p apunta a x

    *p = 8;

    cout<<"x = "<<x<<endl;
    cout<<"p = "<<p<<endl<<"y la direccion de memoria de x es "<<&x<<endl;
    cout<<"El contenido en la direccion de memoria p = "<<p<<" es "<<*p<<endl;
    return 0;
}