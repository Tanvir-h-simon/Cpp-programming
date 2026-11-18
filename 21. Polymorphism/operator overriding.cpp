#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    double salary;

    Employee(string n, double s) {
        name = n;
        salary = s;
    }

    // Overload + operator to add salaries
    Employee operator+(const Employee& other) {
        return Employee(name + " & " + other.name, salary + other.salary);
    }

    void display() {
        cout << "Employee(s): " << name << ", Total Salary: RM" << salary << endl;
    }
};

int main() {
    Employee emp1("Alice", 3000.0);
    Employee emp2("Bob", 3500.0);

    Employee total = emp1 + emp2;
    total.display();  // Output: Employee(s): Alice & Bob, Total Salary: RM6500

    return 0;
}