#include <iostream>

using namespace std;

void sayHi (string name, int age);
int main()
{
   sayHi("Mash",60);
   sayHi("Jack",67);
   sayHi("Nick",53);
    return 0;
}
void sayHi (string name,int age){
    cout << "Hello " << name << " you are " << age << endl;
}

