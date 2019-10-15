#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int i, j, num;

    cout<<"Introduce ancho: ";
    cin>>num;

    for (i=0; i<num; i++){
        for(j=0; j<num; j++){
            cout<<"*";
            cout<<endl;
        }
    }

    return 0;
}
/*
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
    int i, j, num;

    cout<<"Introduce ancho: ";
    cin>>num;

    for (i=0; i<num; i++){
        for(j=0; j<=i; j++){
            cout<<"*";
            cout<<endl;
        }
    }

    return 0;
}

 */
