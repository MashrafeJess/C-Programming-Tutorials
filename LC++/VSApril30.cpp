#include <iostream>
using namespace std;

void print_vertical(char *str);
int main (int argc, char *argv){
    if(argc>1){
        print_vertical(argv[1]);
    }
    return 0;
}
void print_vertical(char *str){
    while(*str){
        cout << *str++ << endl;
    }
}