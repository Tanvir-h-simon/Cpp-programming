#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Read from the file
    // fstream file("File.txt", ios::in);
    ifstream file("File.txt");

    if (!file) {
        cout << "Error opening file.\n";
        return 1;
    }

    string text;
    // Use a while loop together with the getline() function to read the file line by line
    while (getline(file, text)) {
        // Output the text from the file
        cout << text << endl;
    }

    // Close the file
    file.close();

    return 0;
}