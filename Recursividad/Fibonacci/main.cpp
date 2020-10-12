#include <iostream>

using namespace std;

int fibonacciIterativo(int n) {
    if(n == 0 || n == 1) return n;

    int a = 0;
    int b = 1;
    int c;

    for(int i=0; i<=n-2; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}
int fibonacciRecursivo(int n) {
    if(n == 0 || n == 1) return n;

    return fibonacciRecursivo(n-1) + fibonacciRecursivo(n-2);
}

int main() {

    int n = 8;

    int f1 = fibonacciIterativo(n);
    int f2 = fibonacciRecursivo(n);

    cout<<"El término "<<n<<" de la serie de Fibonacci calculado de manera iterativa es "<<f1<<endl;
    cout<<"El término "<<n<<" de la serie de Fibonacci calculado de manera recursiva es "<<f2<<endl;

    return 0;
}