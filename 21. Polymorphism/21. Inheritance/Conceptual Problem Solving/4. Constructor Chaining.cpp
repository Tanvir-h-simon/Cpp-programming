#include <iostream>
using namespace std;

// Base class
class Person {
    public:
        string name;
        int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }    
};

// Derived from Person
class Student: public Person {
    public: 
        int roll;
        int marks;

    Student(string name, int age, int roll, int marks): Person(name, age) {
        this->roll = roll;
        this->marks = marks;
    }    
};


// Derived from Student
class Teacher: public Student {
    public:
        string subject;
        float salary;

    Teacher(string name, int age, int roll, int marks, string subject, float salary): Student(name, age, roll, marks) {
        this->subject = subject;
        this->salary = salary;
    }    
};

void display() {
    Teacher t1("Tanvir Hossain", 25, 23121478, 89, "Computer Science", 50000.00);

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