#include <iostream>
using namespace std;
class Animol
{
    protected :
    string name;
};
class Cat : protected Animol
{
    protected :
    int lives;
    public :
    Cat()
    {
        cout << "ENter the name : \n";
        cin >> name;
        cout << "ENter the number of lives : \n";
        cin >> lives;
    }
    ~Cat()
    {
        cout << "============================" << endl;
        cout << "Name of the cat : " << name << endl;
        cout << "NUmber of lives the cat has : " << lives << endl;
    }
};
int main()
{
    Cat cat;
    return 0;
}