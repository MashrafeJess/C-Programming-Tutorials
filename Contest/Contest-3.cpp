#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int  a, b, r, m1;
        long long int comp = LLONG_MAX;  // Use LLONG_MAX for comparison
        cin >> a >> b >> r;
        long long int  x = 0;

        while (x<= r)
        {
            m1 = abs((a ^ x) - (b ^ x));

            if (m1 < comp) {
                comp = m1;
            }
            x++;
        }
        cout << comp << nl;
    }

    return 0;
}
