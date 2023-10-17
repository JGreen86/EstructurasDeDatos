package pilas;

public class Pila<T> extends PilaAbstracta<T> {
    private Nodo<T> tope=null;
    private int size=0;

    @Override
    public void push(T dato) {
        Nodo<T> n = new Nodo<>(dato,tope);
        tope = n;
        size++;
    }

    @Override
    public T pop() {
        if (isEmpty()) return null;
        Nodo<T> aux = tope;
        tope = tope.getSiguiente();
        T dato = aux.getDato();
        aux = null;
        size--;
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
        private final Nodo<T> siguiente;

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
    }
}
