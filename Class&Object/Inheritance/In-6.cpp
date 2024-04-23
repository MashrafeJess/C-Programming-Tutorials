#include <iostream>
using namespace std;
class person
{
    protected :
    string name;
    int age;
};
class student 
{
    protected:
    int id;
    float cg;
};
class sport
{
    protected :
    int score;
};
class StudentAthlete : person,student,sport
{
    public :
    StudentAthlete()
    {
        cout << "Enter the name : \n";
        cin >> name;
        cout << "Enter the age : \n";
        cin >> age;
        cout << "Enter the ID : \n";
        cin >> id;
        cout << "Enter the CGPA : \n";
        cin >> cg;
        cout << "Enter the score : \n";
        cin >> score;
    }
    ~StudentAthlete()
    {
        cout << "===================" << endl;
        cout << " Name : " << name << endl;
        cout << " Age : " << age << endl;
        cout << " ID : " << id << endl;
        cout << " CGPA : " << cg << endl;
        cout << " Score : " << score << endl;
    }
};
int main()
{
    StudentAthlete obj;
    return 0;
}
