#include <iostream>
using namespace std;

int diagonalSum(int n, int matrix[][100]) { // Fixed maximum column size
    int sum = 0;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         if (i == j) {
    //             sum += matrix[i][j];
    //         } else if (j == n - i - 1) {
    //             sum += matrix[i][j];
    //         }
    //     }
    // }
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
        if (i != n - i - 1) {
            sum += matrix[i][n - i - 1];
        }
    }

    return sum;
}

int main() {
    int n;
    cin >> n;
    int matrix[n][n]; // Row = column

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int sum = diagonalSum(n, matrix);
    cout << sum;

    return 0;
}