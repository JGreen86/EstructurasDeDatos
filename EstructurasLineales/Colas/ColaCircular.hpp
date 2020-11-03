#ifndef COLA_CIRCULAR_H
#define COLA_CIRCULAR_H

#define CAPACIDAD_INCREMENTO 12

template <class T>
class ColaCircular {
    private:
        int frente;
        int final;
        int tam;
        int capacidad;
        T *nodos;

        void resize();
        
    protected:
        int siguiente(int r)
        {
            return (r+1) % capacidad;
        }
    public:
        ColaCircular() {
            capacidad = 0;
            frente = 0;
            final = capacidad - 1;
            tam = 0;
            nodos = new T[capacidad];
        }
        void push(T d);
        void pop();
        T front();
        T back();
        bool full();
        bool empty();
        int size();
        void clear();
        ~ColaCircular() {
            clear();
        }
};
// implementacion
template <class T>
void ColaCircular<T>::push(T d) {
    if(full()) {
       resize();
    }
    final = siguiente(final);
    nodos[final] = d;
    tam++;
}
template <class T>
void ColaCircular<T>::pop() {
    if(!empty()) {
        frente = siguiente(frente);
        tam--;
    }
}
template <class T>
T ColaCircular<T>::front() {
    if(!empty()) return nodos[frente];
    T *t;
    return *t;
}
template <class T>
T ColaCircular<T>::back() {
    if(!empty()) return nodos[final];
    T *t;
    return *t;
}
template <class T>
bool ColaCircular<T>::empty() {
    return tam == 0;
}
template <class T>
bool ColaCircular<T>::full() {
    return tam == capacidad;
}
template <class T>
int ColaCircular<T>::size() {
    return tam;
}
template <class T>
void ColaCircular<T>::resize() {
    int incremento = capacidad < (CAPACIDAD_INCREMENTO / 2) ? 
    CAPACIDAD_INCREMENTO : capacidad >> 1;

    int n = capacidad;
    capacidad = capacidad + incremento;
    T *temp = new T[capacidad];
    for(int i=0; i<n; i++) {
        temp[i] = nodos[i];
    }
    delete[] nodos;
    nodos = temp;
}
template <class T>
void ColaCircular<T>::clear() {
    delete[] nodos;
}
#endif