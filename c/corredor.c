#include <iostream>
using namespace std;

int main() {
    int vel, velMax=-1, cont=0;
    float media=0.0;

    do{
        cout<<"Introduce velocidad: ";
        cin>>vel;
        if (vel>-1){
            cont++;
            media = media + vel;
        }
        if (velMax < vel){
            velMax = vel;
        }
    }while(vel!=-1);
    media = media/cont;

    cout<<"Velocidad corredor " <<velMax<<endl;
    cout<<"Velocidad media " <<media<<endl;

    return 0;
}