#include <iostream>
#include <cmath>
using namespace std;
inline int power (int n){
	int exp = pow(n,n);
	return exp;
}
int main (){
	int num;
	cout << "Enter the NUmber : \n";
	cin >> num;
	cout << "Exponantial of the Number is : " << power(num);
	return 0;
}
