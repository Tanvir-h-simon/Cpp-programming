#include <iostream>
using namespace std;

class Person {
    public:
        string name;
        int age;
};

class Employee: public Person {
    public:
        float salary;
};

int main() {
    Employee e1;
    e1.name = "Tanvir Hossain";
    e1.age = 25;
    e1.salary = 50000.0;

    cout << "Name: " << e1.name << endl;
    cout << "Age: " << e1.age << endl;
    cout << "Salary: " << e1.salary << endl;

    return 0;
}