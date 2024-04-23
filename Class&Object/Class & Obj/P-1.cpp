#include <iostream>
using namespace std;

class Vehicle {
private:
    string name;
    string model;
    int year;
    int mileage;
   // bool isluxury = true;

public:
    void getdata();
    void updateMil();
    void Check_Show();
};

void Vehicle::getdata() {
    cout << "Enter Car Name: ";
    cin >> name;
    cout << "Enter Car Model: ";
    cin >> model;
    cout << "Enter Car Year: ";
    cin >> year;
    cout << "Enter Car Mileage: ";
    cin >> mileage;
}

void Vehicle::updateMil() {
    mileage += 500;
}

void Vehicle::Check_Show() {
    cout << "Name: " << name << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Mileage: " << mileage << endl;
     if(mileage > 10000){
        cout << "This car is a luxury car!";
    } else {
         cout << "This car is not a luxury car!";
    }
}

int main() {
    Vehicle car;
    car.getdata();
    car.Check_Show();
    car.updateMil();
    car.Check_Show();
    return 0;
}
