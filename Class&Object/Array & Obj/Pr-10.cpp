#include <iostream>
#include <limits>
using namespace std;
float maxim = numeric_limits<float>::min();
class Music
{
private:
    string name;
    float duration;
public:
    void input();
    void compare();
    void show();
};

void Music :: input()
{
    
    cout << "Enter Song Name :\n";
    cin >> name;
    cout << "Enter Duration : \n";
    cin >> duration;
    if(duration>maxim)
    {
        maxim = duration;
    }
}
void Music :: show()
{
    cout << "Song Title : " << name << endl;
    cout << "Song Duration : " << duration << endl;
    cout << "Longest Song Duration : " << maxim << endl;
}
int main()
{
  Music song[3];
  for(int i = 0;i<3;i++)
  {
    song[i].input();
  } 
   for(int i = 0;i<3;i++)
  {
    cout << "Song NO : " << i+1 << endl;
    song[i].show();
    cout << "================"<< endl;
  }
} 
