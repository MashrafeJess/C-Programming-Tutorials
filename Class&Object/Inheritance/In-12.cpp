
#include <iostream>
using namespace std;
class Marks
{
	protected :
	static int roll_number = 1000;
	string name;
	float marks; 
};
class Physics : protected Marks
{
	public :
		Physics()
		{
			
		}
}
