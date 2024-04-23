#include <iostream>
using namespace std;
class Movie
{
private:
    string name;
    string genre;
public:
    void getdata();
    void showdata();
};
void Movie :: getdata()
{
    cout << "Enter the Movie name : \n";
    cin >> name;
    cout << "Enter the Movie Genre : \n";
    cin >> genre;
}
void Movie::showdata()
{
    cout << "Movie Title : " << name << endl;
    cout << "Movie Genre : " << genre << endl;
}
int main()
{
   Movie track[9];
   for(int i =0;i<9;i++)
   {
    track[i].getdata();
   }
   for(int i = 0;i<9;i++)
   {
    cout << "Serial No : " << i+1 << endl;
    track[i].showdata();
    cout << "================"<<endl;
   }
}
