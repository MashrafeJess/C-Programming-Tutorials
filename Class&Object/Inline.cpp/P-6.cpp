#include <iostream>
#include <cmath>
using namespace std;
#define PI 3.1416
inline void circle_area (float r){
	float a = PI * pow(r,2);
	cout << "Area : " << a << endl;
}
int main (){
	float radius;
	cout << "Enter the radius : \n";
	cin >> radius;
	circle_area(radius);
	return 0;
}
