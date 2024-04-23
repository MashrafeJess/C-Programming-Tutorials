#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i;
    cin >> m>>n;
    int arr[n];

    for( i = 0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int least = arr[m-1] - arr[0];
    int u = m;
    for(i = 1;i<=n-m;++i)
    {
        if((arr[i+m-1]-arr[i])<least)
        {
            least = arr[i+m-1]- arr[i];
        }
    }
    cout << least;

}

