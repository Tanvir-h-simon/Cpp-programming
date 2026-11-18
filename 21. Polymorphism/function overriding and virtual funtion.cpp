// #include <iostream>
// using namespace std;

// class Parent {
//     public:
//         void getInfo() {
//             cout << "Parent class\n";
//         }
// };

// class Child: public Parent {
//     public:
//         void getInfo() {
//             cout << "Child class\n";
//         }
// };

// int main() {
//     Child c;
//     c.getInfo(); // Fucntion Overriding

//     // Parent p;
//     // p.getInfo();
//     return 0;
// }

#include <iostream>
using namespace std;

class Parent {
    public:
        virtual void hello() {
            cout << "Hello, I am Parent class\n";
        }
};

class Child: public Parent {
    public:
        void hello() override{
            cout << "Hello, I am Child class\n";
        }
};

int main() {
    Child c;
    c.hello();

    // Parent p;
    // p.hello();

    return 0;
}