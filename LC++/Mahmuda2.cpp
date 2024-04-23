#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"
int main() {
    ll t, n, i, x, sum = 0;
    cin >> t;
	string s,f;
	int count = 0;
    while (t--) 
	{
		cin >> n >> s >> f;
		int n1 = count(s.begin(),s.end(),'1');
		int n2 = count(f.begin(),f.end(),'1');
		if(n1>n2)
		{
			for(int i = 0;i<n;i++)
		{
			if(f[i]=='0'&& s[i] == '1')
			{
				count++;
			}
		} else if(n1<n2)
		{
			if(s[i]=='0'&& f[i] == '1')
			{
				count++;
			}
		} else if(n1 == n2){
			cout << 0 <<nl;
			break;
		}
		cout << count << nl;
		}
		count = 0;
	}

    return 0;
}

