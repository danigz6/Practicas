/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

char apuestaUsuario();
char piedraPapelTijera();
void comprobar(char, char, int &,int &, int &, int &);
int main(){
    char usu, maq, play;
    int ronU=0, ronO=0, parU=0, parO=0;

    srand(time(NULL));

    cout<<"¿Quieres jugar? (s/n) ";
    cin>>play;

   while(play=='s'){
       do{
           usu=apuestaUsuario();
           maq=piedraPapelTijera();
           comprobar(usu, maq, ronU, ronO, parU, parO);
       }while(ronU != 2 && ronO !=2);
       cout<<"¿Quieres jugar? (s/n) ";
       cin>>play;
   }
   
    return 0;
}
//Pide la jugada al usuario
char apuestaUsuario(){
    char jug;

    do {
        cout << "¿Piedra, papel o tijera? (p/a/t) "<< jug;
        cin >> jug;
    }while (jug != 'p' && jug != 'a' && jug != 't');

    return jug;
}

//Genera la jugada del ordenador
char piedraPapelTijera(){
    int random=rand()%3;
    char jug;

        if (random == 2){
            random='t';
        }
        else if(random == 1){
            random = 'a';
        }
        else {
            random = 'p';
        }

        return jug;
}

//Aplica las reglas y lleva el tanteo
void comprobar(char usu, char ord, int &ronU, int &ronO, int &parU, int &parO) {

    if (usu == ord) {
        cout << "Empate" << endl;
    } else if ((ord == 'p' && usu == 't') || (ord == 'a' && usu == 'p') || (ord == 't' && usu == 'p')) {
        cout << "Gana la máquina" << endl;
        ronO++;
    } else {
        cout << "Tu ganas" << endl;
        ronU++;
    }

    if (ronO == 2) {
        parO++;
    }
    if (ronU == 2) {
        parU++;
    }
    if (ronO == 2 || ronU == 2) {
        cout << "Partidas ganadas: " << endl;
        cout << "Máquina " << parO << endl;
        cout << "Usuario " << parU << endl;
    }
}