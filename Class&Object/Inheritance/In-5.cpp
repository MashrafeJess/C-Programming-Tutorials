#include <iostream>
using namespace std;
class BankAccount
{
    protected :
    string name;
};
class SavingsAccount : protected BankAccount
{
    protected :
    float interest;
    public :
    SavingsAccount()
    {
        cout << "Account Name : \n";
        cin >> name;
        cout << "Interest rate of that acccount: \n";
        cin >> interest;
    }
    ~SavingsAccount()
    {
        cout << "======================="<< endl;
        cout << "Account Name : " << name << endl;
        cout << "Interest rate : " << interest << " %" << endl;
    }
};
int main()
{
    SavingsAccount account;
    return 0;
}