#include <bits/stdc++.h>
#define nl "\n"
using namespace std;

int sum(vector<int> &n) {
    int sum1 = 0;
    for (int i = 0; i < n.size(); i++) {
        sum1 += n[i];
    }
    return sum1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, ans = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (sum(v) % 3 == 0) {
            cout << 0 << nl;
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (sum(v) % 3 != 0) {
                if (v[i] > 1) {
                    v[i]--;
                    ans++;
                } else {
                    v.erase(v.begin() + i);
                    ans++;
                    i--;
                }
                if (sum(v) % 3 == 0) {
                    break;
                }
            }
        }
        cout << ans << nl;
    }
}
