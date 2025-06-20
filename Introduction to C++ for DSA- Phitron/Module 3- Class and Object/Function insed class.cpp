#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        
        Student(string name, int roll) {
            this->name = name;
            this->roll = roll;
        }

        void func() {
            cout << "Hello, I am " << name << endl;
        }
};


int main() {
    Student sakib("Sakib Ahmed", 23);
    sakib.func();
    Student rakib("Rakib Ahmed", 23);
    rakib.func();
    return 0;
}