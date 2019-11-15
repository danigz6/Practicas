/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */
   
#include <iostream>
using namespace std;

void leeUsuario (int &numero, int &tam);
int sumaDigitos (int);
void dibujaIdenticon (int, int);

int main() {
    int numero, tam;

    leeUsuario(numero, tam);
    dibujaIdenticon(numero, tam);

    return 0;
}

void leeUsuario(int &numero, int &tam)
{
    do {
        cout << "Introduce un número positivo: ";
        cin >> numero;
    } while (numero <= 0);

    do {
        cout << "Tamaño del identicon: ";
        cin >> tam;
    } while (tam < 5 || tam > 20);
}

int sumaDigitos(int numero)
{
    int suma = 0;
    do {
        suma += numero%10;
        numero /= 10;
    } while (numero > 0);

    return suma;
}

void dibujaIdenticon(int numero, int tam) {
    int i, j;

    cout << "+";
    for (i=0; i<(tam-2); i++) {
        cout << "-";
    }
    cout << "+" << endl;

    cout << "+";
    for (i=0; i<(tam-2); i++) {
        cout << "-";
    }
    cout << "+" << endl;
}

