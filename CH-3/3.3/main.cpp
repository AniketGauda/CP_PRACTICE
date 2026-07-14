// Floating Point (float/double)

/*
    1) Float
        - Type: float
        - Precision: ~ 6-7 digits
        - Use: Rarely Used alone in CP.

    2) Double
        - Type: double
        - Precision: ~ i5 digits
        - Use: Geometry, Real Number Math
*/

#include <iostream>
using namespace std;

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     float f = 3.1415927f;
//     double d = 3.141592653589793;

//     cout << f << "\n";
//     cout << d << "\n";
//     cout << 10.0 / 3.0; 

//     return 1;
// }

// Never Compare double with == directly.

// int  main() {
//     if(0.1 + 0.2 == 0.3)
//         cout << "Comparision Successfull!";
//     else
//         cout << "Comparision Unsuccessfull!";

//     return 1;
// }

// In the above example you will see that else block will  execute.
// So in C++ to compare double values, use 1e-9.

int main() {
    const double eps = 1e-9;
    if(abs((0.1 + 0.2) - 0.3) < eps) {
        cout << "Comparision SuccessFull!";
    } else {
        cout << "Comparision Unsuccessfull!";
    }

    return 1;
}