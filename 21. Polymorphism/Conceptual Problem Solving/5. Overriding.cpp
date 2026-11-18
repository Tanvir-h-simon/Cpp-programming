#include <iostream>
using namespace std;

class Employee {
    public:
        string name;
        int age;

        Employee (string name, int age) {
            this->name = name;
            this->age = age;
        }

        virtual void work() {
            cout << name << " is working as a general employee." << endl;
        }
};

class Manager : public Employee {
    public:
        double salary;

        Manager (string name, int age, double salary) : Employee (name, age) {
            this->salary = salary;   
        }

        void work() override {
            cout << name << " is wokring as a manager, managing teams." << endl;
        }
};

int main() {
    Manager m ("Tanvir Hossain", 25, 50000.0);
    
    cout << "Name: " << m.name << endl;
    cout << "Age: " << m.age << endl;
    cout << "Salary: " << m.salary << endl;

    // Use base class pointer to call overridden function
    Employee *ptr = &m;
    ptr->work();
    
    return 0;
}