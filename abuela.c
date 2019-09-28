#include <iostream>
using namespace std;

int main(){

    int alta;
    int baja;
    int sistolica;
    int diastolica;
    
    cout<<"Introduzca valor de tensión:"; 
    cin>>alta;
    
    cout<<"Introduzca otro valor de tensión:"; 
    cin>>baja;
    
    if (alta>baja){
            sistolica=alta;
            diastolica=baja;
        }
    else{
        sistolica=baja;
        diastolica=alta;
    }
    
    cout<<sistolica<< " " <<diastolica<<endl;
    
    
    if ((sistolica<90) && (diastolica<60)){
        cout<<"Usted tiene Hipotensión ";
        }
    else if ((sistolica<=140) && (diastolica<=90)){
        cout<<"Usted tiene tensión normal ";
        }
    else if((sistolica>180) && (diastolica>110)){
        cout<<"Usted tiene hipertensión severa. Vaya al hospital ";
        }
    else if((sistolica>=160) && (diastolica>=100)){
        cout<<"Usted tiene hipertensión moderada ";
        }
     else if((sistolica>140) && (diastolica>90)){
        cout<<"Usted tiene hipertensión ligera ";
        }
    else{ 
        cout<<"Hay algun tipo de ERROR, vuelva a introducir los datos ";
    }
    
    return 0;
}