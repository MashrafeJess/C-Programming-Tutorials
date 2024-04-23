#include <iostream>
#include <limits>
using namespace std;
int i;
class car
{
private:
    string brand;
    float laps[3];
public:
    void insert();
    void show();
};

void car::insert()
{
    cout << "Enter the Brand Name : \n";
    cin >> brand;
    cout << "Enter the lap time : \n";
    for(i=0;i<3;i++)
    {
        cin >> laps[i];
    }
}
 void car :: show()
{
    float mini = numeric_limits<float>::max();
    cout << "Brand Name : " << brand << endl;
    for(i=0;i<3;i++)
    {
        cout << "lap " << i+1 << ": " << laps[i] << endl;
        if(laps[i]< mini)
        {
           mini = laps[i];
        }
    }
    cout << "Minimum Lap Time : " << mini << endl;
}
int main()
{
    int j;
    car lap[2];
    for(j=0;j<2;j++)
    {
        lap[j].insert();
    }
    for(j=0;j<2;j++)
    {
        lap[j].show();
        cout << "=============="<< endl;
    }
    
    return 0;
} 

