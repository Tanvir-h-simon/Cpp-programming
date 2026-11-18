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
//     // Create a Honda car object using the above colors
//     Car honda = Car("Honda", honda_colors);

//     // Deepcopy of Honda
//     Car deepcopy_honda = honda; // deepcopy_honda is a separate copy, so modifying it doesn't affect honda
//     deepcopy_honda.colors.push_back("Green");

//     // Output colors from the original object (honda)
//     cout << endl << "Original: ";
//     for (string color : honda.colors) {
//         cout << color << " ";
//     }

//     cout << endl;

//     // Output colors from the shallow copy (copy_honda)
//     cout << "Deepcopy: ";
//     for (string color : deepcopy_honda.colors) {
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
        this->name = name;
        // this->cgpa = cgpa;
        cgpaPtr = new float; // Allocate memory on heap
        *cgpaPtr = cgpa; // Store CGPA value at allocated memory
    }

    // Copy Constructor (Shallow Copy)
    Student (Student &obj) {
        this->name = obj.name; // Copy the name
        cgpaPtr = new float; // Allocate new memory
        *cgpaPtr = *(obj.cgpaPtr); // Copy the CGPA value (not the pointer): Each object now has its own separate copy of the CGPA
    }

    // Destructor to deallocate heap memory
    ~Student() {
        delete cgpaPtr;
    }
};

int main() {
    Student s1("Tanvir Hossain", 3.7);
    Student s2(s1); // Create deep copy using copy constructor
    
    *(s2.cgpaPtr) = 3.8; // Modify s2's CGPA — does not affect s1 due to deep copy

    cout << "Name: " << s1.name << "  CGPA: " << *(s1.cgpaPtr) << endl;
    cout << "Name: " << s2.name << "  CGPA: " << *(s2.cgpaPtr) << endl;

    return 0;
}