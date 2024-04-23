#include <iostream>
using namespace std;
#define Pi 3.1416
class circle
{
	float radius;
	public:
		circle(float r)
		{
			radius = r;
		}
		friend void circumference(circle r)
		{
			cout << "Circumference = "<< 2*Pi*r.radius<< endl;
		}
};
int main()
{
	float r;
	cout << "Enter the radius : \n";
	cin >> r;
	circle obj(r);
	circumference(obj);
}
