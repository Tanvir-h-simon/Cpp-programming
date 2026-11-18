#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;

        void setPersonDetails(string n, int a) {
            name = n;
            age = a;
        }

        void displayPersonDetails() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : public Person {
    public:
        int roll;

        void setStudentDetails(string n, int a, int r) {
            setPersonDetails(n, a);  // Call base class method
            roll = r;
        }

        void displayStudent() {
            displayPersonDetails();  // Call base class method
            cout << "Roll No: " << roll << endl;
        }
};

class Teacher: public Person {
    public:
        string subject;

        void setTeacherDetails(string n, int a, string sub) {
            setPersonDetails(n, a);  // Call base class method
            subject = sub;
        }

        void displayTeacher() {
            displayPersonDetails();  // Call base class method
            cout << "Subject: " << subject << endl;
        }
};

int main() {
    Student s1;
    s1.setStudentDetails("Tanvir Hossain", 21, 23121478);
    cout << "Student Details: " << endl;
    s1.displayStudent();

    cout << endl;

    return 0;
}