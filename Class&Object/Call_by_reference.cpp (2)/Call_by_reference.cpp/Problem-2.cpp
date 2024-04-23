#include <iostream>
#include <algorithm>
using namespace std;
void reverse_dig(int &n){
   int m,rev = 0;
   for(int i =n;i>0;i/=10){
    m = i % 10 ;
    rev = rev*10 + m;
   }
   n = rev;
}
void Swap (int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main (){
    int a,b;
    cout << "Enter the numbers : \n";
    cin >> a >> b;
    cout << "Before Swapping: \n";
    cout << "a : " << a << " & " << "b : " << b << endl;
    cout << "After Reverse & Swapping : \n";
    reverse_dig(a);
     reverse_dig(b);
    Swap(a,b);
    cout << "a : " << a << " & " << "b : " << b;
}
