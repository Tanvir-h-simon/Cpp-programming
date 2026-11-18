#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    
    for (auto it = v.rbegin(); it != v.rend(); ++it) { // begin()- first element, end()- one past the last element
        cout << *it << " ";  // Dereference iterator
    }

    return 0;
}