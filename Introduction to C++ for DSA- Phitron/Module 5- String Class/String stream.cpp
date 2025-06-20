#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);
    // cout << s1 << endl;
    int count = 0;
    // stringstream s2;
    // s2 << s1;
    stringstream s2(s1); // stringstream is class in cpp
    string word;
    while (s2 >> word) {
        cout << word << endl;
        count++;
    }
    cout << count << endl;
    // s2 >> word;
    // cout << word << endl;
    // s2 >> word; 
    // cout << word << endl;
    // s2 >> word; 
    // cout << word << endl;
    return 0;
}