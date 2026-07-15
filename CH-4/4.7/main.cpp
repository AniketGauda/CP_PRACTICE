// String to Number conversion

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE

    // string to number
    string numStr = "9849085";
    int n = stoi(numStr);
    long long big = stoll("9999999999999999");

    cout << n << "\n";
    cout << big << "\n";

    // number to string
    int d = 8373;
    string s = to_string(d);
    cout << s << "\n";

    return 1;
}

// Use case in CP: When you need to process digits of a number as characters, or build numbers digit by digit.