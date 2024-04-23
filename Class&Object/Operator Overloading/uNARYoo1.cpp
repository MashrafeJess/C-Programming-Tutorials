#include <iostream>
using namespace std;

class Elevator {
private:
    int floor;

public:
    Elevator()
    {
        cout<<"Enter the Current floor:";
        cin>>floor;
    }

    void show() {
        cout << "Current floor: " << floor << endl;
    }

    Elevator operator++() {
        if (floor < 10)
            {
            ++floor;
            }

    }

    Elevator operator--()
    {
        if (floor > 1)
            {
            --floor;
            }
              return *this;
    }
};

int main() {
    Elevator ele;

    ele.show();
    ++ele;
    ele.show();
    --ele;
    ele.show();

    return 0;
}
