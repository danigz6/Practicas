/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
using namespace std;

int main(){
    
    int conchas=-1;
    int mejillones=0;
    int mollas=0;
    
  
     while (mejillones>-1){
    cout<<"Introduzca número de mollas: ";
    cin>>mejillones;
    conchas++;
        if (mejillones>=0){
        mollas = mejillones + mollas;
        }
    }
    if (conchas==mollas){
        cout<<"JUSTO"<<endl;
    }
    else if (conchas>mollas){
        cout<<"TIMO"<<endl;
    }
    else {
        cout<<"SUERTE"<<endl;
    }
    
    return 0;
}