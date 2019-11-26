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

void rellLibros(TLibros &);

int main(){
    TLibros lib;
    int numLib=0;
    char resp;

    do{
        cout << "Quieres rellenar los datos de un libro? (s/n)";
        cin >> resp;
        cin.get();

        if (resp == 's'){
            rellLibro(lib[numLib]);
            numLib++;
        }
        
    }while(resp=='s');

    return 0;
}

void rellLibro(TLibro &libro){
    int i;

    cout << "Título :";
    cin.getline(libro.tit,50);
    cout << "ISBN :";
    cin >> libro.isbn;
    cin.get();
    cout << "Autor :";
    cin.getline(libro.autor, 50);
    cout << "Día :";
    cin >> libro.fecha[0];
    cout << "Mes :";
    cin >> libro.fecha[1];
    cout << "Año :";
    cin >> libro.fecha[2];
    cout << "Número de páginas :";
    cin >> libro.numPag;      
    cin.get();    
}