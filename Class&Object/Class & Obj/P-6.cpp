#include <iostream>
#include <vector>
using namespace std;
int i,sum = 0;
float avg;
class student
{
    string ID = "S001";
    string name = "John Smith";
    vector<int>grades = {85,90,78};

    public :
    void insert();
    void AVG();
    void show();
};
void student :: insert()
{
    grades.push_back(69);
}
void student :: AVG ()
{
    for(i = 0;i<grades.size();i++)
    {
        sum += grades[i];
    }
    avg = (float) sum / grades.size();
}
void student :: show()
{
    cout << "ID = " << ID << endl;
    cout << "Name : " << name << endl;
    for(i=0;i<grades.size();i++)
    {
        cout << "Grade " << i+1 << " : " << grades[i] << endl;
    }
    cout << "Average Grade : " << avg << endl;
}
int main ()
{
    student Class;
    Class.insert();
    Class.AVG();
    Class.show();
}