#include <iostream>
using namespace std;
class Speakers
{
private:
    string name;
    string topic;
public:
   void input();
   void implement();
   void show();
};

void Speakers::input(/* args */)
{
    cout << "Enter the Speaker Name : \n";
    cin >> name;
    cout << "Enter the Speaker Topic : \n";
    cin >> topic;
}

void Speakers:: implement()
{
    string a;
    cout << "Do you want to change the topic?\nPress(1/0):\n";
    cin >> a;
    if(a == "1")
    {
        cout << "Enter the new topic :\n";
        cin >> a;
        topic = a;
    } else 
    {
        cout << "It's same !" << endl;
    }
}
void Speakers :: show()
{
    cout << "Speaker NAme : " << name << endl;
    cout << "Speaker topic : " << topic << endl;
}
int main()
{
    Speakers speech[10];
    for(int i = 0;i<10;i++)
    {
        speech[i].input();
    }
    cout << endl;
    for(int i = 0;i<10;i++)
    {
        cout << "Speaker NO : " << i+1 << endl;
        speech[i].implement();
        speech[i].show();
        cout << "==================="<<endl;
    }

};
