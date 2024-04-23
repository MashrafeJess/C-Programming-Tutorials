#include <bits/stdc++.h>
using namespace std;
int main()
{
    long n,x;
    cin >> n;
    int l = 0;
   vector <long> v;
   for(int i = 0;i<n-1;i++)
   {
       cin >> x;
       v.push_back(x);
   }
   sort(v.begin(),v.end());
   for(int i = 0;i<n-1;i++)
   {
       if(v[i] != (i+1))
       {
           cout << i+1;
           l++;
           break;
       }
   }
   if(l == 0)
   {
       cout << n;
   }
}
