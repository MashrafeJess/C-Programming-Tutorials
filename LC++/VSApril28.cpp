#include <iostream>
#include <cstdlib>
using namespace std;

#define SIZE 3
#define nl "\n"

void push (int i);
int pop();
int *tos,*pl,stack[SIZE];

int main(){
    int value;
    tos = stack;
    pl = stack;
    
    do{
        cout << "Enter value : ";
        cin >> value;
        if(value!=0){
            push(value);
        }else{
            cout << "value on top is "<< pop() << nl;
        }
    }while (value != -1);
    return 0;
}

void push (int i){
    pl++;
    if(pl==(tos+SIZE)){
        cout << "Stack Overflow" << nl;
        exit(1);
    }
    *pl = i;
}

int pop(){
    if(pl == tos){
        cout << "Stack Underflow." << nl;
        exit(1);
    }
    pl--;
    return *(pl+1);
}