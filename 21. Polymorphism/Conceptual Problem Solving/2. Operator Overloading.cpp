#include <iostream>
using namespace std;

class Complex {
    int real;
    int imaginary;

public:
    Complex(int real, int imaginary) {
        this->real = real;
        this->imaginary = imaginary;
    }

    // Display function
    void showNumber() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    // Operator overloading
    Complex operator + (Complex &obj) {
        int resultReal = this->real + obj.real;
        int resultImaginary = this->imaginary + obj.imaginary;

        return Complex(resultReal, resultImaginary);
    }
};

int main() {
    Complex c1(1, 2);
    Complex c2(3, 4);

    cout << "First complex number: ";
    c1.showNumber();

    cout << "Second complex number: ";
    c2.showNumber();

    // Uses overloaded '+' operator
    Complex c3 = c1 + c2;

    cout << "After addition: ";
    c3.showNumber();

    return 0;
}