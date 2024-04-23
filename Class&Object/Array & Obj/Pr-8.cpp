#include <iostream>
#include <cstring>
using namespace std;
class Product
{
private:
    string name;
    float price;
    int quantity;
    string details;
public:
    void input();
    void update();
    void show();
};

void Product::input()
{
    cout << "Enter Product Name : \n";
    cin >> name;
    cout << "Enter Product details : \n";
    cin.ignore();
    getline(cin,details);
    cout << "Enter Product Price : \n";
    cin >> price;
    cout << "Enter Product Quantity : \n";
    cin >> quantity;
}

void Product :: update()
{
    int a;
    cout << "Do you want to buy "<<name <<"?\nPress(1/0):\n";
    cin>>a;
    if(a==1)
    {
        cout << "How much do you want to buy?\n";
        cin >> a;
        if(a>quantity)
        {
            cout << "Insufficient Product";
        } else {
            quantity -= a;
        }
    } else 
    {
        cout << "Not buying";
    }
}
void Product :: show()
{
    cout << "Product Name : " << name << endl;
    cout << "Product Details : " << details << endl;
    cout << "Product Price : " << price << endl;
    cout << "Product Quantity : " << quantity << endl;
}

int main()
{
    Product item[2];
    for(int i = 0;i<2;i++)
    {
        item[i].input();
    }
     for(int i = 0;i<2;i++)
    {
        cout << "Product No : " << i+1 << endl;
        item[i].update();
        item[i].show();
        cout << "================"<<endl;
    }
}