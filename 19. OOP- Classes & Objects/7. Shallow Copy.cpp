// #include <algorithm>
// #include <iostream>
// #include <memory>
// #include <vector>
// using namespace std;

// class Car {
//     public:
//         string name;
//         vector<string> colors;

//         Car(string name, vector<string> colors)
//         {
//             this->name = name;
//             this->colors = colors;
//         }
// };

// int main() {
//     vector<string> honda_colors = {"Red", "Blue" };
//     // Create a Honda Car object using the above colors
//     Car honda = Car("Honda", honda_colors);

//     // Shallow Copy of Honda
//     Car *copy_honda = &honda; // copy_honda is just a pointer referring to the same object as honda
//     copy_honda->colors.push_back("Green"); // Since copy_honda and honda point to the same object, modifying colors through copy_honda will also affect honda.

//     // Output colors from the original object (honda)
//     cout << endl << "Original: ";
//     for (string color : honda.colors) {
//         cout << color << " ";
//     }

//     cout << endl;

//     // Output colors from the shallow copy (copy_honda)
//     cout << "Shallow Copy: ";
//     for (string color : copy_honda->colors) {
//         cout << color << " ";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

class Student {
    public:
        string name;
        float *cgpaPtr; // Pointer to dynamically allocated CGPA
    
    Student (string name, float cgpa) {
        this->name = name; // Copy the name
        // this->cgpa = cgpa;
        cgpaPtr = new float; // Allocate memory on heap
        *cgpaPtr = cgpa; // Store CGPA value at allocated memory
    }

    // Copy Constructor (Shallow Copy)
    Student (Student &obj) {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr; // Shallow copy — both share the same pointer
    }

    // Destructor to deallocate heap memory
    ~Student() {
        delete cgpaPtr;
    }
};

int main() {
    Student s1("Tanvir Hossain", 3.7);
    Student s2(s1); // Coping constructor- Shallow copy
    
    *(s2.cgpaPtr) = 3.8; // Since both share same pointer, s1.cgpaPtr also changes


    cout << "Name: " << s1.name << "  CGPA: " << *(s1.cgpaPtr) << endl;
    cout << "Name: " << s2.name << "  CGPA: " << *(s2.cgpaPtr) << endl;

    return 0;
}