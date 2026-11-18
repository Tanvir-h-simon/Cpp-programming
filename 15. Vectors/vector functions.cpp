#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    cout << "\n";

    v.pop_back(); // Removes last element

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    return 0;
}