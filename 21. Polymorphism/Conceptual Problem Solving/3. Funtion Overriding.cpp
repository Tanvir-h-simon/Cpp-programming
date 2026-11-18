#include <iostream>
using namespace std;

class Person {
    public:
        virtual void introduce() {
            cout << "Hello!" << endl; 
        }
};

class Student: public Person {
    public:
        void introduce() override {
            cout << "Hi!" << endl;
        }
};

int main() {
    // Function overriding is runtime polymorphism. Always happens in the derived class. The derived class redefines a function from the base class with same signature.
    // Person *ptr = new Student();
    // ptr->introduce(); // Runtime polymorphism: calls Student::introduce() → "Hi!"
    // delete ptr;

    Student s;
    Person &ref = s;
    ref.introduce(); // Calls Student::introduce() → "Hi!"

    return 0;
}