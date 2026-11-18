#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Creates or opens a text file
    // fstream file("File.txt", ios::out);
    ofstream file("File.txt");

    if (!file) {
        cout << "Error opening file.\n";
        return 1;
    }

    // Write to the file
    file << "Hello world!" << endl;
    file << "I am Tanvir Hossain." << endl;

    // Close the file
    file.close();

    return 0;
}