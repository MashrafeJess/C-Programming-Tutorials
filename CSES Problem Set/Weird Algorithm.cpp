#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n;
    cin >> n;
    long  i = n;
    cout << i << " ";
    while(i != 1)
    {
        if(i%2 == 0)
        {
            i/=2;
            cout << i << " ";
        } else if(i%2 != 0) {
            i*=3;
            i++;
            cout << i << " ";
        }
    }
}
