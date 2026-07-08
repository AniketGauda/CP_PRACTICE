// Basic Practice Problems

#include <iostream>
using namespace std;

/*
    P1. Hello World

    Print: Hello, I am learning C++ for CP!
*/

// int main() {
//     // BOILERPLATE
//     ios_base:: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     cout << "Hello, I am learning C++ for CP!" << "\n";

//     return -1;
// }

/*
    P2. Sum of Two Numbers
    Input: Two integers a and b
    Output: Their sum
*/

// int main() {
//     int a, b;
//     cin >> a >> b;
//     int sum = a + b;
//     cout << "Sum: " << sum << "\n";

//     return -1;
// }

/*
    P3. Area and Perimeter of Rectangle
    Input: Length l and breadth b (integers)
    Output: Two lines — Area, then Perimeter
*/

// int main() {
//     int l, b;
//     cin >> l >> b;
//     int Area = l * b;
//     int Perimeter = 2 * (l + b);
//     cout << Area << "\n";
//     cout << Perimeter << "\n";

//     return 0;
// }

/*
    P4. Celsius to Fahrenheit
    Input: Temperature in Celsius C
    Output: Fahrenheit F
    Formula: F = (C × 9/5) + 32
*/

// int main() {
//     double c;
//     cout << "Enter Temp in celsius: "; 
//     cin >> c;
//     double f = (c * 9) / 5 + 32;
//     cout << "Temp in Fahrenheit is: " << f << "\n";

//     return 0;
// }

/*
    P5. Swap Two Numbers (using a third variable)
    Input: Two integers
    Output: After swapping, print both
*/

// int main() {
//     int  a, b;
//     cin >> a >> b;
//     cout << "Before Swap a is: " << a << " and b is: " << b << "\n";
//     int c = a;
//     a = b;
//     b = c;
//     cout << "After Swap a is: " << a << " and b is: " << b << "\n";
// }

/*
    P6. Average of Three Numbers
    Input: Three integers
    Output: Average (can be decimal)
*/

// int main() {
//     int a, b , c;
//     cin >> a >> b >> c;
//     double avg = (a + b + c) / 3;
//     cout << "Average: " << avg << "\n";

//     return 0;
// }

/*
    P7. Last Digit of a Number
    Input: A positive integer n
    Output: Its last digit
*/

// int main() {
//     int p;
//     cin >> p;
//     int last_digit = p % 10;
//     cout << "Last Digit of Entered Number is: " << last_digit << "\n";

//     return 0;
// }

/*
    P8. Simple Calculator
    Input: Two integers a, b and a character op (+, -, *, /)
    Output: Result of operation
*/

// int main() {
//     int a, b;
//     char c;
//     cin >> a >> b >> c;
//     switch(c) {
//         case '+':
//             cout << a + b;
//             return 0;
//         case '-':
//             cout << a - b;
//             return 0;
//         case '*':
//             cout << a * b;
//             return 0;
//         case '/':
//             cout << a / b;
//             return 0;
//         default:
//             cout << a + b;
//             return 0;
//     }
// }