#include <iostream>
#include <cstring>
using namespace std;  //Constructor
class post
{
    int ID = 1;
    string Author = "Shakil";
    string content = "Hello,world!";

    public :
    void changePOst();
    void showPOst();
};
void post :: changePOst()
{   int n;
    cout << "Do you want to change your ID?\nPress (1/0)";
    cin >> n;
    if(n==1){
        int a;
        cin >> a;
        ID = a;
    }
    int b;
    cout << "Do you want to change your Name?\nPress (1/0)";
    cin >> b;
    if(b==1){
        string c;
        cin >> c;
        Author = c;
    }
    int d;
    cout << "Do you want to change your content?\nPress (1/0)";
    cin >> d;
    if(d==1){
        string e;
        cin.ignore();
        getline(cin,e);
        content = e;
    }
}
void post :: showPOst()
{
    cout << "ID = " << ID << endl;
    cout << "Author Name : " << Author << endl;
    cout << "Description : " << content << endl;
}
int main ()
{
    post Post;
    Post.showPOst();
    Post.changePOst();
    Post.showPOst();
}
