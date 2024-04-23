#include <iostream>
#include <cctype>
#define nl "\n"
using namespace std;

int main (){
    char ch;
    cout << "Enter some text (type a period to quit)." << nl;
    do{
        ch = getchar();
        if(islower(ch)){
            ch = toupper (ch);
        }
        else {
            ch = tolower(ch);
        }
        putchar(ch);
    }while(ch != '.');
    return 0;
}
