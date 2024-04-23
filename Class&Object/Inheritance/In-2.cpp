#include <iostream>
using namespace std;

class area2 {
private:
    int length, width;
public:
    void input();
    int output();
};

class rect : protected area2 {
private:
    int area;
public:
    void area1();
};

void area2::input() {
    cout << "Enter the values : ";
    cin >> length >> width;
}

int area2::output() {
    //cout << "Area is : " << length * width << endl;
    return length * width;
}

void rect::area1() {
    area = output();
    cout << "Area is : " << area << endl;
}

int main() {
    rect c;
    c.input();
    c.area1();
    return 0;
}
