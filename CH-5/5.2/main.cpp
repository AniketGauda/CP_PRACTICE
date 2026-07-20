// Relational Operators.

/*
    Op                      Meaning                             Example                                     Result
    ==                      Equal                               5 == 5                                       true
    !=                      Not equal                           5 != 3                                       true
    <                       Less than                           3 < 5                                        true
    >                       Greater than                        3 > 5                                        false
    <=                      Less or equal                       5 <= 5                                       true
    >=                      Greater or equal                    5 >= 3                                       true
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    int n;
    cin >> n;

    if(n == 5) {
        cout << "Enteres Number is 5" << "\n";
    } else {
        cout << "Entered Number is not 5" << "\n";
    }
}

// Common Mistake 
// if(x = 5) This is assignment operator, not comparision