/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
using namespace std;

void calc(int);
int main(){
    int dividendo;
    int divisor;

    calc(dividendo,divisor,coc,res);

    cout<< coc << " " << res;

    return 0;
}

void calc(int dividendo, int divisor, int &coc, int &res){

    coc=0;

    while (dividendo>=divisor){
        coc++;
        dividendo = dividendo - divisor;
    }
    res = dividendo;
}