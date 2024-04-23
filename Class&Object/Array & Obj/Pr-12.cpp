#include <iostream>
#include <limits>
using namespace std;
int maxim = INT_MIN,i;
class Game
{
private:
    string name;
    int level;
public:
   void input();
   void upgrade();
   void count();
   void show();
};

void Game::input()
{
    cout << "Enter the name : \n";
    cin >> name;
    cout << "Enter the level :\n";
    cin >> level;
}
void Game :: upgrade()
{
    int a;
    cout << "Do you want to increase the character level??\nPress(0/1):\n";
    cin >> a;
    if(a == 1)
    {
        cout << "How much level do you want to increase?\n";
        cin >> a;
        level += a;
    } else {
        cout << "pass" << endl;
    }
}
void Game :: count()
{
    if(level>maxim)
    {
        maxim = level;
    }
    cout << "Highest Level : "<< maxim<< endl;
}
void Game::show()
{
    cout << "Character Name : " << name << endl;
        cout << "Character Level : " << level << endl;
}
int main ()
{
    Game lvl[20];
    for(i=0;i<20;i++)
    {
        lvl[i].input();
    }
    cout << endl;
    for(i=0;i<20;i++)
    {
        cout << "Character NO : " << i+1 << endl;
        lvl[i].upgrade();
        lvl[i].show();
        lvl[i].count();
        cout << "==================="<<endl;
    }

}
