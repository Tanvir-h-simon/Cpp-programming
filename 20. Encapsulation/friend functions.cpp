#include <iostream>
using namespace std;

class Employee {
  private:
    int salary;

  public:
    Employee(int salary) {
      this->salary = salary;
    }

    // Declare friend function: A friend function is not a member of the class, but it is allowed to access the class's private data
    friend void displaySalary(Employee emp);
};

void displaySalary(Employee emp) {
  cout << "Salary: " << emp.salary;
}

int main() {
  Employee myEmp(50000);
  displaySalary(myEmp);
  return 0;
}