#include <bits/stdc++.h>
using namespace std;

int main()
{
    long a = 1,c=0,maxm=0;
    //,c,g,t;
    string s;
    cin >> s;
    for(int i = 0;i<s.size();i++)
    {
        if(s[i] == s[i+1])
        {
            a++;
        } else {

            a = 1;
        }
        if(a>=maxm)
        {
            maxm = a;
        } else {
            continue;
        }
    }
    cout << maxm;
}
