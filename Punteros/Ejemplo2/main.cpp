#include <iostream>
using namespace std;

// paso de argumentos por referencia
void funcionX(int *a, int *b, int *c) {
    *a = *b + *c; // 3 + 4 = 7
    *b = *b + *c; // 3 + 4 = 7
    *c = *c + *c; // 4 + 4 = 8
}
void funcionY(int &a, int &b, int &c) {
    a = b + c; // 3 + 4 = 7
    b = b + c; // 3 + 4 = 7
    c = c + c; // 4 + 4 = 8
}

int main() {
    int x = 5;
    int y = 3;
    int z = 4;

    funcionY(x, y, z);

    cout<<"x = "<<x<<endl;
    cout<<"y = "<<y<<endl;
    cout<<"z = "<<z<<endl;

    return 0;
}