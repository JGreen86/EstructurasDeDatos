#include <iostream>
#include "Cola.hpp"
#include "ColaCircular.hpp"

using namespace std;

int main() {
    // Cola simple enlazada
    cout<<"Cola simple enlazada"<<endl;
    Cola<int> cola;
    cola.push(1);
    cola.push(2);
    cola.push(3);

    cout<<cola.front()<<endl;
    cola.pop();
    cout<<cola.front()<<endl;
    cola.pop();
    cout<<cola.front()<<endl;
    cola.pop();

    if(!cola.empty())
        cout<<cola.front()<<endl;
    else cout<<"Cola vacia."<<endl;

    // Cola circular basada en arreglo
    ColaCircular<int> colaCircular;
    cout<<"Cola circular"<<endl;
    for(int i=0;i<100;i++) {
        colaCircular.push(i);
    }
    for(int i=0;i<100;i++) {
        cout<<colaCircular.front()<<endl;
        colaCircular.pop();
    }

    return 0;
}