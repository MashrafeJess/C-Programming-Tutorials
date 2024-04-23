#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans =0;
        int sum =0;
        vector <int> v;
        for(int i = 0;i<n;i++)
        {
            int x;
            cin >> x;
           v.push_back(x);
        }
        for(int i = 0;i<n;i++)
        {
            if(v[i]==1)
            {
                sum++;
            }
            if(sum>2)
            {
                break;
            }
        }
        if(sum==1)
        {
            cout << '0' << nl;
           continue;
        }
        //int sum1 = count(string(v).begin(),string(v).end(),'1');
        //int sum=0;
        int count1=0,count2=0;
        if(v[0]==0)
        {
            for(int i= 1;i<n-1;i++)
        {
            if((v[i]==1 && v[i+1]==1) || (v[i]==1 && v[i+1]==0))
            {
                count1++;
                //sum++;
            }
            /*if(sum == sum1)
            {
                cout << count2<<nl;
                return 0;
            }*/
            if( v[i]== 0 )
            {
                count2++;
                if(count1>=ans)
                {
                    //count2++;
                    ans = count1;
                    count1 =0;
                }
            }
        }
        } else {
            for(int i= 0;i<n-1;i++)
        {
            if((v[i]==1 && v[i+1]==1) || (v[i]==1 && v[i+1]==0))
            {
                count1++;
            }
            if( v[i]== 0 && v[i+1]==1)
            {
               // count2++;
                if(count1>=ans)
                {
                    count2++;
                    ans = count1;
                    count1 =0;
                }
            }
        }
        }
        cout << count2 << nl;
    }
}
