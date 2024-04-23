#include <iostream>
#include <cmath>
using namespace std;
inline void cube (int n){
	int i=1,m;
	while(i<=100){
		 m = pow(i,n);
		cout << m << endl;
		i++;
	}
}
int main (){
	int num;
	cout << "Enter the Number :\n";
	cin >> num;
	cube(num);
	
}
