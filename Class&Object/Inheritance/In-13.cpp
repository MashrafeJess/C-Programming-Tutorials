#include <iostream>
using namespace std;
class Vehicle
{
	protected:
	float mileage,price;
};
class Car : protected Vehicle
{
	protected :
		int cost,seat;
		string warranty,fuel;
};
class Bike : protected Vehicle
{
	protected :
	int cylinder,gear;
	float tank;
	string cooling,wheel;
};
class Ford : protected Car
{
	string model;
	public :
		Ford()
		{
			cout << "Enter the model name : ";
			cin >> model;
			cout << "Enter the mileage : ";
			cin >> mileage;
			cout << "Enter the price : ";
			cin >> price;
			cout << "Enter the Ownership cost : ";
			cin >> cost;
			cout << "Enter the number of seat : ";
			cin >> seat;
			cout << "Enter the warranty (date) : ";
			cin >> warranty;
			cout << "Enter the fuel type : ";
			cin >> fuel;
		}
		~Ford()
		{
			cout << "Enter the model name : " << model << endl;
			cout << "Enter the mileage : "<< mileage << endl;
			cout << "Enter the price : "<< price << endl;
			cout << "Enter the Ownership cost : "<< cost << endl;
			cout << "Enter the number of seat : "<< seat << endl;
			cout << "Enter the warranty (date) : "<< warranty << endl;
			cout << "Enter the fuel type : "<< fuel << endl;
		}
};
class Audi : protected Car
{
	string model;
	public:
		Audi()
		{
			cout << "Enter the model name : ";
			cin >> model;
			cout << "Enter the mileage : ";
			cin >> mileage;
			cout << "Enter the price : ";
			cin >> price;
			cout << "Enter the Ownership cost : ";
			cin >> cost;
			cout << "Enter the number of seat : ";
			cin >> seat;
			cout << "Enter the warranty (date) : ";
			cin >> warranty;
			cout << "Enter the fuel type : ";
			cin >> fuel;
		}
		~Audi()
		{
			cout << "Enter the model name : " << model << endl;
			cout << "Enter the mileage : "<< mileage << endl;
			cout << "Enter the price : "<< price << endl;
			cout << "Enter the Ownership cost : "<< cost << endl;
			cout << "Enter the number of seat : "<< seat << endl;
			cout << "Enter the warranty (date) : "<< warranty << endl;
			cout << "Enter the fuel type : "<< fuel << endl;
		}
	};
class Bajaj : protected Bike
{
	string make;
	public :
		Bajaj()
		{
			cout<< "Enter the make : " ;
			cin >> make;
			cout<< "Enter the mileage : " ;
			cin >> mileage; 
			cout<< "Enter the price : " ;
			cin >> price;
			cout<< "Enter the number of cylinder : " ;
			cin >> cylinder;
			cout<< "Enter the number of gear : " ;
			cin >> gear;
			cout<< "Enter the tank size : " ;
			cin >> tank;
			cout<< "Enter the cooling (type) : " ;
			cin >> cooling;
			cout<< "Enter the wheel (type) : " ;
			cin >> wheel;
		}
		~Bajaj()
		{
			cout<< "make : " << make << endl ;
			cout<< "mileage : " << mileage << endl;
			cout<< "price : " << price << endl;
			cout<< "number of cylinder : " << cylinder << endl;
			cout<< "number of gear : << gear << endl" ;
			cout<< "tank size : " << tank << endl;
			cout<< "cooling (type) : " << cooling << endl;
			cout<< "wheel (type) : " << wheel << endl;
		}
};
class TVS : protected Bike
{
	string make;
	public :
		TVS()
		{
			cout<< "Enter the make : " ;
			cin >> make;
			cout<< "Enter the mileage : " ;
			cin >> mileage; 
			cout<< "Enter the price : " ;
			cin >> price;
			cout<< "Enter the number of cylinder : " ;
			cin >> cylinder;
			cout<< "Enter the number of gear : " ;
			cin >> gear;
			cout<< "Enter the tank size : " ;
			cin >> tank;
			cout<< "Enter the cooling (type) : " ;
			cin >> cooling;
			cout<< "Enter the wheel (type) : " ;
			cin >> wheel;
		}
		~TVS()
		{
			cout<< "Make : " << make << endl ;
			cout<< "mileage : " << mileage << endl;
			cout<< "price : " << price << endl;
			cout<< "number of cylinder : " << cylinder << endl;
			cout<< "number of gear : << gear << endl" ;
			cout<< "tank size : " << tank << endl;
			cout<< "cooling (type) : " << cooling << endl;
			cout<< "wheel (type) : " << wheel << endl;
		}
};
int main()
{
	Audi a;
	Ford b;
	Bajaj c;
	TVS d;
	return 0;
}
