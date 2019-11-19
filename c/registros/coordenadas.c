/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
#include <math.h>
using namespace std;

typedef struct {
    float x;
    float y;
}TPunto;

float longitud (TPunto, TPunto);
float pendiente (TPunto, TPunto);
void leePunto (TPunto &);
bool iguales (TPunto, TPunto);

int main(){
    TPunto p1, p2;

    do{
        leePunto (p1);
        leePunto (p2);
        cout << "La Longitud del segmento es: "<< longitud (p1,p2) << endl;
        if (p1.x != p2.x){
            cout << "La Pendiente es: " << pendiente (p1,p2) << endl;
        }
    }while (!iguales(p1,p2));


    return 0;
}

float longitud (TPunto p1, TPunto p2){
    float res;

    res = sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2))

    return res;
}

float pendiente (TPunto p1, TPunto p2){
    float res;

    res = (p2.y-p1.y) / (p2.x-p1.x);

    return res;
}

void leePunto (TPunto &p){

    cout << "Introduce la cordenada x: ";
    cin >> p.x;
    
    cout << "Introduce la cordenada y: ";
    cin >> p.y;
}

bool iguales (TPunto p1, TPunto p2){
    bool res;

    if (p1.x == p2.x && p1.y == p2.y){
        res = true;
    }
    else {res = false}

    return res;
}