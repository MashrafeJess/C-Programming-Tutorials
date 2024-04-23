#include <iostream>
using namespace std;
void generateFibonacci(int n, int& a, int& b) {
    for (int i = 2; i < n; i++) {
        int c = a + b;
        a = b;
        b = c;
       cout << c << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of terms in the Fibonacci series: ";
   cin >> n;
   int a = 0, b = 1;
   cout << "Fibonacci series: " << a << " " << b << " ";
    generateFibonacci(n, a, b);

    return 0;
}
