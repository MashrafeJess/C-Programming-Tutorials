#include <iostream>
using namespace std;

class complex
{
	int real,image;
	public:
		complex(int a,int b)
		{
			real = a;
			image = b;
		}
		friend void add(complex a,complex b)
		{
			cout << a.real <<" + " << a.image<<" i"<< endl;
			cout << b.real <<" + " << b.image<<" i"<< endl;
			cout << "--------"<<endl;
			cout << a.real + b.real <<" + "<< a.image + b.image << " i"<<endl;
		}
};
int main()
{
	int a,b;
	cout << "Enter the values : \n";
	cin >> a >> b;
	complex obj1(a,b);
	complex obj2(a,b);
	add(obj1,obj2);
}
