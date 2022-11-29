#include <iostream>

using namespace std;

class complex_number {
   public:
    int real, imag;
};

complex_number addTwoCompleNumbers(complex_number c1, complex_number c2) {
    complex_number sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

int main() {
    complex_number num1, num2, result;
    cout << "\n\n";

    cout << "Enter real and imaginary parts of first complex number:\t";
    cin >> num1.real >> num1.imag;

    cout << "\nEnter real and imaginary parts of second complex number:";
    cin >> num2.real >> num2.imag;

    result = addTwoCompleNumbers(num1, num2);

    if (result.imag >= 0)
        cout << "\nSum of two complex numbers = " << result.real << " + " << result.imag << "i";
    else
        cout << "\nSum of two complex numbers = " << result.real << " - " << result.imag << "i";

    cout << "\n\n";

    return 9;
}
