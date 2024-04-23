#include <iostream>
using namespace std;
inline void floyd(int n){
	int r,c,a=1;
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++){
			cout << a++ <<" ";
		}
		cout << endl;
	}
}
int main (){
	int n;
	cin >> n;
	floyd(n);
	return 0;
}
