#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define ll long long
int main()
{
    int t,c=1;
     cin >> t;
     while(t--)
     {
        int n,d=1;
        cin >> n;
        int k=1;
        for(int i =1;i<=2*n;i++)
        {
            if(d<=2*n)
            {
                for(int j =1;j<=2*n;j++)
                {
                    if((i<j)&&(c<=2))
                    {
                        cout<< "#";
                        c++;
                    } else {
                        cout << ".";
                    }
                }
            } else{
                for(int j =1;j<=2*n;j++)
                {
                    if((i<j)&&(c<=2))
                    {
                        cout<< ".";
                        c++;
                    } else {
                        cout << "#";
                    }
                }
            }
            cout << nl;
        }
     }
}

