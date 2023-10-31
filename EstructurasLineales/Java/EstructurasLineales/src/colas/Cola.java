package colas;

public class Cola<T> extends ColaAbstracta<T> {
    private Nodo<T> tope=null;
    private Nodo<T> frente=null;
    private Nodo<T> fin=null;
    private int size=0;

    @Override
    public void add(T dato) {
        Nodo<T> n = new Nodo<>(dato,null);
        if (isEmpty()) {
            frente = n;
        } else {
            fin.setSiguiente(n);
        }
        fin = n;
        size++;
    }

    @Override
    public T poll() {
        if (isEmpty()) return null;
        Nodo<T> aux = frente;
        frente = frente.getSiguiente();
        T dato = aux.getDato();
        aux.setSiguiente(null);
        aux = null;
        size--;
        if (isEmpty()) fin = null;
        return dato;
    }

    @Override
    public T peek() {
        if (isEmpty()) return null;
        return tope.getDato();
    }

    @Override
    public int size() {
        return size;
    }

    @Override
    public boolean isEmpty() {
        return size <= 0;
    }

    private static class Nodo<T> {
        private final T dato;
        private Nodo<T> siguiente;

        public Nodo(T dato, Nodo<T> siguiente) {
            this.dato = dato;
            this.siguiente = siguiente;
        }

        public T getDato() {
            return dato;
        }

        public Nodo<T> getSiguiente() {
            return siguiente;
        }

        public void setSiguiente(Nodo<T> siguiente) {
            this.siguiente = siguiente;
        }
    }
}
