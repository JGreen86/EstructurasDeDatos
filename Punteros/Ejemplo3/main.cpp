#include <iostream>
using namespace std;

int main() {

    int x[5] = {1,2,3,4,5};
    int *p = x; // el nombre de un arreglo es la direccion de memoria donde inicia ese arreglo,
    // entonces podemos decir que p apunta a la direccion de memoria donde inicia el arreglo
    
    cout<<"Imprimimos el arreglo x a través de p"<<endl;
    for(int i=0; i<5; i++) {
        cout<<*(p+i)<<endl;
    }
    // Reservamos 5 espacios en memoria de manera dinamica para el puntero y
    int *y = new int[5];
    cout<<"Asignamos e imprimimos valores para y"<<endl;
    for(int i=0; i<5; i++) {
        *(y+i) = i;
        cout<<*(y+i)<<endl;
    }
    // liberar espacio en memoria reservado para la variable y
    delete[] y;

    return 0;
}