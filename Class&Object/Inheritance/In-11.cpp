#include <iostream>
using namespace std;
class Apples
{
    protected :
    int apples = 10;
};
class Mangoes
{
    protected :
    int mangoes = 20;
};
class Fruits : Apples,Mangoes
{
    public :
    void output()
    {
        cout << "Total Fruits = " << apples + mangoes;
    }
};
int main()
{
    Fruits sum;
    sum.output();
    return 0;
}