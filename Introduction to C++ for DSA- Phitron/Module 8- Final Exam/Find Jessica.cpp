#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string S;
    getline(cin, S);  // Read the full line of input

    string word;
    stringstream ss(S);  // To split the string by spaces

    while (ss >> word) {
        if (word == "Jessica") {
            cout << "YES" << endl;
            return 0;  // Exit as soon as we find "Jessica"
        }
    }

    cout << "NO" << endl;
    return 0;
}