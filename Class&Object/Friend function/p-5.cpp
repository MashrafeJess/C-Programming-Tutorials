#include <iostream>
using namespace std;
class Age
{
	string name;
	int age;
	public :
		Age()
		{
			cout << "Enter The Name : \n";
			cin >> name;
			cout << "Enter The Age : \n";
			cin >> age;
		}
		void display()
		{
			cout << name<< endl;
			cout << age << endl;
		}
		friend Age compare(Age a,Age b)
		{
			if(a.age>b.age)
			{
				return a;
			} else {
				return b;
			}
		}
};
int main()
{
	Age person1,person2;
	Age elder = compare(person1,person2);
	cout << "Oldest Person is : "<<endl;
	elder.display();
	return 0;
}
