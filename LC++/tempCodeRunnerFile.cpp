 #include <iostream>
using namespace std;

class Object {
protected:
    string name;
    float price;
};
class Pen : protected Object
{
    string company = "Matador";
    int stock = 100;
    int n;
public :
    void input()
    {
        cout << "Enter the model name : ";
        cin >> name;
        cout << "Enter the price : ";
        cin >> price;
        cout << "How many pen do you want to buy : ";
        cin >> n;
    }
    int expense ()
    {
        return price * n;
    }
    void display()
    {
        cout <<"============================="<<endl;
        cout << "Company Name : " << company << endl;
        cout << "Model Name : " << name << endl;
        cout << "Price : " << price << endl;
    }
};
class BOOK : protected Object {
protected:
    string author;
    string publication;
    string summary;
    int stock;

public:
    void input();
    void editInfo();
    void show();
    int search(string a, string b);
    int buybook(int &count);
    float cost(int &count);
    friend BOOK operator--(BOOK &a, int);
};

void BOOK::input()
{
    cin.ignore();
    cout << "Enter the Author Name : ";
    getline(cin, author);
    cout << "Enter the Book Name : ";
    getline(cin, name);
    cout << "Enter the Book Price : ";
    cin >> price;
    cin.ignore();
    cout << "Enter the Publication Name : ";
    getline(cin, publication);
    cout << "Enter the Book Summary : ";
    getline(cin, summary);
    cout << "Enter the Book Stock : ";
    cin >> stock;
}

void BOOK::editInfo() {
    cin.ignore();
    cout << "Enter the Book Name : ";
    getline(cin, name);
    cout << "Enter the Book Price : ";
    cin >> price;
    cin.ignore();
    cout << "Enter the Author Name : ";
    getline(cin, author);
    cout << "Enter the Publication Name : ";
    getline(cin, publication);
    cout << "Enter the Book Summary : ";
    getline(cin, summary);
    cout << "Enter the Book Stock : ";
    cin >> stock;
}

void BOOK::show() {
    cout << "=========================="<<endl;
    cout << "Book Name : " << name << endl;
    cout << "Book Price  : " << price << " tk" << endl;
    cout << "Author Name : " << author << endl;
    cout << "Publication Name : " << publication << endl;
    cout << "Book Summary : " << summary << endl;
    cout << "Book Stock : " << stock << endl;
}

int BOOK::search(string a, string b) {
    if (a == name && b == author)
    {
        return 1;
    } else {
        return 0;
    }
}
int BOOK::buybook(int &count) {
    /*int count;
    cout << "Enter how many books do you want to buy : ";
    cin >> count;*/
    if (count <= stock) {
        return 1;
    } else {
        return 0;
    }
}
BOOK operator--(BOOK &a, int) {
    BOOK temp = a;
    a.stock--;
    return temp;
}
float BOOK :: cost(int &count)
{
    return price * count;
}

int main() {
    BOOK obj[20];
    Pen bptr;
    int i = 0, t, n, choice,count,c = 0,total=0;
    string title, writer;

    while (1) {
        cout << "\n\n======Book Shop Management System======"
             << "\n1. Entry of New Book"
             << "\n2. Buy Book"
             << "\n3. Search For Book"
             << "\n4. Edit Details Of Book"
             << "\n5. Buy Pen"
             << "\n6. Total Cost"
             << "\n7. Exit"
             << "\n\nEnter your Choice: ";
        cin >> choice;

        switch (choice) {
        case 1: obj[i].input();
                        i++;
                        break;
             case 2 : cin.ignore();
                      cout << "Enter the title of the book : ";
                      getline(cin,title);
                      cout << "Enter the name of the author : ";
                      getline(cin,writer);
                       for(t=0;t<i;t++)
                       {
                          if(obj[t].search(title,writer)==1)
                          {
                            cout << "Book Found Successfully!!" << endl;
                            cout << "Enter how many books do you want to buy : ";
                            cin >> count;
                            if(obj[t].buybook(count) == 1)
                            {
                                total = total + obj[t].cost(count);
                               for(int j = 0;j<count;j++)
                               {
                                   obj[t]--;
                               }
                               cout << "Books Bought Successfully!!" << endl;
                               break;
                            } else {
                                cout << "Insufficient book in the stock" << endl;
                            }
                            break;
                          }
                       }
                       if(t==i)
                       {
                           cout << "Book not found in the stack"<< endl;
                           break;
                       }
                       break;
        case 3 :  cin.ignore();
                      cout << "Enter the title of the book : ";
                      getline(cin,title);
                      cout << "Enter the name of the author : ";
                      getline(cin,writer);
                       for(t=0;t<i;t++)
                       {
                          if(obj[t].search(title,writer))
                          {
                            cout << "Book Found!!!" << endl;
                            obj[t].show();
                            break;
                          }
                       }
                       if(t==i)
                       {
                           cout << "Book not found in the stock"<< endl;
                           break;
                       }
                       break;
        case 4 :  cin.ignore();
                      cout << "Enter the title of the book : ";
                      getline(cin,title);
                      cout << "Enter the name of the author : ";
                      getline(cin,writer);
                       for(t=0;t<i;t++)
                       {
                          if(obj[t].search(title,writer))
                          {
                            obj[t].editInfo();
                            break;
                          }
                       }
                       if(t==i)
                       {
                           cout << "Book not found in the stack"<< endl;
                           break;
                       }
                       break;
        case 5 : bptr.input();
                        bptr.display();
                        break;
        case 6 : cout << "Total Expense : " << endl;
                        total = total + bptr.expense();
                        cout <<"============================"<<endl;
                        cout << endl;
                        cout << "Total Price = " << total << " TK" << endl;
                        cout <<"-----------------------------------------------"<<endl;
                        break;
        case 7 : exit(0);
        default : cout << "Invalid choice entered!"<<endl;
    }
    }
	return 0;
}
