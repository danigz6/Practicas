/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
using namespace std;

const int Max = 100;

typedef char TCadena[10];

typedef struct {
    int cod;
    float precio;
    TCadena nombre;
    int unid;
}TProducto;

typedef TProducto TAlmacen[Max];

char menu();
void alta(Talmacen, int);
void baja(TAlmacen, int);
float calcVal(TAlmacen, int);

int main(){
    TAlmacen prods;
    int numProd=0;
    char opcion;

    do{
        opcion=menu();
        switch (opcion){
            case '1': alta(prods,numProd);
                      numProd++;
                      break;
            case '2': baja(prods, numProd);
                      numProd--;
                      break;
            case '3': cout << "El valor es :" << calVal(prods,numProd);
                      break;
        }
    }while(opcion!='4');

    return 0;
}

char menu(){
    char op;

    do{
        cout <<"1. Dar de alta" << endl;
        cout <<"2. Dar de baja" << endl;
        cout <<"3. Calcular el valor de los productos" << endl;
        cout <<"4. Salir" << endl;
        cout <<"Introduce opción" << endl;
        cin >> op;

    }while();

    return ;
}