#include <iostream>
using namespace std;
inline int fibonacchi(int n){
	int temp;
	if(n<=0){
		return 0;
	} else if(n == 1){
		return 1;
	} else {
		int a = 0, b = 1;
		for(int i = 2;i<= n;i++){
			 temp = a + b;
			a = b;
			b = temp;
		}
		return temp;
	}
}
int main (){
	int a = 0,b = 1,n;
	cout << "Enter the Term : \n";
	cin >> 	n;
	cout << a << " " << b;
	for(int i=2;i<=n;i++){
		cout << " " << fibonacchi(i);
	}
}
