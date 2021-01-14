#include <iostream>
#include <algorithm>

void imprimir(int X[], int n) {
    for(int i=0; i<n-1; i++) {
        std::cout<<X[i]<<", ";
    }
    std::cout<<X[n-1]<<std::endl;
}

bool ordenarDescendente(int i, int j) {
    return i > j;
}

int main () {
    // ejemplo 1 - ordenar un arreglo en orden ascendente
    int arreglo[] = {5,3,1,7,4,2,8,6};
    int n = sizeof(arreglo)/sizeof(arreglo[0]); // tamaño del arreglo

    std::sort(arreglo,arreglo+n);
    imprimir(arreglo, n);

    // ejemplo 2 - ordenar un arreglo en orden descendente
    int arreglo2[] = {5,3,1,7,4,2,8,6};
    int n2 = sizeof(arreglo2)/sizeof(arreglo2[0]);

    std::sort(arreglo2, arreglo2+n2, ordenarDescendente);
    imprimir(arreglo2, n2);

    return 0;
}