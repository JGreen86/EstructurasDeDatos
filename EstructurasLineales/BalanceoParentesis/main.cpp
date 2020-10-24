#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<char> pila;
  string expresion;
  const char apertura = '(';
  const char cierre = ')';
  int i=0;
  bool loop = true;
  cout<<"Introduce una expresión matemática a evaluar:"<<endl;
  getline (cin, expresion);
  while(i < expresion.size() && loop) {
    switch(expresion[i]) {
      case apertura:
        pila.push(apertura);
        break;
      case cierre:
        if(!pila.empty())
          pila.pop();
        else loop = false;
        break;
      default:
        break;
    }
    i++;
  }
  if(pila.empty() && loop)
    cout<<"Los paréntesis están balanceados."<<endl;
  else
    cout<<"Los paréntesis no están balanceados."<<endl;
  
  return 0;
}