/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
#include <cstring>
using namespace std;

const int MAX=35;
typedef char TCadena[10];

typedef struct{
    TCadena nombre;
    TCadena dni;
    int examen1 = 0;
    int examen2 = 0;
    int examenFinal = 0;
}TAlumno;

typedef TAlumno TAlumnos[MAX];

void altaAlumno(TAlumnos &alumnos, int &size){ 
    
    cout << "DNI:"; 
    cin >> alumnos[size].dni;
    cout << endl;

    cout << "Nombre:";
    cin >> alumnos[size].nombre;
    cout << endl;

    size++;
}

void listarAlumnos(TAlumnos &alumnos, int size){

    cout << "DNI | Nombre | Examen PR. 1 | Examen PR.2 | Examen final | Nota media " << endl;

    for (int i=0; i<size; i++){
        cout << alumnos[i].dni << " | " << alumnos[i].nombre << " | " << alumnos[i].examen1<< " | " << alumnos[i].examen2<< " | " << alumnos[i].examenFinal;
        cout << endl;
    }
    
}

void nota(TAlumnos &alumnos, int size){
    TCadena dni;
    int position = 0;
    int choose = 0;

    cout << "DNI del alumno: ";
    cin >> dni;

    while(strcmp(dni, alumnos[position].dni)!=0 && position<size){
        position++;
    }

    if (position == size){
        cout << "No encontrado"<<endl;
    } else{
        cout <<"Encontrado"<< endl;
        cout << alumnos[position].dni<< " | " << alumnos[position].nombre << " | " << alumnos[position].examen1 << " | " << alumnos[position].examen2 << " | " << alumnos[position].examenFinal<<endl;
    }

    if (position != size){
        cout << "¿Qué nota quieres poner/cambiar (1-ExPr1, 2-ExPr2, 3-ExFinal, 0-Ninguna)? : ";
        cin >> choose;

        switch (choose) {
            case 1: cout << "Introduce la nueva nota para el examen de prácticas 1: "; cin >> alumnos[position].examen1;break;
            case 2: cout << "Introduce la nueva nota para el examen de prácticas 2: "; cin >> alumnos[position].examen2;break;
            case 3: cout << "Introduce la nueva nota para el examen final: "; cin >> alumnos[position].examenFinal;break;
            case 0: cout << "" <<endl;
        }
    }
}

void bajaAlumno (TAlumnos &alumnos, int &size){
    TCadena dni;
    int position = 0;

    cout << "Introduzca DNI del alumno a eliminar: ";
    cin >> dni;

     while(strcmp(dni, alumnos[position].dni)!=0 && position<size){
        position++;
     }
    
     for (int i = position; i<size; i++){
        alumnos[i] = alumnos[i+1];
     }
    size--;

}

int main(){
    int choose = 0;
    TAlumno alumno;
    TAlumnos alumnos;
    int size = 0;

    do{
        cout << "1. Alta alumno" << endl;
        cout << "2. Baja alumno" << endl;
        cout << "3. Poner/modificar/consultar nota alumno" << endl;
        cout << "4. Listar alumnos" << endl;
        cout << "0. Salir" << endl;
        cout << "Indica la acción realizada: ";
        cin >> choose;

        switch (choose) {
            case 1: altaAlumno(alumnos, size);break;
            case 2: bajaAlumno(alumnos, size);break;  
            case 3: nota(alumnos, size);break;
            case 4: listarAlumnos(alumnos,size);break;
        }
    }while ( choose != 0);

    return 0;
}