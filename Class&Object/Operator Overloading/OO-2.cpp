#include <iostream>
using namespace std;

class Potion {
    int potency;
    float duration;

public:
    Potion(int a, float b) {
        potency = a;
        duration = b;
    }

    Potion operator * (Potion a) {
        Potion c(potency * a.potency, duration * a.duration);
        /*Potion c;
        c.potency = potency * a.potency;
        c.duration = duration * a.duration;*/
        return c;
    }
    void display() {
        cout << "=====================" << endl;
        cout << "Potion potency: " << potency << "%" << endl;
        cout << "Potion duration: " << duration << " seconds" << endl;
    }
};

int main() {
    int x, m;
    float y, n;
    cout << "Enter the potion potency (int) & duration (float): ";
    cin >> x >> y;  // Added the missing semicolon here
    cin >> m >> n;
    Potion a(x, y), b(m, n),c(0,0);
    c = a * b;
    a.display();
    b.display();
    c.display();
    return 0;
}
