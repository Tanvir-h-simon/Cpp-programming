#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    char section;
    int math_marks;
    int cls;

    Student(string n, int r, char s, int m, int c) {
        name = n;
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main() {
    Student s1("Tanvir", 1, 'A', 88, 10);
    Student s2("Ayesha", 2, 'B', 92, 10);
    Student s3("Israt", 3, 'A', 85, 10);

    Student highest_marks = s1;
    if (s2.math_marks > highest_marks.math_marks)
        highest_marks = s2;
    if (s3.math_marks > highest_marks.math_marks)
        highest_marks = s3;

    cout << "Top student in math: " << highest_marks.name << endl;

    return 0;
}