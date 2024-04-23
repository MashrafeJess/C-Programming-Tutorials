#include <iostream>
using namespace std;
inline float kg(float m){
	float k = m * 0.45;
	return k;
}
int main (){
	float lb;
	cout << "Enter the weight (lb) :\n";
	cin >> lb;
	cout << kg(lb);
	return 0;
}
