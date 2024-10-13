#include <iostream>
#include <math.h>
using namespace std;

struct book{
    string name = "Неизвестно";
    string author = "Неизвестно";
    int year = 0;
    int pages = 0;

    void displayBook(){
        cout << name << "\n Автор: " << author << "\n Год издания: " << year << " г.\n Кол-во страниц: " << pages << "\n\n";
    }
};

book createBook(string name, string author, int year, int pages){
    book bk = {name, author, year, pages};
    return bk;
}

int main(void){
    struct book books[3];
    for(int i = 0; i < 3; i++){
        cout << "Добавьте книгу (" << i+1 << "/3)\n";

        string name;
        string author;
        int year;
        int pages;

        cout << "Название книги: ";
        cin >> name;
        cout << "Автор: ";
        cin >> author;
        cout << "Год издания: ";
        cin >> year;
        cout << "Кол-во страниц: ";
        cin >> pages;
        
        cout << "\nКнига добавлена\n\n";
        books[i] = createBook(name, author, year, pages);
    }
    for(int i = 0; i < 3; i++){
        books[i].displayBook();
    }
    return 0;
}
