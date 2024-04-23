#include <iostream>
using namespace std;
int i;
class Student
{
    string name;
    string details;
    bool present;
public :
    void input();
    void show();
};
void Student :: input()
{
    cout << "Enter the Name : ";
    cin >> name;
    cout << "Enter the details : ";
    cin >> details;
    cout << "Was present?(1/0)";
    cin >> present;
}
void Student :: show()
{
    cout << "Name : " << name << endl;
    cout << "Description : " << details << endl;
    if(present){
        cout << "Was Present" << endl;
    } else {
         cout << "Was not Present" << endl;
    }
}
int main (){
    Student Participants[2];
    for(i=0;i<2;i++)
    {
        Participants[i].input();
    }
    cout << "================" << endl;
    for(i=0;i<2;i++)
    {
        Participants[i].show();
    }
    return 0;
}