#include <iostream>
using namespace std;

void hanoi(int t1, int t2, int t3, int n) {
  if(n == 1) { // caso base
    cout<<"Mover disco "<<n<<" de la torre "<<t1<<" a la torre "<<t3<<endl;
  } else { // caso recursivo
    hanoi(t1, t3, t2, n-1);
    cout<<"Mover disco "<<n<<" de la torre "<<t1<<" a la torre "<<t3<<endl;
    hanoi(t2, t1, t3, n-1);
  }
}

int main() {
  int t1 = 1;
  int t2 = 2;
  int t3 = 3;
  int n = 3; // discos
  hanoi(t1, t2, t3, n);
}