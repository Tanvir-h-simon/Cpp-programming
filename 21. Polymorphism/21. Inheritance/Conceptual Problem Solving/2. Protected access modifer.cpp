#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Person {
    protected:
        string name;
        int age;
};

class Employee: public Person {
    public:
        float salary;

    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }
    
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Employee e1;
    // e1.name = "Tanvir Hossain";
    // e1.age = 25;
    e1.setName("Tanvir Hossain");
    e1.setAge(25);
    e1.salary = 50000.0;

    cout << "Name: " << e1.getName() << endl;
    cout << "Age: " << e1.getAge() << endl;
    cout << "Salary: " << e1.salary << endl;

    return 0;
}