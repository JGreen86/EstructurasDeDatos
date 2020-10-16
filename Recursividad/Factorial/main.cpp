#include <iostream>

using namespace std;

int factorialIterativo(int n) {
    int fact = 1;
    while(n > 1) {
        fact = fact * n;
        n = n - 1;
    }
    return fact;
}
int factorialRecursivo(int n) {
    if(n == 0 || n == 1) return 1;

    return factorialRecursivo(n - 1) * n;
}

int main() {

    int n = 5;

    int f1 = factorialIterativo(n);
    int f2 = factorialRecursivo(n);

    cout<<"El factorial iterativo de n = "<<n<<" es "<<f1<<endl;
    cout<<"El factorial recursivo de n = "<<n<<" es "<<f2<<endl;
    
    return 0;
}