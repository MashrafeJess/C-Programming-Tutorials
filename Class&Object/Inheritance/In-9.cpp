#include <iostream>
using namespace std;
class Animol
{
    protected:
    string name;
    int age;
};
class Pet
{
    protected:
    string owner;
};
class PetOwner : Animol,Pet
{
    public:
    PetOwner()
    {
       cout << "Enter Pet name : \n";
       cin >> name;
       cout << "Enter Pet age : \n";
       cin >> age;
       cout << "Enter owner name : \n";
       cin >> owner;
    }
    ~PetOwner()
    {
        cout << "===================="<<endl;
         cout << "Pet Name : " << name << endl;
         cout << "Pet age : " << age << endl;
          cout << "Pet Owner : " << owner << endl;
    }
};
int main()
{
    PetOwner obj;
    return  0;
}