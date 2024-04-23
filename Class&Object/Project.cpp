#include <iostream>

using namespace std;

class BankA {
    private:
        int balance;
        float interestRate;

    public:
        BankA() {
            balance = 0;
            interestRate = 6;
        }

        void setBalance(int balance) {
            this->balance = balance;
        }

        int getBalance() {
            return balance;
        }

        void setInterestRate(float interestRate) {
            this->interestRate = interestRate;
        }

        float getInterestRate() {
            return interestRate;
        }

        friend void calculateInterest(BankA* bank);
};

class BankB {
    private:
        int balance;
        float interestRate;

    public:
        BankB() {
            balance = 0;
            interestRate = 5;
        }

        void setBalance(int balance) {
            this->balance = balance;
        }

        int getBalance() {
            return balance;
        }

        void setInterestRate(float interestRate) {
            this->interestRate = interestRate;
        }

        float getInterestRate() {
            return interestRate;
        }

        friend void transferMoney(BankA* bankA, BankB* bankB);
};
void calculateInterest(BankA* bank) {
    float interest = bank->getBalance() * bank->getInterestRate() / 100;
    bank->setBalance(bank->getBalance() + interest);
}

void transferMoney(BankA* bankA, BankB* bankB) {
    int amount = bankB->getBalance();
    bankB->setBalance(0);
    bankA->setBalance(bankA->getBalance() + amount);
}

int main() {
    BankA bankA;
    BankB bankB;

    int amount = 10000;

    bankB.setBalance(amount);

    calculateInterest(&bankA);

    cout << "The interest earned by BankA is " << bankA.getInterestRate() << endl;

    transferMoney(&bankA, &bankB);

    cout << "The balance of BankA is " << bankA.getBalance() << endl;
    cout << "The balance of BankB is " << bankB.getBalance() << endl;

    return 0;
}
