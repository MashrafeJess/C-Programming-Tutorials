#include <iostream>
#include <algorithm>
using namespace std;
void comp (int &a,int &b,int &c)
{
 if(a>b && a>c){
    cout << "Rakib";
 } else  if(b>a && b>c){
    cout << "Hasan";
 } else {
    cout << "Purno";
 }
}
int main(){
 int Rakib,Hasan,Purno;
 cout << "ENter the marks : \n";
 cin >> Rakib >> Hasan >> Purno;
 comp(Rakib,Hasan,Purno);
cout <<  " got highest mark!" << endl;
return 0;
}
