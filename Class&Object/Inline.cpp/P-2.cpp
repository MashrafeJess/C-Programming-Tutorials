#include <iostream>
using namespace std;

inline int Series(int a, int d, int n) {
    return (n / 2) * (2 * a + (n - 1) * d);
}

int main() {
	int first,diff,last;
	cin >> first >> diff >> last;

    int sum = Series(first, diff, last);

    cout << "Sum of the A.P. series: " << sum << endl;

    return 0;
}
