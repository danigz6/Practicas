/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
#include <string.h>
using namespace std;

const int KTAM = 10;

bool esPal (char []);

int main (){
    char cad[KTAM];

    cout<< "Introduce una cadena de caracteres: ";
    cin.getline (cad,KTAM);

    if (esPal (cad)){
        cout<< "es palindromo";
    }
    else 
        cout<< "no es palindromo"; 

    return 0;
}

bool esPal (char []){
    int inicio=0, fin=strlen(c)-1;
    bool test=true;

    while (c[inicio]==c[fin] && inicio<fin){
        inicio++;
        fin--;
    }

    if (c[inicio]!=c[fin]){
        test=false;
    }
    return test;
}
