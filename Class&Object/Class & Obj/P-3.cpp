#include <iostream>
#include <cmath>
using namespace std; //Constructor
class Player
{
    string name = "Shimu";
    int score = 100;
    int level;

    public :
    void showinfo();
    void increaseScore();
    void increaseLevel();
};
void Player :: increaseScore(){
    int a;
    cout << "Enter how much score should increase ??\n";
    cin >> a;
    score = score + a;
}
void Player::increaseLevel() {
    level = round(static_cast<double>(score) / 100);
}

void Player :: showinfo(){
    cout << "Name : " << name << endl;
    cout << "Score : " << score << endl;
    cout << "Level : " << level << endl;
}
int main (){
    Player One;
    One.increaseScore();
    One.increaseLevel();
    One.showinfo();
}
