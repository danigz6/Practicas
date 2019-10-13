/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
using namespace std;

char menu();
void triangulo(int);
void cuadrado(int);

int main(){
    char opt;
    int size;

    opt = menu();
    if (opt=='1'){
        cout<<"Introduce tamaño: ";
        cin>>size;
        triangulo(size);
    }
    else{
        cout<<"Introduce tamaño: ";
        cin>>size;
        cuadrado(size)
    }

    return 0;
}

char menu(){
    char option;

    do{
        cout<<"1. Dibujar triángulo"<< endl;
        cout<<"2. Dibujar cuadrado"<< endl;
        cout<<"Opción";
        cin>>option;
    }while (option != '1' && option != '2');
}