#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  // Required for accumulate
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 7, 1, 3, 9, 4, 6};

    cout << "Original vector: ";
    for (int n : v) cout << n << " ";
    cout << "\n\n";

    // Reverse the vector
    reverse(v.begin(), v.end());
    cout << "After reverse(): ";
    for (int n : v) cout << n << " ";
    cout << "\n";

    // Find maximum and minimum elements
    cout << "Max element: " << *max_element(v.begin(), v.end()) << "\n";
    cout << "Min element: " << *min_element(v.begin(), v.end()) << "\n";

    // Check if an element exists
    if (find(v.begin(), v.end(), 7) != v.end())
        cout << "Element 7 found in vector.\n";
    else
        cout << "Element 7 not found.\n";

    // Count occurrences
    int count3 = count(v.begin(), v.end(), 3);
    cout << "Count of 3: " << count3 << "\n";

    // Sort the vector
    sort(v.begin(), v.end());
    cout << "After sort(): ";
    for (int n : v) cout << n << " ";
    cout << "\n";

    // Erase duplicates (requires sorting first)
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    cout << "After unique() and erase(): ";
    for (int n : v) cout << n << " ";
    cout << "\n";

    // Rotate elements
    rotate(v.begin(), v.begin() + 2, v.end());
    cout << "After rotate(): ";
    for (int n : v) cout << n << " ";
    cout << "\n";

    // Binary search (works on sorted data only)
    sort(v.begin(), v.end());
    cout << "Binary search for 5: "
         << (binary_search(v.begin(), v.end(), 5) ? "Found" : "Not Found")
         << "\n";

    // Sum of elements using accumulate (from <numeric>)
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum of elements: " << sum << "\n";

    return 0;
}