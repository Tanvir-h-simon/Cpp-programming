#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        int cls;
        int roll;
        float gpa;

    Student(int cls, int roll, float gpa) {
        this->cls = cls;
        this->roll = roll;
        this->gpa = gpa;
    }     
};

// Student* func() { // Return type- Student class
//     Student Abdullah(10, 15, 3.5);
//     Student* ptr = &Abdullah;
//     return ptr;
// }

Student* func() { // Return type- Student class
    Student* Abdullah = new Student(10, 16, 3.6);
    return Abdullah;
}

int main() {
    // Student Abdullah(10, 15, 3.5);
    // Student* Abdurrahman = new Student(10, 16, 3.6);
    // Student* obj = func(); // Why need dynamic object?

    Student* obj = func();

    cout << "Abdullah: " << obj->cls << " " << obj->roll << " " << obj->gpa << endl;

    // cout << "Abdullah: " << (*obj).cls << " " << (*obj).roll << " " << (*obj).gpa << endl;
    // cout << "Abdullah: " << obj->cls << " " << obj->roll << " " << obj->gpa << endl;
    // cout << "Abdullah: " << Abdullah.cls << " " << Abdullah.roll << " " << Abdullah.gpa << endl;
    // cout << "Abdurrahman: " << Abdurrahman->cls << " " << Abdurrahman->roll << " " << Abdurrahman->gpa << endl;

    return 0;
}