#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        char name[100];
        int matric_number;
        float gpa;
};

int main() {
    // Student a; // a = object
    // a.matric_number = 10;
    // a.gpa = 3.5;
    // // a.name = "Tanvir"; // Not working
    // char temp[100] = "Tanvir";
    // strcpy(a.name, temp);
    // cout << a.name << " " << a.matric_number << " " << a.gpa << endl;

    Student a, b;
    // cin >> a.name >> a.matric_number >> a.gpa;
    // cin >> b.name >> b.matric_number >> b.gpa;
    cin.getline(a.name, 100);
    cin >> a.matric_number >> a.gpa;
    cin.ignore(); // Ignore new line
    // getchar(); // Ignore new line
    cin.getline(b.name, 100);
    cin >> b.matric_number >> b.gpa;

    cout << a.name << " " << a.matric_number << " " << a.gpa << endl;
    cout << b.name << " " << b.matric_number << " " << b.gpa << endl;

    return 0;
}