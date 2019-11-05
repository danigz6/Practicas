/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
using namespace std;

const int TAM=4;

float calcMed (float []);
void pideDat(float []);
void inf (float [], float []);

int main(){
    float temp[TAM], media;

    pideDat(temp);
    media = calcMed(temp);
    inf(temp, media);

    return 0;
}
//Pide las temperaturas al usuario.
void pideDat(float t[]){
    int i;

        for(i=0;i<TAM;i++){
            cout<<"Introduce la temperatura: ";
            cin>>t[i];
        }
}
//Calcula la media.
float calcMed(float t[]){
    float med=0.0;
    int i;
        
         for(i=0;i<TAM;i++){
             med = med + t[i];
         }
        med = med/TAM;

    return med;
}
//Calcula cuantos elementos están por encima y cuantos estan por debajo.
void inf (float [], float[]){
    int i, max=0, min=0;

    for(i=0;i<TAM;i++){
        if (t[i]>med){
        max++;
        }
        else if (t[i]<med){
            min++;
        }
        cout <<"Media: " << med <<endl;
        cout<<"Hay "<< max << "valores por encima" << endl;
        cout<<"Hay "<< min << "valores por debajo" <<endl;
    }

}