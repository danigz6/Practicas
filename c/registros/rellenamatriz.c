/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
#include <math.h>
using namespace std;

const int NFIL = 10;
const int NCOL = 8;

void matZigzag (int mat[][NCOL]){
    int cont=1;
    int i=0, j;

    for (j=0; j<NCOL; j++){
        if (j%2==0){
            while (i<NFIL){
                mat[i][j]=cont;
                cont++;
                i++;
            }
        }
        else {}
    }
    
}

int main (){


    return 0;
}