#include <iostream>
using namespace std;


string getDay (){
   int dayNum;
   string Day;
        switch(dayNum){
        case 0 : Day = "Sunday";
                    break;
        case 1 : Day = "Monday";
                    break;
        case 2 : Day = "Tuesday";
                    break;
        case 3 : Day = "Wednesday";
                    break;
        case 4 : Day = "Thrusday";
                    break;
        case 5 : Day = "Friday";
                    break;
        default :  Day = "Saturday";
                    break;
        }
        return Day;
}
int main (){

cout << getDay(3) ;

 return 0;
}
