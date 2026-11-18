#include <iostream>
using namespace std;

int main() {
    // char word[10];
    // cin >> word;
    // cout << word << endl;

    // char sentence[20];
    // cin.getline(sentence, 20);
    // cout << sentence << endl;

    char sentence[20];
    cin.getline(sentence, 20, ','); // Delimiter
    cout << sentence << endl;

    return 0;
}