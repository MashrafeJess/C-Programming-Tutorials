#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long r,c;
        long long arr[10e6][10e6];
        cin >> r >> c;
        cout << arr[r-1][c-1] << endl;
    }
    return 0;
}
