#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        int cls;
        int roll;
        float gpa;

    // Student(int c, int r, float g) {
    //     cls = c;
    //     roll = r;
    //     gpa = g;
    // }  

    Student(int cls, int roll, float gpa) {
        this->cls = cls; // (*this).cls = cls;
        this->roll = roll; // (*this).roll = roll;
        this->gpa = gpa; // (*this).gpa = gpa;
    }     
};

int main() {

    // Student Abdullah; 
    // Abdullah.cls = 10;
    // Abdullah.roll = 15;
    // Abdullah.gpa = 3.5;

    // Student Abdurrahman;
    // Abdurrahman.cls = 10;
    // Abdurrahman.roll = 16;
    // Abdurrahman.gpa = 3.6;

    Student Abdullah(10, 15, 3.5);
    Student Abdurrahman(10, 26, 3.6);

    // int c;
    // int r;
    // float g;
    
    // cin >> c >> r >> g;

    // Student Abdullah(c, r, g);

    cout << "Abdullah: " << Abdullah.cls << " " << Abdullah.roll << " " << Abdullah.gpa << endl;
    cout << "Abdurrahman: " << Abdurrahman.cls << " " << Abdurrahman.roll << " " << Abdurrahman.gpa << endl;

    return 0;
}