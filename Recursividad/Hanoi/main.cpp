#include <iostream>
using namespace std;

void hanoi(int a, int b, int c, int n) {
  if(n == 1) { // caso base
    cout<<"Mover disco "<<n<<" de la torre "<<a<<" a la torre "<<c<<endl;
  } else { // caso recursivo
    hanoi(a, c, b, n-1);
    cout<<"Mover disco "<<n<<" de la torre "<<a<<" a la torre "<<c<<endl;
    hanoi(b, a, c, n-1);
  }
}

int main() {
  int a = 1;
  int b = 2;
  int c = 3;
  int n = 3; // discos
  hanoi(a, b, c, n);
}