#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
inline int area(int &n)
{
    return pow(n,2);
}
inline int perimeter(int &n)
{
    return (4*n);
}
inline int volume(int &n)
{
    return pow(n,3);
}
int main()
{
    int n;
    cout << "1.enter 1 for calculating the area  \n2..enter 2 for calculating the perimeter\n.3.enter 3 for calculating the volume: \n";
    cin >> n;
    switch(n)
    {
        case 1 : int x;
                        cin >> x;
                        cout << "Area : " << area(x);
                        break;
        case 2 : int y;
                        cin >> y;
                        cout << "Perimeter : " << perimeter(y);
                        break;
        default : int z;
                        cin >> z;
                        cout << "Volume : " << volume(z) ;
                        break;
    }
}
