#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string company, model;
    int year, rgNo, Rent;
    bool rented;

public:
    Car(string comp, string mdl, int yr, int rg, int rnt, bool rntd) :
        company(comp), model(mdl), year(yr), rgNo(rg), Rent(rnt), rented(rntd) {}

    Car(string comp, string mdl, int yr, int rg, int rnt) :
        company(comp), model(mdl), year(yr), rgNo(rg), Rent(rnt), rented(false) {}

    void displayCar() const
    {
        cout << "\t\t\t\tCompany: " << company << endl;
        cout << "\t\t\t\tModel: " << model << endl;
        cout << "\t\t\t\tYear: " << year << endl;
        cout << "\t\t\t\tRegistration No: " << rgNo << endl;
        cout << "\t\t\t\tRent: Rs" << Rent << "/day" << endl << endl;
        cout << "\t\t\t\t============================================" <<endl;
    }

    bool isRented() const
    {
        return rented;
    }

    void rent()
    {
        rented = true;
    }

    friend void displayUserDetails(const Car& car, const string& name, int mob, const string& mail);

    bool operator==(const Car& other) const
    {
        return rgNo == other.rgNo;
    }
};

void displayUserDetails(const Car& car, const string& name, int mob, const string& mail)
{
    cout << "\t "<<name << ", "<<endl;
    cout << "\tYour mobile: " << mob << endl;
    cout << "\tYour E-mail: " << mail << endl << endl;
    car.displayCar();
}

int main()
{
    string name, mail;
    int mob;

    Car car123 = {"Toyota", "Corolla", 2022, 123, 5000, false};
    Car car345 = {"Honda", "Civic", 2023, 345, 7000, true};
    Car car567 = {"Suzuki", "Alto", 2021, 567, 4000, false};
    Car car789 = {"Ford", "Mustang", 2023, 789, 8000};

    cout <<"\t\t\t\t\t\t\t WELCOME TO" << endl;
    cout << "\t\t\t\t\t\t\t~RENTA CAR~" << endl << endl;
    cout << "\t\t\t\t\t\t ---Available Cars---" << endl << endl;
    car123.displayCar();
    car345.displayCar();
    car567.displayCar();
    car789.displayCar();

    cout <<"\t\t\t\tEnter" << endl;
    cout <<"\t\t\t\tName: ";
    cin >> name;
    cout << "\t\t\t\tMobile: ";
    cin >> mob;
    cout << "\t\t\t\tE-mail: ";
    cin >> mail;
    cout << "\t\t\t\tEnter Registration No" << endl;
    int choice;
    cout << "\t\t\t\tEnter: ";
    cin >> choice;
    switch (choice)
    {
        case 123:
            if (!car123.isRented())
            {
                system("cls");
                car123.rent();
                displayUserDetails(car123, name, mob, mail);
            }
            else
            {
                cout << "This car is already rented" << endl << endl;
            }
            break;
        case 345:
            if (!car345.isRented())
            {
                system("cls");
                car345.rent();
                displayUserDetails(car345, name, mob, mail);
            }
            else
            {
                cout << "This car is already rented" << endl << endl;
            }
            break;
        case 567:
            if (!car567.isRented())
            {
                system("cls");
                car567.rent();
                displayUserDetails(car567, name, mob, mail);
            }
            else
            {
                cout << "This car is already rented" << endl << endl;
            }
            break;
        case 789:
            if (!car789.isRented())
            {
                system("cls");
                car789.rent();
                displayUserDetails(car789, name, mob, mail);
            }
            else
            {
                cout << "This car is already rented" << endl << endl;
            }
            break;
        default:
            cout << "Invalid choice." << endl;
    }
    return 0;
}

