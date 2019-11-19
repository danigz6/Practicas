/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
using namespace std;

typedef char TCadena[15];

typedef struct {
    TCadena nombre;
    TCadena ape1;
    TCadena ape2;
}TNomPer;

typedef struct {
    int num;
    char let;
}TDni;

typedef struct {
    int dia;
    int mes;
    int anyo;
}TFecha;

typedef struct {
    TCadena nom;
    TFecha fNac;
    TCadena ciu;
    TCadena prov;
}THijo;

typedef struct {
    TNomPer nom;
    TDni dni;
    TFecha fExp;
    TFecha fVal;
    TNomPer padre;
    TNomPer madre;
    TCadena ciuNac;
    TCadena provNac;
    TCadena ciuRes;
    TCadena provRes;
    THijo hijos[5];
    int numHijos;
    TFecha fNac;
}TPersona;

typedef TPersona TPers90[90];

int main (){


    return 0;
}