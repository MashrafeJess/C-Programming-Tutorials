#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n,x,y;
        cin >> n;
        long long c=0;
        while(n--)
        {
            cin>>x>>y;
            c += min(x,y);
        }
        cout << c << nl;
    }
}
