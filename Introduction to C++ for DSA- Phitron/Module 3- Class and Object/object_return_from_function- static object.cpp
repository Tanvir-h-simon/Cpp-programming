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

Student func() { // Return type- Student class
    Student Abdullah(10, 15, 3.5);
    return Abdullah;
}

int main() {

    Student obj = func(); // Static object

    cout << "Abdullah: " << obj.cls << " " << obj.roll << " " << obj.gpa << endl;

    return 0;
}