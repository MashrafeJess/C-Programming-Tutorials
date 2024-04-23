#include <iostream>
using namespace std;
class rect
{
	int length,width;
	public:
		void input(int a,int b);
		friend void area(rect x);
};
void rect :: input(int a,int b)
{
	length = a;
	width = b;
}
void area(rect x)
{
	cout << "Area : " << x.length*x.width<< "m2"<<endl;
}
int main()
{
	rect rectangle;
	int a,b;
	cout << "Enter the values : \n";
	cin >> a >> b;
	rectangle.input(a,b);
	area(rectangle);
}
