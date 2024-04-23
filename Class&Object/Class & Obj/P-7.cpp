#include <iostream>
using namespace std;
class Song
{
    string title = "Bohemian Rhapsody";
    string name = "Queen";
    string duration = "5:55";
    public : 
    void show();
};
void Song :: show()
{
    cout << "Title : " << title<< endl;
    cout << "Artist Name : " << name << endl;
    cout << "Duration : " << duration << endl;
}
int main ()
{
    Song music;
    music.show();
    return 0;
}