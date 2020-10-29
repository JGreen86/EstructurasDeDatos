#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> cola;

  cola.push(1);
  cola.push(2);
  cola.push(3);

  cout<<cola.front()<<endl;
  cola.pop();
  cout<<cola.front()<<endl;
  cola.pop();
  cout<<cola.front()<<endl;
  cola.pop();

  if(!cola.empty())
    cout<<cola.front()<<endl;
  else cout<<"Cola vacia"<<endl;
}