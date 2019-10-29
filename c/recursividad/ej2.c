/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
using namespace std;

int ej2(int);
int main(){

    cout<<ej2(4); 

    return 0;
}

int ej2 (int n){
    int res;

    if (n == 1 ){
        res = 1;
    }
    else {
        res = n * n + ej2(n-1);
    }

    return res;
}