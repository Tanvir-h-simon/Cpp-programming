#include <iostream>
using namespace std;

class Person { // Base/Parent Class
    public: 
        string name;
        int age;

    // Default constructor (required for derived class with no constructor
    Person() {
        // cout << "Parent class constructor." << endl;
        name = "";
        age = 0;
    }

    // ~Person() {
    //     cout << "Parent class destructor." << endl;
    // };

    // Parameterized constructor
    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};  

// Derived/Child class
class Student: public Person {
    public:
        int roll;

    Student (string name, int age, int roll) : Person (name, age) {
        this->roll = roll;
    }    

    // Student() {
    //     cout << "Child class constructor." << endl;
    // } 
    
    // ~Student() {
    //     cout << "Child class destructor." << endl;
    // }
};

int main() {
    // Student s1; // Automatically called default constructor
    // s1.name = "Tanvir Hossain";
    // s1.age = 25;
    // s1.roll = 23121478;

    Student s1("Tanvir Hossain", 25, 23121478);
    
    cout << "Name: " + s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll No: " << s1.roll << endl;

    return 0;
}