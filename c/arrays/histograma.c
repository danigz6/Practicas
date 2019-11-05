/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const TAMLISTA=100;
const TAMHISTO=10;

void genLista (int[]);
void calHis (int [], int []);

int main(){
    int lista[TAMLISTA];
    int histo[TAMHISTO];

    srand(time(NULL));
    genLista(lista);
    calHist(lista, histo);

    return 0;
}

void genLista (int[]lista){
    int i;

    for (i=0; i<TAMLISTA; i++){
        lista[i]=rand()%10+1;
    }

}

void calHis (int lista[], int h[]){
    int i, aux;

    for (i=0;i<TAMHISTO;i++){
        h[i]=0;
    }
    for (i=0; i<TAMLISTA; i++){
        aux=lista[i];
        h[aux-1]++;
    }
}