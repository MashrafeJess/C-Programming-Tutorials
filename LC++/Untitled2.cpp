#include<bits/stdc++.h>
using namespace std;
#define nl "\n"

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
     for(int i = 0;i<s.size();i++)
    {
        if(s[i] == '0')
        {
            if(s[i+1] == '1')
            {
                s.erase((s.begin()+i),(s.begin()+i)+2);
                //cout << s << nl; 
                //cout << s.size()<< nl;
                i = -1;
            } else {
                continue;
            }
        } else if(s[i] == '1')
        {
            if(s[i+1]=='0')
            {
                s.erase((s.begin()+i),(s.begin()+i)+2);
                //cout << s << nl; 
                //cout << s.size() << nl;
                i=-1;
              
            } else {
                continue;
            }
        }
    }
    cout << s.size();
}


