#include <iostream>
using namespace std;
class person
{
protected :
   string name;
};
class student : private person
{
    int ID;
    public :
    student()
    {
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the ID :";
        cin >>  ID;
    }
    ~student()
    {
        cout << "Student Name : " << name << endl;
        cout << "Student ID : " << ID << endl;
    }
};
int main()
{
    student obj[2];
    return 0;
} // namespace std;
