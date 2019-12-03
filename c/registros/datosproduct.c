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
void baja(TAlmacen, int &);
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
                      break;
            case '3': cout << "El valor es :" << calVal(prods,numProd);
                      break;
        }
    }while(opcion!='4');

    return 0;
}

char menu(){
    char op;

    cout << endl;
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
//Añadir productos al vector 
void alta(Talmacen prods, int &num){

    cout << "Código: ";
    cin >> prods[num].cod;

    cout << "Nombre: ";
    cin >> prods[num].nombre;

    cout << "Precio: ";
    cin >> prods[num].precio;

    cout << "Unidades: ";
    cin >> prods[num].unidades;
}

void baja(TAlmacen prods, int num){
    int codigo=0, i=0;

    cout << "Código a dar de baja: ";
    cin >> codigo;

    while (i<num && codigo!=prods[i].cod){
        i++;
        if (i==num){ //El producto no existe
         cout << "Error: el producto no existe";
        }else{
            for (j=i; j<num-1; j++){ //Desplazamos los productos 
                prods[j]=prods[j+1]
            }
            num--; // Decrementamos el contador de productos
        }
    }
}

float calcVal(TAlmacen prods, int num){
    int i=0;
    float summaPrecios=0.0;

    for (i=0; i<num; i++){
        summaPrecios=summaPrecios+prods[i].precio*prods[i].unid;
    }
    return summaPrecios;
}