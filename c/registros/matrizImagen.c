/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

const int MAX = 40;

typedef struct{
    int r;
    int g;
    int b;
}TPixel;

typedef TPixel TMat[MAX][MAX];

void rellena (TMat);
void procesa (TMat);
void muestra (TMat);

int main (){
    TMat mat;

    srand(time(NULL));

    rellena(mat);
    muestra(mat);
    procesa(mat);
    cout << endl;
    muestra(mat);

return 0;
}
//Rellenar con valores aleatorios
void rellena (TMat m){
    int i=0, j=0;

    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            m[i][j].r=rand()%256;
            m[i][j].g=rand()%256;
            m[i][j].b=rand()%256;
        }
    }
}
//Muestra el contenido de la matriz
void muestra (TMat m){
    int i, j;

    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            cout << "(" << m[i][j].r << "," << m[i][j].g << "," << m[i][j].b << ") ";
            cout << endl;
        }
    }
}
//Recorre la matriz y cambia el canal de rojo 
void procesa (TMat m){
    int i, j, k, l, rMax, fMax, cMax;

    for (i=0; i<MAX; i++){
        for (j=0; j<MAX; j++){
            rMax = -1;
            m[i][j].r = rMax;
            for (k=i-1; k<=i+1; k++){
                for (l=j-1; l<=j+1; l++){
                    if (k>=0 && k<MAX && l>=0 && l<MAX){ //posición valida
                        if (m[k][l].r > rMax){
                            rMax = m[k][l].r;
                            fMax=k; //Indica la fila con el rojo más alto de los vecinos 
                            cMax=l; //Indica la columna con el rojo más alto 
                        }
                    }
                }
            }
        }
    }
}