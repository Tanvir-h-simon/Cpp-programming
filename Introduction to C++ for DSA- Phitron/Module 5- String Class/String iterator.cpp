#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello";
    // for (int i = 0; i < s.size(); i++) {
    //     cout << s[i];
    // }

    // cout << *s.begin() << endl;
    // cout << *s.end() << endl; // Point last character- NULL
    // cout << *(s.end() - 1) << endl;
    for (string:: iterator i = s.begin(); i < s.end(); i++) {
        cout << *i << endl;  // std::cout << *i << endl;
    }
    return 0;
}