#include<iostream>
#include<stdio.h>
using namespace std;

class Teacher {
    protected:
        char name[50], address[100];
        int age;
    public:
        void input() {
            cout << "Enter Teacher name: ";
            cin >> name;
            cout << "Enter Teacher age: ";
            cin >> age;
            cout << "Enter Teacher address: ";
            cin >> address;
        }
        void show() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Address: " << address << endl;
        }
};

class Writer {
    protected:
        char name[50], address[100];
        int books;
    public:
        void input() {
            cout << "Enter Writer name: ";
            cin >> name;
            cout << "Enter Writer address: ";
            cin >> address;
            cout << "Enter number of books written: ";
            cin >> books;
        }
        void show() {
            cout << "Writer name: " << name << endl;
            cout << "Address: " << address << endl;
            cout << "Number of Books: " << books << endl;
        }
};

class Scholar : public Teacher, public Writer {
    public:
        void input() {
            Teacher::input();
            Writer::input();
        }
        void show() {
            Teacher::show();
            Writer::show();
        }
};

int main() {
    Scholar s;
    s.input();
    s.show();
    return 0;
}