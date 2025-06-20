// #include <iostream> 
#include <bits/stdc++.h> // Includes all header files
using namespace std;
int main() {
    int x;
    cin >> x;
    cin.ignore();
    char s[100];
    // string s;
    // cin >> s; // Print string without whitespace
    // fgets(s, 100, stdin)
    cin.getline(s, 100); // Pring string wiht whitespace
    cout << x << endl << s << endl;
    return 0;
}