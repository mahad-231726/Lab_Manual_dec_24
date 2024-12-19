#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
class bank {
    private:
        char name[20];
        int acno;
        char actype[20];
        int bal;
    public:
        bank();
        void deposit(int amt);
        void withdraw(int amt);
        void display();
        void add(bank ac);
};
void bank::bank() {
    cout << "Enter account name: ";
    gets(name);
    cout << "Enter account no: ";
    cin >> acno;
    cout << "Enter account type: ";
    gets(actype);
    cout << "Enter opening balance: ";
    cin >> bal;
}

void bank::deposit(int amt) {
    bal = bal + amt;
    cout << "\nBalance after deposit: " << bal << endl;
}

void bank::withdraw(int amt) {
    if (amt > bal)
        cout << "Not enough amount in account" << endl;
    else {
        bal = bal - amt;
        cout << "Balance after withdraw: " << bal << endl;
    }
}

void bank::display() {
    cout << "Account Details: " << endl;
    cout << "Account Name: " << name << endl;
    cout << "Account No.: " << acno << endl;
    cout << "Account Type: " << actype << endl;
    cout << "Current Balance: " << bal << endl;
}

void bank::add(bank ac) {
    bal = bal + ac.bal;
}
int main() {
    clrscr();
    bank x, y;
    x.add(y);
    x.display();
    getch();
    return 0;
}
