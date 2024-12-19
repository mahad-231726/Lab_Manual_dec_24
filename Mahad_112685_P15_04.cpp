#include <iostream.h>
using namespace std;
class Book {
protected:
    int bid;
    char bname[50];
    float price;
public:
    void input() {
        cout << "Enter book id: ";
        cin >> bid;
        cout << "Enter book name: ";
        gets(bname);
        cout << "Enter book price: ";
        cin >> price;
    }
    void show() {
        cout << "Book ID: " << bid << endl;
        cout << "Book name: " << bname << endl;
        cout << "Price: " << price << endl;
    }
};

class Writer {
protected:
    char name[50], address[100];
    int books;
    Book bk[5];
public:
    void input() {
        cout << "Enter writer name: ";
        gets(name);
        cout << "Enter writer address: ";
        gets(address);
        cout << "Enter number of books written: ";
        cin >> books;
        cout << "Enter details of five books:" << endl;
        for (int i = 0; i < 5; i++) {
            bk[i].input();
        }
    }
    void show() {
        cout << "Writer name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Number of books: " << books << endl;
        cout << "Details of five books:" << endl;
        for (int i = 0; i < 5; i++) {
            bk[i].show();
        }
    }
};

void main() {
    clrscr();
    Writer w;
    w.input();
    w.show();
    return 0;
}
