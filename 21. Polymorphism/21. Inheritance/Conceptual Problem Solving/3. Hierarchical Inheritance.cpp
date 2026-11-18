#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;
};

class Student: public Person {
    public: 
        int roll;
        int marks;
};

class Teacher: public Student {
    public:
        string subject;
        float salary;
};

void display() {
    Teacher t1;
    t1.name = "Tanvir Hossain";
    t1.age = 25;
    t1.roll = 23121478;
    t1.marks = 89;
    t1.subject = "Computer Science";
    t1.salary = 50000.0;

    cout << "Name: " << t1.name << endl;
    cout << "Age: " << t1.age << endl;
    cout << "Roll: " << t1.roll << endl;
    cout << "Marks: " << t1.marks << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salaray: " << t1.salary << endl; 
}

int main() {
    display();
    return 0;
}