#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,c=0,j;
    cin >> n;
    vector <int> v;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n-1;j++)
        {
            if(v[j] == v[i])
            {
                c++;
            } else {
                break;
            }
        }
        if(c != 0)
        {
            count++;
            cout << c << endl;
            i = c + 1;
            j =  c +1;
            c = 0;
        }
    }
    cout << count;
}
