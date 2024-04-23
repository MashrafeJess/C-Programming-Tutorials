#include <iostream>
using namespace std;

class Account {
private:
    string name = "John Doe";
    int account_number = 123456;
    int in_balance = 1000;

public:
    void show_info();
    void deposit();
    void withdraw();
};

void Account::show_info() {
    cout << "Name: " << name << endl;
    cout << "Account Number: " << account_number << endl;
    cout << "Balance: " << in_balance << endl;
}

void Account::deposit() {
    int a;
    cout << "Enter the amount to deposit: ";
    cin >> a;
    in_balance = in_balance + a;
}

void Account::withdraw() {
    int b;
    cout << "Enter the amount to withdraw: ";
    cin >> b;
    if (b <= in_balance) {
        in_balance = in_balance - b;
    } else {
        cout << "Insufficient balance!" << endl;
    }
}

int main() {
    Account Bank;
    Bank.show_info();
    Bank.deposit();
    Bank.withdraw();
    Bank.show_info();
    return 0;
}
