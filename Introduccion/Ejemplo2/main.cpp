#include <iostream>
#include <math.h>

using namespace std;

class Punto {
    private:
        float x;
        float y;
    public:
        Punto(float x, float y) {
            this->x = x;
            this->y = y;
        }
        float distancia(Punto p) {
            float dist;
            dist = ((x - p.x) * (x - p.x)) + ((y - p.y) * (y - p.y));
            dist = sqrt(dist);

            return dist;
        }
};

int main(){
    float dist;
    // primer punto
    Punto punto1(1.0,1.0);
    // segundo punto
    Punto punto2(1.0,3.0);

    dist = punto1.distancia(punto2);    

    cout<<"Distancia = "<<dist<<endl;

    return 0;
}