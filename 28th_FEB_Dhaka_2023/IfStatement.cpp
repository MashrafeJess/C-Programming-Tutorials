#include <iostream>

using namespace std;

int main (){

bool isMale = false;
bool isTall = true;

if(isMale && isTall){
    cout << "You are a tall male";
} else if (isMale && ! isTall){
    cout << "You are short male";}
else if(! isMale && isTall){
        cout << " You are tall but Bedi Manush" ;}
else{
    cout << "You are Bedi Manush";
}
return 0;
          }
