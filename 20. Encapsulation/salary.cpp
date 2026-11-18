#include <iostream>
using namespace std;

class Employee {
  private:
    int salary; // Private attribute: salary is private - it cannot be accessed directly

  public:
    void setSalary(int salary) { // Setter- setSalary() sets the value
      this->salary = salary;
    }
    int getSalary() { // Getter- getSalary() returns the value
      return salary;
    }
};

int main() {
  Employee obj;
  obj.setSalary(50000);
  cout << obj.getSalary();
  return 0;
}