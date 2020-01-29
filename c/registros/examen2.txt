/* Autor: Daniel Gallego Zaragoza
   DNI: 49372364N  */

#include <iostream>
#include <cstring>
using namespace std;

const int MAX=50;
typedef char TCadena[30];

typedef struct{
    TCadena isbn;
    TCadena title;
    int numPages;
}TBook;

typedef TBook TBooks[MAX];

void addBook(TBooks &books, int &size){

    cout << "ISBN: ";
    cin >> books[size].isbn;
    cout << endl;
    cin.get();

    cout << "Title: ";
    cin.getline(books[size].title,MAX);
    cout << endl;

    cout << "Num. Pages: ";
    cin >> books[size].numPages;
    cout << endl;

    size++;
}

void showBooks(TBooks &books, int &size){

    for (int i = 0; i<size; i++){
        cout << books[i].isbn << " | " << books[i].title << " | " << books[i].numPages << endl;
    }

}

int calculatePosition(TBooks books, int size, TCadena isbn){
    int position = 0;

    while (strcmp(isbn,books[position].isbn)!=0 && position<size) {
        position++;    
    }

    return position;
}

void removeBook(TBooks &books, int &size){
    TCadena isbn;

    cout << "Enter isbn to remove: " <<endl;
    cin >> isbn;
    int position = calculatePosition(books,size,isbn);

    for (int i = position; i<size; i++){
        books[i] = books[i+1];
    }
    size--;
}

void updateBook(TBooks &books, int &size){
    int choose;
    TCadena isbn;
    
    cout << "Please, enter isbn to update: " <<endl;
    cin >> isbn;

    int position = calculatePosition(books,size,isbn);


    cout << "Update title or num. pages? (1/2)"<<endl;
    cin >> choose;
cin.get(); 
    switch (choose){
        case 1:cout <<"Please, enter the new title: "; cin.getline(books[position].title,MAX);break;
        case 2: cout <<"Please, enter the new num of pages: "; cin >> books[position].numPages;break;
    }

}


int main(){
    TBooks books;
    int choose = 0;
    int size = 0;

    do{
        cout << "1. Add book" << endl;
        cout << "2. Show books" << endl;
        cout << "3. Remove book" << endl;
        cout << "4. Update book" << endl;
        cout << "0. Exit" << endl;
        cout << "Indicate the option chosen: ";
        cin >> choose;

        switch (choose) {
            case 1: addBook(books,size);break;
            case 2: showBooks(books,size);break;  
            case 3: removeBook(books,size);break;
            case 4: updateBook(books,size);break;
        }
    }while ( choose != 0);


    return 0;
}