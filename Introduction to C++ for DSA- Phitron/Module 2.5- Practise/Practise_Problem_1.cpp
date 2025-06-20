#include <iostream>
using namespace std;

int* get_array(int N) {
    int* arr = new int[N];  // Dynamically allocate array of size N
    for (int i = 0; i < N; i++) {
        cin >> arr[i];      
    }
    return arr; // Return pointer to the array           
}

int main() {
    int N;
    cin >> N;

    int* arr = get_array(N);  // Get pointer to dynamic array

    for (int i = 0; i < N; i++) {
        cout << arr[i] << " "; 
    }
    cout << endl;

    delete[] arr;  // Free dynamically allocated memory

    return 0;
}
