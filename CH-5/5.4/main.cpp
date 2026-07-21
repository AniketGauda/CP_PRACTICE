// Assignment Operator

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    int x = 10;
    x += 5;     // x = 15
    x -= 3;     // x = 12
    x *= 2;     // x = 24
    x /= 4;     // x = 6
    x %= 5;     // x = 1

    cout << "After All the operations the value of x is: " << x << "\n";

    return 1;
}