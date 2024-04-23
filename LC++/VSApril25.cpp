#include <iostream>
#define MAX 100
#define LEN 80
#define nl "\n"
using namespace std;
char text[MAX][LEN];
int main (){
    register int t,i,j;
    cout << "Enter an empty line to quit" << nl;
    for(t=0;t<MAX;t++){
        cout << t;
        gets(text[t]);
        if(!*text[t]){
            break;
        }
    }
    for(i=0;i<t;i++){
        for(j=0;text[i][j];j++){
            putchar('\n');
        }
    }
    return 0;
}