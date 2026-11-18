// #include <iostream>
// using namespace std;

// void print() {
//     cout << "This is the first's print." << endl;
// }

// void print() {
//     cout << "This is the second's print." << endl;
// }


// int main() {
//     print();
//     return 0;
// }

#include <iostream>
using namespace std;

namespace First {
    void print() {
        cout << "This is the first's print." << endl;
    }
}

namespace Second {
    void print() {
        cout << "This is the second's print." << endl;
    }
}

int main() {
    First::print();
    Second::print();
    return 0;
}