#include <iostream>
using namespace std;
inline int conv (int a){
    int i = a,r=0,p = 1;
    while(i>0){
        int m = i % 2;
        r = r +(p*m);
        p*=10;
         i/=2;
    }
    return r;
}
int main()
{
    int num;
    cout << "Enter the number :";
    cin >> num;
    cout << "Binary Form : " << conv (num) << endl;
    return 0;
}
