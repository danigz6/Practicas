/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
using namespace std;

char letDNI(int);

int main(){
    int num;

    cout<<"Introduce un número: ";
    cin>>num;
    cout<<"La letra equivalente a su número es: "<<letDNI(num);
    return 0;
}

char letDNI(int n){
    int rest;
    char letter;

    rest = n % 23;

    switch (rest){
        case 0: letter = 'T';break;
        case 1: letter = 'R';break;
    }

    return letter;
}