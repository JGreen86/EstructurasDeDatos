#include <iostream>
#include <algorithm>
#include <vector>

void imprimir(std::vector<int> X) {
    for(int i=0; i<X.size()-1; i++) {
        std::cout<<X.at(i)<<", ";
    }
    std::cout<<X.at(X.size()-1)<<std::endl;
}

bool ordenarDescendente(int i, int j) {
    return i > j;
}

int main () {
    // ejemplo 1 - ordenar un vector en orden ascendente
    std::vector<int> v{5,3,1,7,4,2,8,6};

    std::sort(v.begin(), v.end());
    imprimir(v);

    // ejemplo 2 - ordenar un vector en orden descendente
    std::vector<int> v2{5,3,1,7,4,2,8,6};

    std::sort(v2.begin(), v2.end(), ordenarDescendente);
    imprimir(v2);

    return 0;
}