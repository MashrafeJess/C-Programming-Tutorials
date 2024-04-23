#include <iostream>
using namespace std;
int i;
class Customer
{
private:
    string name;
    string details;
    public:
    void input();
    void show();
};
void Customer::input()
{
    cout << "Enter Customer Name : \n";
    cin >> name;
    cout << "Enter Customer Details : \n";
    cin >> details;
}
void Customer :: show()
{
    cout << "CUstomer Name : " << name << endl;
    cout << "Order Details : " << details << endl;
}
int main()
{
   Customer order[2];
   for(i=0;i<2;i++)
   {
    order[i].input();
   }
   for(i=0;i<2;i++)
   {
    cout << "Customer No : " << i+1 << endl;
    order[i].show();
    cout << "================="<<endl;
   }
return 0;
}
