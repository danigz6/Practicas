/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
using namespace std;

const int Max = 2;

typedef char TCadena[50];
typedef char TIsbn[15];

typedef struct {
    TCadena tit;
    TIsbn isbn;
    TCadena autor;
    int fecha[3]:
    int numPag;
}TLibro;

typedef TLibro TLibros[Max];

void rellLibros(TLibros);

int main(){
    TLibros lib;

    rellLibros(lib);


    return 0;
}

void rellLibros(TLibros libros){
    int i;

    for (i=0; i<MAX; i++){
        
        cout << "Título :";
        cin.getline(libros[i].tit,50);
        cout << "ISBN :";
        cin >> libros[i].isbn;
        cin.get();
        cout << "Autor :";
        cin.getline(libros[i].autor, 50);
        cout << "Día :";
        cin >> libros[i].fecha[0];
        cout << "Mes :";
        cin >> libros[i].fecha[1];
        cout << "Año :";
        cin >> libros[i].fecha[2];
        cout << "Número de páginas :";
        cin >> libros[i].numPag;      
        cin.get();
    }
}