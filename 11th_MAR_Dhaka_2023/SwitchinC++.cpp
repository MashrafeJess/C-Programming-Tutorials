#include <iostream>

using namespace std;

string Day (int Numb){
        string DayName;
        switch(Numb){
            case 0 : DayName = "Sunday";
                    break;
            case 1 : DayName = "Monday";
                    break;
            case 2 : DayName = "Tuesday";
                    break;
            case 3 : DayName = "Wednesday";
                    break;
            case 4 : DayName = "Thursday";
                    break;
            case 5 : DayName = "Friday";
                    break;
            case 6 : DayName = "Saturday";
                    break;
            default : DayName = "Invalid";
            }
return DayName;
            }
int main (){
    cout << Day(9);
    return 0;

}



