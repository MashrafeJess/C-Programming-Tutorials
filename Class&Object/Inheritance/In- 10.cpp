#include <iostream>
using namespace std;
class Mammals
{
    public : 
    void output()
    {
        cout << "I am a mammal." << endl;
    }
};
class MarineAnimals
{
    public :
    void output()
    {
        cout << "I am a marine animal." << endl;
    } 
};
class BlueWhale :public Mammals,public MarineAnimals
{
    public :
    void output()
    {
        cout << "I belong to both categories : Mammals as well as Marine Animals." << endl;
    }
};
int main()
{
    Mammals x;
    MarineAnimals y;
    BlueWhale z;
    x.output();
    y.output();
    z.output();
    return 0;
}