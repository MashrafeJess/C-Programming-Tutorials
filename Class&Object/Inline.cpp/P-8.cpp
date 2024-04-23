#include <iostream>
using namespace std;
inline void sum (){
	int i = 100,sum =0;
	for(i;i<=200;i++){
		if(i%9==0){
			sum = sum + i;
		}
	}
	cout << sum ;
}
int main (){
	sum();
}
