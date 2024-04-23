#include <iostream>
 using namespace std;
struct struct_type{
    int a,b;
    char ch;
};
struct struct_type2
{
    int a,b;
    char ch;
};
void f1(struct struct_type2 parm);
int main (){
    struct struct_type arg;
    arg.a = 1000;
    f1(arg);
    return 0;
}
void f1(struct struct_type2 parm){
    cout << parm.a;
}
k