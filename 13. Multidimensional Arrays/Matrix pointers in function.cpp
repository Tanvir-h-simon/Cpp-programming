#include <iostream>
using namespace std;

// void func1(int row, int column, int (*matrix)[4]) {

// }

void func2(int row, int column, int matrix[][4]) {
    // cout << "Oth row pointer " << matrix << endl;
    // cout << "1st row pointer " << matrix + 1 << endl;
    // cout << "2nd row pointer " << matrix + 2 << endl; 

    // cout << endl;

    // cout << "Oth row value " << *matrix << endl;
    // cout << "1st row value " << *(matrix + 1) << endl;
    // cout << "2nd row value " << *(matrix + 2) << endl; 

    cout << *(*(matrix + 2) + 2) << endl;
}

int main() {
    int matrix[4][4] = {{1, 2, 3, 4}, 
                        {5, 6, 7, 8}, 
                        {9, 10, 11, 12}, 
                        {13, 14, 15, 16}};

    func2(4, 4, matrix);
    
    return 0;
}