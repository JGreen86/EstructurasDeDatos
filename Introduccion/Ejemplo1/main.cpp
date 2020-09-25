#include <iostream>
#include <math.h>

using namespace std;

typedef struct Puntos {
    float x;
    float y;
} Punto;

float distancia(Punto punto1,Punto punto2) {
    float dist;
    dist = ((punto2.x - punto1.x) * (punto2.x - punto1.x)) + 
    ((punto2.y - punto1.y) * (punto2.y - punto1.y));
    dist = sqrt(dist);

    return dist;
}

int main(){
    float dist;

    Punto punto1;
    punto1.x = 1.0;
    punto1.y = 1.0;

    Punto punto2;
    punto2.x = 1.0;
    punto2.y = 4.0;

    dist = distancia(punto1,punto2);

    cout<<"distancia = "<<dist<<endl;

    return 0;
}