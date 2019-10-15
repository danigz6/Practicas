/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void calcFact(int);
int main(){

  srand(time(NULL));


  return 0;
}

void calFact(){
    int random, i, j, result;

    random=rand()%11+10;

    for (i=1; i<random; i++){
        result=1;
        j=i;
        while(j>1){
            result = result*j;
            j--;
        }
        cout<<"Factorial de "<< i << ": " << fact << endl;
    }
}