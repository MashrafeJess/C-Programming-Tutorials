#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int sum=0;
        cin >> s;
        int m = stoi(s);
        //cout << m << nl;
        if (m<1)
        {
            s[0] = '1';
            s[1] = '2';
            cout << s << " AM" << nl;
        }else if((m>12)&&(m<22))
        {
            m -=12;
            cout << m << nl;
            string n = to_string(m);
            s[0] = '0';
            s[1] =n[0];
            cout << s << " PM" << nl;
        } else if(m>=22){
            m-=12;
            string k = to_string(m);
            s[0] = k[0];
            s[1] = k[1];
            cout << s << " PM" << nl;
        }else if (m<12)
        {
            cout << s << " AM" << nl;
        } else if(m==12)
        {
            cout << s << " PM" << nl;
        }
    }
}
