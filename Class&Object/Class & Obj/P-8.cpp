#include <iostream>
using namespace std;
class Product
{
private:
   string ID = "P001";
   string name = "Smartphone";
   float price = 499.99;
   int quantity = 10;
public:
    void changeQuantity();
    void showinfo();
};
void Product::changeQuantity(/* args */)
{
    int a;
    cout<<"Enter amount decreased !!\n";
    cin >> a;
    quantity -= a;
}
void Product::showinfo()
{
    cout << "Product ID : " << ID << endl;
    cout << "Product Name : " << name << endl;
    cout << "Product price : " << price << endl;
    cout << "Product quantity : " << quantity << endl;
}
int main ()
{
   Product brand;
   brand.showinfo();
   cout << "==================="<< endl;
   brand.changeQuantity();
   cout << "==================="<< endl;
   brand.showinfo();
} // namespace std;
