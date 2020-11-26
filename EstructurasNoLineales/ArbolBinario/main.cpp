#include <iostream>
#include "ABB.hpp"

using namespace std;

int main() {
    ABB<string> arbol;

    arbol.add(50,"jorge");
    arbol.add(25,"luis");
    arbol.add(80,"maria");
    arbol.add(10,"cleopatra");
    arbol.add(40,"manuel");
    arbol.add(70,"enrique vii");
    arbol.add(95,"alejandra");

    arbol.remove(80);
    arbol.printInOrden();

    return 0;
}