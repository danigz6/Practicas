 /* Daniel Gallego Zaragoza
    dni: 49372364N*/

#include<iostream>
using namespace std;

const int KTAM=5;

void leeMat (int [][KTAM]);
void escMat (int [][KTAM]);
bool esSim (int [][KTAM]);

int main (){
    int mat[KTAM][KTAM];

    leeMat(mat);
    escMat(mat);

    if (esSim(mat)){ // esSim(mat) == true
        cout<< "Es simétrico ";
    } 
    else{
        cout << "No es simétrica ";
    }

    return 0;
}

void leeMat (int m[][KTAM]){
    int i, j;

    for (i=0; i<KTAM; i++){
        for (j=; j<KTAM; j++){
            cout << "Introduce el valor " << i << "," << j << ": ";
            cin >> m[i][j];
        }
    }

}

void escMat (int m[][KTAM]){
    int i, j;

    for (i=0; i<KTAM; i++){
        for (j=; j<KTAM; j++){
            cout << m[i][j]<< " ";
            cout << endl;
        }
    }

}

bool esSim (int m[][KTAM]{
    int i=0, j;
    bool test=true;

    while (i<KTAM-1 && test){ // test == true
        j=i+1;
        while (j<KTAM && test){
            if (m[i][j]!=m[j][i]){
                test = false;
                j++;
            }
        }
        i++;
    }
    return test;
}