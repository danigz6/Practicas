#include <iostream>
using namespace std;

int main(){

    int time;
    float speedMax = 30.56;
    float speed;
    float distance;
    
    cout<<"Introduzca la distancia entre las dos cámaras: ";
    cin>>distance;
    
    cout<<"Introduzca la velocidad máxima: ";
    cin>>speed;
    
    cout<<"Introduzca el tiempo que ha tardado en recorrer el coche el tramo: ";
    cin>>time;
    
    if (distance <= 10){
        distance = distance * 1000;
    }
    
    speed = distance / time;
    
    if (speed<=0){
        cout<<"EROR"<<endl;
    }
    else if (speed > speedMax ){
       cout<<"Multa"<<endl;
    }
    else { 
        cout<<"OK"<<endl; 
    }
    
    return 0;
}
