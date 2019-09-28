#include <iostream>
using namespace std;

int main(){

    int horas;
    int minutos;
    int minhora;
    int resto;
    int totalminutos;
    int dia=1440;
    
    cout<<"Introduzca el número de horas: ";
    cin>>horas;
   
    cout<<"Introduzca el número de minutos: ";
    cin>>minutos;
    
    minhora=horas*60;
   totalminutos=minhora+minutos;
    resto=dia-totalminutos;
    
    cout<<"Quedan: "<< resto<<" minutos";

    
    
    
    return 0;
}