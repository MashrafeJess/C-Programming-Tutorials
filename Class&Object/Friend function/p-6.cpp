#include <iostream>
using namespace std;
bool borrowed = true;
class Book
{
private:
    string ID = "B001";
    string title = "To Kill a Mockingbird";
    string aUTHOR = "Harper Lee";
    string status = "available";
public:
    void borrow();
    void returN();
    void update();
};
void Book  ::borrow(/* args */)
{
    if(borrowed){
        status = "unavailable";
    }
}
void Book ::returN()
{
    status = "available";
}
void Book :: update()
{
    cout << "Book ID : " << ID << endl;
     cout << "Book Title : " << title << endl;
      cout << "Book Author : " << aUTHOR << endl;
       cout << "Book Status : " << status << endl;
}
int main ()
{
    Book book[2];
    for(int i = 0;i<2;i++)
    {
    book[i].update();
    cout << "=========" << endl;
    book[i].borrow();
    book[i].update();
    cout << "=========" << endl;
    book[i].returN();
    book[i].update();
    cout << "=========" << endl;
	}
}
