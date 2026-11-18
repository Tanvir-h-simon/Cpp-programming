#include <iostream>
#include <vector>
using namespace std;

// Fixed size(Arrays) vs Dynamic size(Vectors)
int main() {
    // // An array with 5 (fixed) elements
    // string cars[5] = {"Volvo", "BMW", "Ford", "Tesla", "BYD"};
    //     for (string e : cars) {
    //     cout << e << endl;
    // }

    vector<string> cars = {"Volvo", "BMW", "Ford", "Tesla", "BYD"};
    cars.push_back("Toyota");

    for (string e : cars) {
        cout << e << endl;
    }

    return 0;
}