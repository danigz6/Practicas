/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
    
    int num;
    int num1;
    int result=0;
    int cont;
    
    srand(time(NULL));
    
    do{
    num=rand()%10;
    num1=rand()%10;
    
    cout<<num<<"*"<<num1<<"=";
    cin>>result;
    
    
        if (result== num * num1){
            cout<<"Acierto!"<<endl;
        }
        else if (result<num * num1){
            cout<<"Error!: LA SOLUCIÓN ES MAYOR"<<endl;
        }
        else{
            cout<<"Error!: LA SOLUCIÓN ES MENOR"<<endl;
        }
        cont++;
    }while(cont<5);
    
    
    return 0;
}