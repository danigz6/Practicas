/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
using namespace std;

void ej3(int);
int main(){

    ej3 (2897);

    return 0;
}

void ej3(int n){

    if (n>0){
        cout<< n%10;
        ej(n/10);
    }

}

