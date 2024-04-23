#include<iostream>
#include<conio.h>
using namespace std;
class Calculator
{
public:
    int calculate(int a, int b)
    {
        return a/b;
    }
    double calculate(double a, double b)
    {
        return a*b;
    }
    long double calculate (long double a, long double b)
    {
        return a+b;
    }

};
int main()
{
    Calculator calculator;
   int result1;
   double result2;
   long double result3;
    result1=calculator.calculate(9,6);
    result2=calculator.calculate(5.5,3.5);
    result3=calculator.calculate(56.2,85.14);
    cout<<"Sum of these integers:"<<result1<<endl;
    cout<<"Sum of these doubles:"<<result2<<endl;
    cout<<"Sum of these long double:"<<result3<<endl;
    getch();
}
