#ifndef ABB_H
#define ABB_H

template <class T>
class ABB {
    private:
        class Nodo {
            public:
                int key;
                T value;
                Nodo *izquierdo;
                Nodo *derecho;
                Nodo(int key, T value) {
                    this->key = key;
                    this->value = value;
                    this->izquierdo = nullptr;
                    this->derecho = nullptr;
                }
        };
        Nodo *raiz;

        void generarPadre(Nodo *raiz, Nodo *&padre, int key);
        void buscarNodo(Nodo *&raiz, Nodo *&padre, int key);
        void buscarSucesor(Nodo *&padre, Nodo *&sucesor);
        void eliminarNodo(Nodo *&padre, Nodo *&aux, int nHijos);
        void inorden(Nodo *raiz);
        void preorden(Nodo *raiz);
        void postorden(Nodo *raiz);
        void clear(Nodo *raiz);
        int obtenerNumHijos(Nodo nodo);

    public:
        ABB(){
            raiz = nullptr;
        }
        void add(int key, T value);
        void remove(int key);
        T get(int key);
        void set(int key, T value);
        bool empty();
        void printInOrden();
        void printPreOrden();
        void printPostOrden();
        void clear();
        ~ABB(){
            clear();
        }
};
/*
 * Métodos públicos
 */
template <class T>
void ABB<T>::add(int key, T value) {
    Nodo *n = new Nodo(key, value);
    if(empty()) {
        raiz = n;
        return;
    } // si el arbol no esta vacio
    Nodo *padre = nullptr;
    generarPadre(raiz, padre, key);

    if(padre == nullptr) return; // el nodo ya existe, no hacemos nada
    if(key < padre->key) padre->izquierdo=n;
    else padre->derecho=n;  
}
template <class T>
T ABB<T>::get(int key) {
    Nodo *aux = raiz;
    while(aux != nullptr && aux->key != key) {
        if(key < aux->key) aux=aux->izquierdo;
        else if(key > aux->key) aux=aux->derecho;
    }
    if(aux != nullptr) return aux->value;
    T *t;
    return *t;
}
template <class T>
void ABB<T>::remove(int key) {
    Nodo *aux = raiz;
    Nodo *padre = nullptr;

    buscarNodo(aux, padre, key);
    if(aux == nullptr) return; // el nodo no existe en el arbol
    // nodo encontrado
    int nHijos = obtenerNumHijos(*aux);
    eliminarNodo(padre, aux, nHijos);
}
template <class T>
bool ABB<T>::empty() {
    return raiz == nullptr;
}
template <class T>
void ABB<T>::printInOrden() {
    ABB<T>::inorden(raiz);
}
template <class T>
void ABB<T>::printPreOrden() {
    ABB<T>::preorden(raiz);
}
template <class T>
void ABB<T>::printPostOrden() {
    ABB<T>::postorden(raiz);
}
template <class T>
void ABB<T>::clear() {
    clear(raiz);
}
/*
 * Métodos privados
 */
template <class T>
void ABB<T>::generarPadre(Nodo *raiz, Nodo *&padre, int key) {
    Nodo *actual = raiz;

    while(actual != nullptr && actual->key != key) {
        padre = actual;
        if(key < actual->key) actual=actual->izquierdo;
        else if(key > actual->key) actual=actual->derecho;
    }
    if(actual != nullptr) padre = nullptr; // el nodo ya existe
}
template <class T>
void ABB<T>::buscarNodo(Nodo *&raiz, Nodo *&padre, int key) {
    Nodo *&aux = raiz;
    while(aux != nullptr && aux->key != key) {
        padre = aux;
        if(key < aux->key) aux=aux->izquierdo;
        else if(key > aux->key) aux=aux->derecho;
    }
}
template <class T>
void ABB<T>::buscarSucesor(Nodo *&padre, Nodo *&sucesor) {
    Nodo *siguiente=sucesor->derecho;
    while(siguiente != nullptr) {
        padre = sucesor;
        sucesor = siguiente;
        siguiente = siguiente->derecho;
    }
}
template <class T>
void ABB<T>::eliminarNodo(Nodo *&padre, Nodo *&aux, int nHijos) {
    switch (nHijos)
    {
    case 0: // nodo hoja
        if(aux->key < padre->key) padre->izquierdo=nullptr;
        else padre->derecho=nullptr;
        delete aux;
        break;
    case 1: // 1 hijo
        if(aux->key < padre->key) {
            if(aux->izquierdo != nullptr) padre->izquierdo=aux->izquierdo;
            else padre->izquierdo=aux->derecho;
        } else {
            if(aux->izquierdo != nullptr) padre->derecho=aux->izquierdo;
            else padre->derecho=aux->derecho;
        }
        delete aux;
        break;
    case 2: // 2 hijos
        padre = aux;
        Nodo *sucesor;
        sucesor = padre->izquierdo;
        buscarSucesor(padre, sucesor);
        if(sucesor->izquierdo != nullptr) padre->derecho=sucesor->izquierdo;
        else if(sucesor->key > padre->key) padre->derecho=nullptr;
        else if(sucesor->key < padre->key) padre->izquierdo=nullptr;
        aux->key=sucesor->key;
        aux->value=sucesor->value;
        delete sucesor;
        break;
    default:
        break;
    }  
}
template <class T>
void ABB<T>::inorden(Nodo *raiz) {
    if(raiz != nullptr) {
        inorden(raiz->izquierdo);
        std::cout<<"Key = "<<raiz->key<<" Value = "<<raiz->value<<std::endl;
        inorden(raiz->derecho);
    }
}
template <class T>
void ABB<T>::preorden(Nodo *raiz) {
    if(raiz != nullptr) {
        std::cout<<"Key = "<<raiz->key<<" Value = "<<raiz->value<<std::endl;
        preorden(raiz->izquierdo);
        preorden(raiz->derecho);
    }
}
template <class T>
void ABB<T>::postorden(Nodo *raiz) {
    if(raiz != nullptr) {
        postorden(raiz->izquierdo);
        postorden(raiz->derecho);
        std::cout<<"Key = "<<raiz->key<<" Value = "<<raiz->value<<std::endl;
    }
}
template <class T>
void ABB<T>::clear(Nodo *raiz) {
    if(raiz != nullptr) {
        clear(raiz->izquierdo);
        clear(raiz->derecho);
        delete raiz;
    }
}
template <class T>
int ABB<T>::obtenerNumHijos(Nodo nodo) {
    if(nodo.izquierdo == nullptr && nodo.derecho == nullptr) return 0;
    if(nodo.izquierdo != nullptr && nodo.derecho != nullptr) return 2;
    return 1;
}
#endif