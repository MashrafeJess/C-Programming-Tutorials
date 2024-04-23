






#include <iostream>
using namespace std;
class Directory
{
private:
    string name;
    string address;
    long tele_number;
    long mobile_number;
    string head;
public:
    void getdata();
    void showdata();
};

void Directory::getdata(/* args */)
{
    cout << "Enter the name :\n";
    cin >> name;
    cout << "Enter the address :\n";
    cin.ignore();
    getline(cin,address);
    cout << "Enter the telephone number :\n";
    cin >> tele_number;
    cout << "Enter the mobile number :\n";
    cin >> mobile_number;
    cout << "Enter the head of the family :\n";
    cin >> head;
}
void Directory:: showdata()
{
    cout << "Person Name : "<< name << endl;
     cout << "Person Address : "<< address << endl;
      cout << "Person Telephone Number : "<< tele_number << endl;
       cout << "Person Mobile Number : "<< mobile_number << endl;
        cout << "Head of the family : "<< head << endl;
}
int main ()
{
    Directory phone[2];
    for(int i = 0;i<2;i++)
    {
        phone[i].getdata();
    }
    for(int i = 0;i<2;i++)
    {
        cout << "Person NO : " << i+1<<endl;
        phone[i].showdata();
        cout << "==================="<<endl;
    }
return 0;
}
