#ifndef COLA_H
#define COLA_H

template <class T>
class Cola {
    private:
        class Nodo {
            public:
                T dato;
                Nodo *siguiente;
                Nodo(T dato) {
                    this->dato = dato;
                    this->siguiente = nullptr;
                }
        };
        Nodo *frente;
        Nodo *final;
        int tam;

    public:
        Cola(){
            frente = nullptr;
            final = nullptr;
            tam = 0;
        }
        void push(T d);
        void pop();
        T front();
        T back();
        bool empty();
        int size();
        void clear();
        ~Cola(){
            clear();
        }
};
// implementacion
template <class T>
void Cola<T>::push(T d) {
    Nodo *n = new Nodo(d);
    if(empty()) {
        frente = n;
    } else {
        final->siguiente = n;
    }
    final = n;
    tam++;
}
template <class T>
void Cola<T>::pop() {
    Nodo *aux = frente;
    frente = frente->siguiente;
    delete aux;
    tam--;
}
template <class T>
T Cola<T>::front() {
    return frente->dato;
}
template <class T>
T Cola<T>::back() {
    return final->dato;
}
template <class T>
bool Cola<T>::empty() {
    return frente == nullptr;
}
template <class T>
int Cola<T>::size() {
    return tam;
}
template <class T>
void Cola<T>::clear() {
    Nodo *aux = nullptr;
    while(!empty()){
        aux = frente;
        frente = frente->siguiente;
        delete aux;
        tam--;
    }
}

#endif