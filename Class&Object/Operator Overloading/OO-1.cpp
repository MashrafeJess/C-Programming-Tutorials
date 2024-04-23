#include <iostream>
using namespace std;
class SuperHero
{
	float strength,speed,iq,combo;
	public:
		SuperHero(float a=0,float b=0,float c=0)
		{
			strength = a;
			speed = b;
			iq = c;
		}
		SuperHero operator + (SuperHero a)
		{
			SuperHero c;

		c.strength = strength + a.strength;
		c.speed = speed + a.speed;
		c.iq = iq + a.iq;

			return c;
		}
		bool operator < (SuperHero b) // if(a>b)
		{
			combo = strength + speed + iq;
			if(combo < b.combo)
			{
				return combo < b.combo;
			}
		}
		void display()
		{
			cout << "================================"<<endl;
			cout << "Strength of the hero : " << strength << endl;
						cout << "Speed of the hero : " << speed << endl;
			cout << "Intelligence of the hero : " << iq << endl;
		}
};
int main()
{
	SuperHero Red(20,25,95),Blue(15,35,95),Yellow;
	Yellow = Red + Blue;
	Yellow.display();
	if(Red<Blue)
	{
		cout << "Red is stronger!!" << endl;
		Red.display();
	} else {
		cout << "Blue is stronger!!" << endl;
		Blue.display();
	}
	return 0;
}
