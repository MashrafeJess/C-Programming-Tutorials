#include <iostream>
using namespace std;
int i;
 float sum = 0;
class BOOK
{
    float height;
public :
    void input();
    void show();
};
void BOOK :: input()
{
    cout << "enter the height :\n";
    cin >> height;
    sum += height;
}
void BOOK :: show()
{
    cout<<"================="<<endl;
    cout << "Height : " << height<<endl;
    cout<<"================="<<endl;
}
int main()
{
    BOOK tall[2];
    for(i=0;i<2;i++)
    {
        tall[i].input();
    }
    cout << endl;
    for(i=0;i<2;i++){
        tall[i].show();
    }
    float avg = sum/2;
    cout << "Average of all students : " << avg;
    return 0;
}