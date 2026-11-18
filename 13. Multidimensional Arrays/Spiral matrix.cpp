#include <iostream>
using namespace std;

void spiralMatrix(int row, int column, int matrix[][100]) { // Fixed maximum column size
    int startRow = 0, startCol = 0;
    int endRow = row - 1, endCol = column - 1;

    while (startRow <= endRow && startCol <= endCol) {
        // Top row
        for (int j = startCol; j <= endCol; j++)
            cout << matrix[startRow][j] << " ";

        // Right column
        for (int i = startRow + 1; i <= endRow; i++)
            cout << matrix[i][endCol] << " ";

        // Bottom row (check to avoid double print)
        if (startRow < endRow) {
            for (int j = endCol - 1; j >= startCol; j--)
                cout << matrix[endRow][j] << " ";
        }

        // Left column (check to avoid double print)
        if (startCol < endCol) {
            for (int i = endRow - 1; i > startRow; i--)
                cout << matrix[i][startCol] << " ";
        }

        startRow++;
        startCol++;
        endRow--;
        endCol--;
    }
    cout << endl;
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

    spiralMatrix(row, column, matrix);

    return 0;
}