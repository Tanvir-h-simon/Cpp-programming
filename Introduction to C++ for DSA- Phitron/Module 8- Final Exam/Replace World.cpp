#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for(int i = 0; i < T; i++) {
        string S, X;
        cin >> S >> X;
        
        string result = "";
        int j = 0;
        
        while(j < S.length()) { // Check if X matches at current position
            bool match = true;

            if(j + X.length() <= S.length()) {
                for(int k = 0; k < X.length(); k++) {
                    if(S[j + k] != X[k]) {
                        match = false;
                        break;
                    }
                }
            } else {
                match = false;
            }
            
            if(match) { // Found X, add # to result and skip X.length() characters
                result += "#";
                j += X.length();
            } else { // No match, add current character and move to next
                result += S[j];
                j++;
            }
        }
        
        cout << result << endl;
    }
    
    return 0;
}