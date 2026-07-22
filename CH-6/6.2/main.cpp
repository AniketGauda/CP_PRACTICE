// Decimal to Binary Conversion

/*
    // Theorem

    Decimal to Binary: Repeatedly divide by 2, collect remainders bottom-up.
    13 ÷ 2 = 6 rem 1  ↑
    6  ÷ 2 = 3 rem 0  |
    3  ÷ 2 = 1 rem 1  | read upward
    1  ÷ 2 = 0 rem 1  ↓
    → 1101

    Binary to Decimal: Multiply each bit by its place value and sum.
    1101 = 1×8 + 1×4 + 0×2 + 1×1 = 13
*/

// 

#include <iostream>
#include <algorithm>

using namespace std;

string convertIntegerToBinary(int n) {
    string final = "";
    while(n != 0) {
        int d = n % 2;
        n /= 2;
        final = to_string(d) + final;
    }
    return final;
}

int convertBinaryToInteger(string s) {
    int n = 0, p = 1;
    for(int i=s.size() -1; i>=0; i--) {
        int d = s[i] - '0';
        n += d * p;
        p *= 2;
    }

    return n;
}

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     int n;
//     cin >> n;

//     // Convert To Binary
//     string bin = convertIntegerToBinary(n);
//     cout << bin << "\n";

//     return 1;
// }

int main() {
    string bs;
    cin >> bs;

    int n = convertBinaryToInteger(bs);
    cout << n << "\n";

    return 1;
}