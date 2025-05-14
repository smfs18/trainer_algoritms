#include<iostream>
#include<cmath>
using namespace std;

struct Ponto
{
    int x;
    int y;
};

int main(){
    float distancia;
    int sub_pont_x;
    int sub_pont_y;
    Ponto p1; //(4, 3)
    Ponto p2; //(5, 6)
    p1.x = 4;
    p1.y = 3;
    p2.x = 5;
    p2.y = 6;

    sub_pont_x = pow(p2.x - p1.x, 2);
    sub_pont_y = pow(p2.y - p1.y, 2);
    
    distancia = sqrt(sub_pont_x + sub_pont_y);
    cout<< distancia;

    return 0;
}