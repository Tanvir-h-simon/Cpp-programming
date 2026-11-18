#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;
    
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

};

class Employee: virtual public Person { // Using virtual public ensures only one copy of the base class (Person) is inherited when multiple paths lead to it — this avoids duplication and confusion in the diamond inheritance structure.
    public:
        string ID;

        Employee(string name, int age, string ID): Person(name, age)  {
            this->ID = ID;
        }
};

class Student: virtual public Person {
    public:
        int roll;

        Student(string name, int age, int roll): Person(name, age) {
            this->roll = roll;
        }

};

class Intern: public Employee, public Student {
    public:
        Intern(string name, int age, string ID, int roll): Person(name, age), Employee(name, age, ID), Student(name, age, roll) {

        } 
};

int main() {
    Intern obj("Tanvir Hossain", 25, "A05210276", 23121478);

    cout << "Name: " << obj.name << endl;
    cout << "Age: " << obj.age << endl;
    cout << "ID: " << obj.ID << endl;
    cout << "Roll No: " << obj.roll << endl;

    return 0;
}