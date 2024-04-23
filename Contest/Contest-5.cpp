#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
 int main()
 {
     ll t;
      cin >> t;
      while(t--)
      {
        ll n,sum=0,tot=0;
        cin >> n;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for(int i = 0;i<n-1;i++)
        {
            sum = arr[i+1] - arr[i];
            tot += sum;
        }
        cout << tot << nl;
        sum =0;
        tot = 0;
 }
 }
