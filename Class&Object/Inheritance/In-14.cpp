#include <iostream>
using namespace std;
class Shape
{
	public :
		void display()
		{
			cout << "This is a shape" << endl;
		}
};
class Polygon : public Shape
{
	public:
		void display()
		{
			cout << "Polygon is a shape" << endl;
		}
};
class Rectangle : public Polygon
{
	public:
		void display()
		{
			cout << "Rectangle is a polygon" << endl;
		}
};
class Triangle : public Polygon
{
	public:
		void display()
		{
			cout << "Triangle is a polygon" << endl;
		}
};
class Square : public Rectangle
{
	public:
		void display()
		{
			cout << "Square is a Rectangle" << endl;
		}
};
int main()
{
	Shape a;
	Polygon b;
	Rectangle c;
	Triangle d;
	Square e;
	
	a.display();
	b.display();
	c.display();
	d.display();
	e.display();
}
