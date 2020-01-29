/* Examen inf. ej.3 2014*/

#include <iostream>
#include <cstring>
using namespace std;

void caballo (int fila, int columna){

    if (fila-2>0 && columna-1>0){
        cout << "(" << fila-2 << "," << columna-1 << ")";
    }
    else{
        cout << "no";
    }

}

int main(){ 
   int fila = 0;
   int columna = 0;

   cout << "Introduce fila: ";
   cin >> fila;

   cout << "Introduce columna: ";
   cin >> columna;

return 0;
}


