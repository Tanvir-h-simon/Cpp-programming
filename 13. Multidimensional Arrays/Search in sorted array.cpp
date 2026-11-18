#include <iostream>
using namespace std;

bool search(int row, int column, int matrix[][100], int key) {
    int i = 0, j = column - 1;

    while (i < row && j >= 0) {
        if (matrix[i][j] == key) {
            cout << "Found at cell (" << i << ", " << j << ")\n";
            return true;
        } else if (matrix[i][j] > key) {
            j--; // Left
        } else {
            i++; // Down
        }
    }

    return false;
}

int main() {
    int row, column;
    cin >> row >> column;
    int matrix[row][column];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cin >> matrix[i][j];
        }
    }

    int key;
    cin >> key;

    search(row, column, matrix, key);

    return 0;
}