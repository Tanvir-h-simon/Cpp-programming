#include <bits/stdc++.h>
using namespace std;

int main() {
    // string sentence;
    // char sentence[100000];
    // cin.getline(sentence, 100000);
    // char input[100000];

    // // Read input until EOF(End of file)
    // while (cin.getline(input, 100000)) {

    //     char letters[100000];
    //     int letter_count = 0;
        
    //     for (int i = 0; input[i] != '\0'; i++) {
    //         if (input[i] >= 'a' && input[i] <= 'z') { // Count lowercase letters of the input (without spaces) 
    //             letters[letter_count++] = input[i];
    //         }
    //     }

    //     // Sort the lowercase letters (sentences)
    //     sort(letters, letters + letter_count);

    //     for (int i = 0; i < letter_count; i++) {
    //         cout << letters[i];
    //     }
        
    //     cout << endl;
    // }
    string input;

    // Read input until EOF
    while (getline(cin, input)) {
        string letters = "";
        for (char c : input) {
            if (c >= 'a' && c <= 'z') {  // Extract only letters
                letters += c;
            }
        }
        
        // Sort the letters
        sort(letters.begin(), letters.end());
        
        cout << letters << endl;
    }

    return 0;
}