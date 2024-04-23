#include <bits/stdc++.h>
using namespace std;

#define nl '\n'

int main(){

    int n,c=0,c1=2,d=0;
    cin>>n;
    for(int i =1;i<=2*n;i++)
    {
        for(int j =1;j<=2*n;j++)
        {
            if((c<2))
            {
                cout << "#";
                ++c;
                c1--;
            } else if(c1==0) {
                cout << ".";
                d++;
            }
            if(d==2)
            {
                c1=2;
            }
            if(c1==2)
            {
                c=0;
            }
        }
        c=0;
        c1=2;
        cout << nl;
    }

return 0;
}
