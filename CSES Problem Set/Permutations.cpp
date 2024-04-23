#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
int main()
{
    int n;
    cin >> n;
    if(n == 1)
    {
        cout << 1 << nl;
        return 0;
    } else if (n<4)
    {
        cout << "NO SOLUTION" << nl;
        return 0;
    }
    int even = 2;
    while(even<=n)
    {
        cout << even << " ";
        even += 2;
    }
    int odd = 1;
    while(odd<=n)
    {
        cout << odd <<   " ";
        odd  += 2;
    }

}
