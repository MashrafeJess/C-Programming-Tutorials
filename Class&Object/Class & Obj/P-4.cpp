#include <iostream>
#include <cstring>
using namespace std;
class MenuItem
{
    string name ;
    float price ;
    string description ;

    public :
    void insert();
    void show();
} ;
void MenuItem::insert() {
    cout << "Enter the food name: ";
    cin >> name;
    cout << "Enter the description: ";
    cin.ignore(); // Ignore the remaining newline character from previous input
    getline(cin, description);
    cout << "Enter the price value: ";
    cin >> price;
}
void MenuItem :: show(){
    cout << "Name : " << name << endl;
    cout << "Descriotion : " << description << endl;\
    cout << "Price : " << price << endl;
}
int main(){
    int i;
    MenuItem FastFood[2];
    for(i=0;i<2;i++){
        FastFood[i].insert();
    }
    for(i=0;i<2;i++){
        cout << "Product NO : " << i << endl;
        FastFood[i].show();
        cout << endl;
    }
return 0;
}