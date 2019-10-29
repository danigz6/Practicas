/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
using namespace std;

void ej1(int);
int main(){

    ej1(8);

    return 0;
}

void ej1(int n){

    if (n==1)
        cout<< n << " ";
    else{
        ej1(n - 1);
        cout<< n << " ";
    }

}