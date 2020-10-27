#include <iostream>
#include "Pila.hpp"
using namespace std;

int main() {

    Pila<int> pila;
    pila.push(1);
    pila.push(2);
    pila.push(3);

    cout<<"Dato = "<<pila.top()<<endl;
    pila.pop();
    cout<<"Dato = "<<pila.top()<<endl;
    pila.pop();
    cout<<"Dato = "<<pila.top()<<endl;
    pila.pop();

    if(!pila.empty())
        cout<<pila.top()<<endl;
    else cout<<"Pila vacia."<<endl;

    return 0;
}

