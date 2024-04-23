#include <iostream>
using namespace std;
class complx
{
   int real;
   int imag;
   public:
       void input(int a,int b)
       {
           real = a;
           imag = b;
       }
       void output()
       {
           cout << real << " + " << imag << "i" << endl;
       }
       friend complx add(complx a,complx b)
       {
           complx result;
           result.real = a.real + b.real;
           result.imag = a.imag + b.imag;
           return result;
       }
};
int main()
{
    int a1,a2,b1,b2;
    cin >> a1 >> a2 >> b1 >> b2;// a1 5 a2 6 b1 2 b2 7
    complx a,b,xyz;
    a.input(a1,a2);
    b.input(b1,b2);
    a.output();
    b.output();
    xyz = add(a,b);
    xyz.output();
}
