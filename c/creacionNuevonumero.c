#include <iostream>
using namespace std;

int main() {
    int num;
    int result=0;

    cout<<"Introduzca un número";
    cin>>num;

    while (num/10!=0 || num%10!=0){
        result = 10* result + num%10;
        num = num / 10;
    }
    cout<<"El nuevo número es "<<result;

    return 0;
}