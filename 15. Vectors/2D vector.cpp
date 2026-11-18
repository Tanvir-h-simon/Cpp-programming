#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {{1, 2, 3},
                                 {4, 5, 6}};

    for (vector<int> e : matrix) {
        for (int i : e) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}