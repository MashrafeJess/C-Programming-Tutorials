#include <iostream>
using namespace std;
class car
{
    protected :
    int wheel;
    int top_speed;
};
class info : protected car
{
    int doors;
    public :
    info()
    {
        cout << "Enter the number of wheels :\n";
        cin >> wheel;
        cout << "Enter the top speed (km/s):\n";
        cin >> top_speed;
        cout << "Enter the number of doors :\n";
        cin >> doors;
    }
    ~info()
    {
        cout << "===========================" << endl;
        cout << "Wheel : " << wheel << endl;
        cout << "Top speed : " << top_speed << " km/s" << endl; 
        cout << "Doors : " << doors << endl;
    }
};
int main()
{
    info Car;
    return 0;
}
