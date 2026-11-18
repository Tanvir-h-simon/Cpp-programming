#include <iostream>
#include <string>
using namespace std;

class Person {
    public: 
        string name;
        int age;
};

class Student : public Person {
    public:
        int roll;
};

class GradStudent: public Student {
    public:
        string researchArea;
};

int main() {
    GradStudent s1;
    s1.name = "Tanvir Hossain";
    s1.researchArea = "Quantum Physics";

    cout << s1.name << endl;
    cout << s1.researchArea << endl;

    return 0;
}