#include <iostream>
using namespace std;
class Customer
{
protected :
    string name;
    int number;
    int age;
    string gender;
};
class Account
{
protected:
    string account_type;
    string date;
};
class RBI
{
protected:
    float min_interest = 4;
    int min_balance = 500;
    int max_withdraw = 10000;
};
class SBI : RBI,Customer,Account
{
    float interest = 0;
    int balance  = 0;
public:
    void input()
    {
        int a,c;
        float b;
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the phone number : ";
        cin >> number;
        cout << "Enter the age : ";
        cin >> age;
        cout << "Enter the gender : ";
        cin >> gender;
        cout << "Enter the Account Type : ";
        cin >> account_type;
        cout << "Enter the account date : ";
        cin >> date;
        cout << "Enter the interest : ";
        cin >> b;
        if(b>=min_interest)
        {
            interest += b;
        } else {
            cout << "This rate is not applicable" << endl;
        }
        cout <<  "Enter the primary balance : ";
        cin >> a;
        if(a>=min_balance)
        {
            balance += a;
        } else {
            cout << "Minimum balance is not enough!!" << endl;
        }
    }
    void withdraw()
    {
        int c;
        cout << "How much do you want to withdraw??";
        cin >> c;
        if(c<=balance)
        {
            if(c<=max_withdraw)
            {
                balance -= c;
            } else {
                cout << "Maximum withdrawal limi exceeded!" << endl;
            }
        } else {
            cout << "Insufficient Balance!!"<< endl;
        }
    }
    void display()
    {
        cout << "==========================="<< endl;
        cout << "*****I.C.I.C.I. Bank******" << endl;
        cout << "Customer Name : " << name << endl;
        cout << "Customer Phone Number : " << number << endl;
        cout << "Customer Age : " << age << endl;
        cout << "Customer Gender : " << gender << endl;
        cout << "Customer Name : " << name << endl;
        cout << "Customer Account Type : " << account_type << endl;
        cout << "Customer Account expiry date : " << date << endl;
        cout << "Bank Interest : " << endl;
        int m = balance * interest;
        cout << "Customer  Balance : " << balance << endl;
        cout << "Customer  Balance with interest : " << balance + m << endl;
        cout << "------------------------------------------------------"<<endl;
    }
};
class ICIC : RBI,Customer,Account
{
    float interest = 0;
    int balance  = 0;
public:
    void input()
    {
        int a,c;
        float b;
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the phone number : ";
        cin >> number;
        cout << "Enter the age : ";
        cin >> age;
        cout << "Enter the gender : ";
        cin >> gender;
        cout << "Enter the Account Type : ";
        cin >> account_type;
        cout << "Enter the account date : ";
        cin >> date;
        cout << "Enter the interest : ";
        cin >> b;
        if(b>=min_interest)
        {
            interest += b;
        } else {
            cout << "This rate is not applicable" << endl;
        }
        cout <<  "Enter the primary balance : ";
        cin >> a;
        if(a>=min_balance)
        {
            balance += a;
        } else {
            cout << "Minimum balance is not enough!!" << endl;
        }
    }
    void withdraw()
    {
        int c;
        cout << "How much do you want to withdraw??";
        cin >> c;
        if(c<=balance)
        {
            if(c<=max_withdraw)
            {
                balance -= c;
            } else {
                cout << "Maximum withdrawal limi exceeded!" << endl;
            }
        } else {
            cout << "Insufficient Balance!!"<< endl;
        }
    }
    void display()
    {
        cout << "==========================="<< endl;
        cout << "*****I.C.I.C.I. Bank******" << endl;
        cout << "Customer Name : " << name << endl;
        cout << "Customer Phone Number : " << number << endl;
        cout << "Customer Age : " << age << endl;
        cout << "Customer Gender : " << gender << endl;
        cout << "Customer Name : " << name << endl;
        cout << "Customer Account Type : " << account_type << endl;
        cout << "Customer Account expiry date : " << date << endl;
        cout << "Bank Interest : " << endl;
        int m = balance * interest;
        cout << "Customer  Balance : " << balance << endl;
        cout << "Customer  Balance with interest : " << balance + m << endl;
        cout << "------------------------------------------------------"<<endl;
    }
};
class PNB : RBI,Customer,Account
{
    float interest = 0;
    int balance  = 0;
public:
    void input()
    {
        int a,c;
        float b;
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the phone number : ";
        cin >> number;
        cout << "Enter the age : ";
        cin >> age;
        cout << "Enter the gender : ";
        cin >> gender;
        cout << "Enter the Account Type : ";
        cin >> account_type;
        cout << "Enter the account date : ";
        cin >> date;
        cout << "Enter the interest : ";
        cin >> b;
        if(b>=min_interest)
        {
            interest += b;
        } else {
            cout << "This rate is not applicable" << endl;
        }
        cout <<  "Enter the primary balance : ";
        cin >> a;
        if(a>=min_balance)
        {
            balance += a;
        } else {
            cout << "Minimum balance is not enough!!" << endl;
        }
    }
    void withdraw()
    {
        int c;
        cout << "How much do you want to withdraw??";
        cin >> c;
        if(c<=balance)
        {
            if(c<=max_withdraw)
            {
                balance -= c;
            } else {
                cout << "Maximum withdrawal limi exceeded!" << endl;
            }
        } else {
            cout << "Insufficient Balance!!"<< endl;
        }
    }
       void display()
    {
        cout << "==========================="<< endl;
        cout << "*****I.C.I.C.I. Bank******" << endl;
        cout << "Customer Name : " << name << endl;
        cout << "Customer Phone Number : " << number << endl;
        cout << "Customer Age : " << age << endl;
        cout << "Customer Gender : " << gender << endl;
        cout << "Customer Name : " << name << endl;
        cout << "Customer Account Type : " << account_type << endl;
        cout << "Customer Account expiry date : " << date << endl;
        cout << "Bank Interest : " << endl;
        int m = balance * interest;
        cout << "Customer  Balance : " << balance << endl;
        cout << "Customer  Balance with interest : " << balance + m << endl;
        cout << "------------------------------------------------------"<<endl;
    }
};
int main()
{
    SBI a;
    ICIC b;
    PNB c;
    int num;
    cout << "Which Bank do you want to open a bank account??\n";
    cin >> num;
    switch(num)
    {
        case 1 : a.input();
                    a.withdraw();
                    a.display();
                    break;
        case 2 : b.input();
                    b.withdraw();
                    b.display();
                    break;
        default : c.input();
                    c.withdraw();
                    c.display();
                    break;
    }
}
