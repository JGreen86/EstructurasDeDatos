#ifndef PILA_H
#define PILA_H

template <class T>
class Pila {
    private:
        class Nodo {
            public:
                T dato;
                Nodo *siguiente;
                Nodo() {
                }
                Nodo(T dato, Nodo *siguiente) {
                    this->dato = dato;
                    this->siguiente = siguiente;
                }
        };
        Nodo *tope;
        int tam;

    public:
        Pila(){
            tope = nullptr;
            tam = 0;
        }
        void push(T d);
        void pop();
        T top();
        bool empty();
        int size();
        void clear();
        ~Pila(){
            clear();
        }
};
// implementacion
template <class T>
void Pila<T>::push(T d) {
    Nodo *n = new Nodo(d, tope);
    tope = n;
    tam++;
}
template <class T>
void Pila<T>::pop() {
    Nodo *aux = tope;
    tope = tope->siguiente;
    delete aux;
    tam--;
}
template <class T>
T Pila<T>::top() {
    return tope->dato;
}
template <class T>
bool Pila<T>::empty() {
    return tope == nullptr;
}
template <class T>
int Pila<T>::size() {
    return tam;
}
template <class T>
void Pila<T>::clear() {
    Nodo *aux;
    while(!empty()) {
        aux = tope;
        tope = tope->siguiente;
        delete aux;
        tam--;
    }
}
#endif