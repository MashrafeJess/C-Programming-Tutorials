#include <iostream>
using namespace std;
void add(int &a,int &b){
    int sum = a + b;
    a = sum;
}
int main(){
    int a,b;
    cout << "Enter the Numbers  : \n";
    cin >> a >> b ;
    add(a,b);
    cout << "Sum : " << a << endl;
    return 0;
}
