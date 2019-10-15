/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */
#include <iostrem>
using namespace std;


int main(){
    int ;



    return 0;
}

void alfin(int fila, int col){
    int i, j;

    int=fila;
    int=col;
    //diagonal superior izquierda
    while (i>1 && j>1){
        i--;
        j--;
        cout<<"("<< i << ","<< j <<endl;
    }
    //diagonal superior derecha
    while (i>1 && j <8){
        i--;
        j++;
        cout<<"("<< i << ","<< j <<endl;

    }
}