/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
using namespace std;

int main(){
    
    int num;
    int result=0;
    int cont=0;
    
    cout<<"Introduzca un número: ";
    cin>>num;
    
    while(num/10!=0 || num%10!=0){
        result=result + num%10;
        num=num/10;
    }
    if (result>10){
        cont=result/10;
        result=cont + result%10;
    }
    
    cout<<"La suma de las cifras es "<<result;
    return 0;

    
    
    return 0;
}