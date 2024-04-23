#include <iostream>
using namespace std;
class book
{
    int id = 001;
    string title = "To Kill a Mockingbird";
    string author = "Harper Lee";
    string availaibility = "Available";
    int grade[5]= {50,60,70,40};
public:
    void output()
    {
        cout << "Title : "<< title << endl;
                cout << "Book ID : "<< id << endl;
                        cout << "author : "<< author << endl;
                                cout << "availibility : "<< availaibility << endl;
                                for(int i =0;i<5;i++)
                                {
                                    cout << "Grades : " << i+1<<" " << grade[i] << endl;
                                }
    }
    void checkout()
    {
        availaibility = "not available";
    }
    void back1(){
        availaibility = "available";
    }
};

int main()
{
    book A;
    A.output();
    A.checkout();
    A.output();
    A.back1();
    A.output();

}
