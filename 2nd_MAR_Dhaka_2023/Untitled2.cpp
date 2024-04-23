#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        // Print spaces
        for(int j=1; j<=n-i; j++) {
            cout << " ";
        }

        // Print numbers
        for(int j=1; j<=2*i-1; j++) {
            cout << i;
        }

        // Print newline
        cout << endl;
    }

    return 0;
}

