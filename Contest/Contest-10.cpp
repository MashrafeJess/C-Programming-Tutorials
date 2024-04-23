#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
string add_rev(string s)
{
    string m = s ;
    reverse(s.begin(),s.end());
    return m+s;
}
string rev(string s)
{
        reverse(s.begin(),s.end());
        return s;
}
int main()
{
   long long t;
   cin >> t;
   while(t--)
   {
       int n;
       string s,s1,s2;
       cin >> n >> s;
       while(n--)
       {
           //s1 = add_rev(s);
           //s2 = rev(s);
           if((s<add_rev(s) && (s<rev(s))))
           {
              // s = add_rev(s);
             continue;
           } else if ((rev(s) <s)&& (rev(s) < add_rev(s))) {
                //s = rev(s);
               s = rev(s);
           } else {
                s = add_rev(s);
           }
   }
   cout << s << nl;
}
}
