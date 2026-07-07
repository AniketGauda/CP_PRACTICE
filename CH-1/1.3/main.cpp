// Expressions: Building Values from Values.
// An Expression is anything that produce a value.

#include <iostream>
using namespace std;

// int main() {
//     // CP BOILERPLATE
//     ios_base:: sync_with_stdio(false);
//     cin.tie(NULL);

//     int a = 10, b = 3;
//     cout << "a + b: " << a + b << "\n";
//     cout << "a - b: " << a - b << "\n";
//     cout << "a * b: " << a * b << "\n";
//     cout << "a / b: " << a / b << "\n";
//     cout << "a % b: " << a % b << "\n";
// }

/*
    Division Part

    1) When both operands are int, C++ truncates the decimal part
    2) One of the operands is float or double, C++ performs floating point division

*/

int main() {
    double a = 10;
    int b = 3;
    cout << "a / b: " << a / b << "\n";

    return 1;
}

// Order of Operations: PEMDAS (Parentheses, Exponents, Multiplication/Division, Addition/Subtraction)`