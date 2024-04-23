#include <iostream>
#include <vector>
using namespace std;
int countOccurrences( vector<int>& arr, int element) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == element) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> arra = {1,0,1,0};
    int element1,element2,count1,count2,count3;
   for(int i = 0;i<arra.size()-1;i++)
   {
       element1 = arra[i];
       element2 = arra[i+1];

    int count1 = countOccurrences(arra, element1);
    int count2 = countOccurrences(arra, element2);
    if(count1 != count2)
    {
        //cout << " No" << endl;
        count3++;
        break;
    }
    cout << count3 << endl;
    return 0;
}
}
