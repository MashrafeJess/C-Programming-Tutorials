#include <bits/stdc++.h>
using namespace std;

int main() {
    int asciiCode = 122; // ASCII code for 'A'
    char letter = static_cast<char>(asciiCode);
    cout << "The letter corresponding to ASCII code " << asciiCode << " is: " << letter << endl;
                set <string > s1;
                s1.insert(string(1,letter));
for(string value : s1)
    {
        cout << value ;
    }
    return 0;
}
