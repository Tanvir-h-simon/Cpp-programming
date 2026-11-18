#include <iostream>
using namespace std;

int main() {
    int number;
    cin >> number;
    
    if (!(number & 1)) {
        cout << "Even" << endl;        
    } else {
        cout << "Odd" << endl; 
    }

    return 0;
}