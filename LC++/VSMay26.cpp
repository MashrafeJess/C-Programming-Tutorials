#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, multiset<string>> marks_map;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int marks;
        string name;
        cin >> name >> marks;
        marks_map[marks].insert(name);
    }

    auto cur_it = --marks_map.end();

    for (auto it = marks_map.rbegin(); it != marks_map.rend(); it++) {
        int marks = it->first;
        cout << "Marks: " << marks << " - Students: ";

        const multiset<string>& students = it->second;
        for (const string& student : students) {
            cout << student << " ";
        }

        cout << endl;
    }

    return 0;
}
