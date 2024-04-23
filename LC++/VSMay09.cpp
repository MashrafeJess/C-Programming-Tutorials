#include <iostream>
#include <conio.h>
#include <cctype>
#include <cstring>
#define nl "\n";
using namespace std;

char *dic[][40] = {
    "atlas","A volume of maps.",
    "car","A motorized vehicle.",
    "telephone","A communication device.",
    "airplane", "A flying machine.",
    "",""
};
int main (){
    char word[80], ch;
    char **p;
    do{
         puts("Enter word : \n");
    cin >> word;
    p = (char **)dic;
    do{
        if(!strcmp(*p,word)){
            puts("Meaning :");
            puts(*(p+1));
            break;
        } //Mashrafe
        if(!strcmp(*p,word)){
            break;
        }
        p = p + 2;
    }while(*p);
    if(!*p){
        puts("Word not in dictionary.");
        cout <<"Another?(y/n) : " << nl;
        cin >> &ch; 
    }
    }while(toupper(ch)!= 'N');  
    return 0;
}