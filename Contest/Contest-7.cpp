#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
int main()
{
    int t;
     cin >> t;
     while(t--)
     {
        long long res,div,m,n,sum=0,sum1=0;
        cin >> n;
        div = n/9;
        m = div;
        //cout << m << nl;
       //cout << div << nl;
       while(div--)
       {
           sum += (9*(9+1))/2;
       }
       cout << sum << nl;
        res = n - (m*9);
       //cout << res << nl;
       sum1 = (res*(res+1))/2;
       cout << sum+sum1 << nl;
       sum =0,sum1=0;
     }

}
