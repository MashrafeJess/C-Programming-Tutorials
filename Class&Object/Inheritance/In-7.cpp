#include <iostream>
using namespace std;
class Shape
{
    protected :
    float width,height;
};
class colour
{
    protected :
    string colour;
};
class ColShape : Shape,colour
{
    public :
    ColShape()
    {
        cout << "Enter the width & height : \n";
        cin >> width >> height;
        cout << "Enter the colour : \n";
        cin >> colour;
    }
    ~ColShape()
    {
        cout << "===================="<<endl;
        cout << "Width : " << width << "m"<<endl;
        cout << "Height : " << height << "m" << endl;
        cout << "Color : " << colour << endl;
    }
};
int main()
{
    ColShape obj;
    return 0;
}