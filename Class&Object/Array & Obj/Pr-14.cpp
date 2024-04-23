#include <iostream>
using namespace std;
class Bank
{
private:
    string name;
    string address;
    string type;
    float balance;
    int transactions = 0;
    static int id;
public:
    int assign();
    void getdata();
    void input_output();
    void change();
    void showdata();
};
int Bank :: id = 1000;
int Bank :: assign()
{
    return id++;
}
void Bank::getdata(/* args */)
{
    cout << "Enter Depositor Name : \n";
    cin >> name;
    cout << "Enter Depositor Address : \n";
    cin.ignore();
    getline(cin,address);
    cout << "Enter Account Type : \n";
    cin >> type;
    cout << "Enter Depositor Balance : \n";
    cin >> balance;
}
void Bank::input_output()
{
    int a;
    float b;
    cout<<"Please,press 1 for Insertion:\n\tpress 2 for withdrawal:\n";
    cin >> a;
    switch (a)
    {
    case 1 : cout <<"How much do you want to insert?\n";
                cin >> b;
                balance+=b;
                transactions++;
        break;
    case 2 : cout <<"How much do you want to withdraw?\n";
                cin >> b;
                if(b<=balance)
                {
                    balance-=b;
                    transactions++;
                }
                else
                {
                    cout << "Insufficient Balance !!\n";
                }
    default:
        break;
    }
}
void Bank :: change()
{
    string b;
    cout << "Do you want to change the address?\nPlease,press(1) to change :\n";
    cin >> b;
    if(b == "1")
    {
        cout << "Enter the new address!:\n";
        cin >> b;
        address = b;
    }
}
void Bank :: showdata()
{
  cout << "Depositor Name : " << name << endl;
  cout << "Depositor ID : BA" << assign() << endl;
  cout << "Depositor Address : " << address << endl;
  cout << "Account Type : " << type << endl;
  cout << "Account Balance : " << balance << endl;
  cout << "Account Transactions : " << transactions << endl;
}
int main()
{
    Bank Account[2];
    for(int i = 0;i<2;i++)
    {
        Account[i].getdata();
    }
    for(int i = 0;i<2;i++)
    {
        cout << "Depositor No : " << i+1 << endl;
        Account[i].input_output();
        Account[i].change();
    }
    for(int i = 0;i<2;i++)
    {
        cout << "Depositor No : " << i+1 << endl;
        Account[i].showdata();
        cout << "=================="<<endl;
    }
    return 0;
}