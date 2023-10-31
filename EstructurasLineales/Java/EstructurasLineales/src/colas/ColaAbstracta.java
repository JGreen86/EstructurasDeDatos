package colas;

public abstract class ColaAbstracta<T> {

    abstract void add(T e);
    abstract T poll();
    abstract T peek();
    abstract int size();
    abstract boolean isEmpty();
}
