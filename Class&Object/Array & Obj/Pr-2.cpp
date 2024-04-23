#include <iostream>
using namespace std;
class office
{
    string name;
    int salary;
    string date;

public :
    void info();
    void show();
};
void office :: info()
{
  cout << "Enter the name : ";
  cin >> name ;
  cout << "Enter the salary (tk) : ";
  cin >> salary ;
  cout << "Enter the Date of joining : ";
  cin >> date ;
}
void office :: show()
{
    cout << "Name : " << name << endl;
    cout << "Salary : " << salary << endl;
    cout << "Date of joining : " << date << endl;
}
int main ()
{
    office employee[2];
    for(int i = 0;i<2;i++){
        employee[i].info();
    }
    cout << endl;
    cout << endl;
    cout << endl;
    for(int i = 0;i<2;i++){
        cout << "Employee NO : "<< i+1 << endl;
        employee[i].show();
        cout << "====================="<<endl;
    }
}
