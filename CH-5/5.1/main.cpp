// Operators.

// Arithmatic Operators.

/*

    Op                              Name                            Example                                 Result
    +                               Add                              7 + 3                                    10
    -                               Subtract                         7 - 3                                    4
    *                               Multiply                         7 * 3                                    21
    /                               Divide                           7 / 3                                  2 (int div)
    %                               Modulo                           7 % 3                                     1
    ++                              Increment                       a++ or ++a                               add 1
    --                              Decrement                       a-- or --a                              subtract 1

*/

// Prefix and Postfix Increment and Decrement.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    int a = 10;
    
    int b = a++;
    int c = ++a;
    int d = a--;
    int e = --a;

    cout << "A: " << a << "\n";
    cout << "Post Increment A: " << b << "\n";
    cout << "Pre Increment A: " << c << "\n";
    cout << "Post Decrement A: " << d << "\n";
    cout << "Pre Decrement A: " << e << "\n";
}