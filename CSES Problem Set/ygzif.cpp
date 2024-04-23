#include <iostream>
using namespace std;
class GrandParent
{
protected :
    string address;
};
class Parent_X : protected GrandParent
{
protected:
    int age; // address
};
class Parent_Y
{
protected:
    int phone;
};
class Child_X : protected Parent_X,protected Parent_Y
{
 string name;
public:
    void get_info()
    {
        cout << "enter the name :\n";
        cin >> name;
        cout <<  "enter the age :\n";
        cin >> age;
        cout << "enter the phone :\n";
        cin >> phone;
        cout << "enter the address :\n";
        cin >> address;
    }
    void output()
    {
        cout << "Age is : " << age << endl;
        cout << "Name is : " << name << endl;
        cout << "Phone is : " << phone << endl;
        cout << "Address is : " << address << endl;
    }
};
int main()
{
    Child_X xyz;
    xyz.get_info();
    xyz.output();
}
