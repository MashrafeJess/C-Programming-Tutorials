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
        ll n;
        ll sum;;
        cin >> n;
        vector <ll>v;
        for(ll i = 0;i<n;i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        sum = accumulate(v.begin(),v.end(),0);
        cout << sum;
     }
}


