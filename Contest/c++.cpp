#include <iostream>
using namespace std;

void update(int (&arr)[], int n) // Reference to an array
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = (arr[i] * 0.4) + arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Employee No " << i + 1 << " : " << arr[i] << endl;
    }
}

int main()
{
    int n = 3;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    update(arr, &n); // Passing array by reference
    return 0;
}
