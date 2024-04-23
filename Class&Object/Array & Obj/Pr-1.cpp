#include <iostream>
#include <limits.h>
using namespace std;
int i,maxim = INT_MIN;
class Player
{
    string name;
    int score;
public :
    void input();
    void show();
};
void Player :: input()
{
    cout << "Name : ";
    cin >> name;
    cout << "Score : ";
    cin >> score;
    if(score > maxim){
        maxim = score;
    }
}
void Player :: show()
{
    cout << "Name : " << name << endl;
    cout << "Score : " << score << endl;
    //cout << "Highest Score : " << maxim;
}
int main()
{
    Player game[3];
    for(i=0;i<3;i++)
    {
        game[i].input();
    }
    cout << "==================="<< endl;
    for(i=0;i<3;i++)
    {
        cout << "Player No : " << i+1 << endl;
        game[i].show();
        cout << endl;
    }
    cout << "Highest Score : " << maxim << endl;
}