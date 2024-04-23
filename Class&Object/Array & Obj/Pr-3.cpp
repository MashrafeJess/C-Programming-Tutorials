#include <iostream>
using namespace std;
int i,sum = 0;
class Class
{
    static int id;
    int marks[3];// array within classs
    float avg;

public :
    int assign();
    void getdata();
    void findAvg();
    void showdata();
};
int Class :: id = 22303070;
int Class :: assign()
{
    return ++id;
}
void Class :: getdata()
{
    cout << "Enter the marks : ";
    for(i=0;i<3;i++)
    {
        cin >> marks[i];
    }
}
void Class :: findAvg()
{
    for(i=0;i<3;i++)
    {
        sum += marks[i];
    }
    avg = (float)sum/3;
}
void Class :: showdata()
{
    cout << endl;
    cout << "Roll : " << assign() << endl;
    for(i=0;i<3;i++)
    {
       cout << "Marks " << i << ": " <<  marks[i] << endl;
    }
    cout << "Average : " << avg;
}
int main ()
{
    Class student[2];// array of object
    int i =0;
    for(i=0;i<2;i++)
    {
        student[i].getdata();
    }
    cout << endl;
    for(i=0;i<2;i++)
    {
        student[i].findAvg();
        student[i].showdata();
    }
    return 0;
}
