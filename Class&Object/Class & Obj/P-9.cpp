#include <iostream>
using namespace std;
class Event
{
private:
    string date = "2023-08-15";
    string Name = "Birthday Party";
    string location = "Park Plaza";

public:
    void showinfo();
};

void Event :: showinfo()
{
    cout << "Event Name : " << Name << endl;
     cout << "Event Date : " << date << endl;
      cout << "Event Location : " << location << endl;
}

int main()
{
    Event day;
    day.showinfo();
}

