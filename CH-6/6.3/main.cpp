// Bitwise Operators Explained

#include <iostream>
#include <algorithm>
using namespace std;

// Unlike logical operators (&&, ||) that work on true/false, bitwise operators work on individual bits.
/*

    AND (&) — Both bits must be 1
    12 = 1100
    10 = 1010
    &  = 1000 = 8

    so 12 & 10 -> 8

    OR (|) — At least one bit is 1

    12 = 1100
    10 = 1010
    |  = 1110

    sp 12 | 10 = 14
*/

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     int a, b;
//     cin >> a >> b;
//     cout << (a & b) << "\n";

//     return 1;
// }

// int main() {
//     int a , b;
//     cin >> a >> b;

//     cout << (a | b) << "\n";

//     return 1;
// }

/*
    XOR (^) — Bits different → 1, same → 0
    The impoatant one for cp.

    12 = 1100
    10 = 1010
    ^  = 0110 -> 6

    so 12 ^ 10 = 6

    // Important Features in XOR
    1) Same Bit Cancellation
        a ^ a = 0

    2) Zero is Identity
        a ^ 0 = a;

    3) Pair Cancellation
        a ^ b ^ a = b;

    4) Commutative
        a ^ b = b ^ a;

    5) Associative
        (a ^ b) ^ c = a ^ (b ^ c);

*/

// int main() {
//     int a, b;
//     cin >> a >> b;

//     cout << (a ^ b) << "\n";

//     return 1;
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << (n ^ n) << "\n";

//     return 1;
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << (n ^ 0) << "\n";

//     return 1;
// }

// int main() {
//     int a = 3, b = 3, c = 2;
//     int ans = a ^ b ^ c;

//     cout << ans << "\n";
//     return 1;
// }

// int main() {
//     int a, b;
//     cin >> a >> b;

//     if(a ^ b == b ^ a) {
//         cout << "Commutative Rule Holds" << "\n";
//     } else {
//         cout << "Commutative Rule Doesn't Holds" << "\n";
//     }

//     return 1;
// }

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;

//     if(a ^ (b ^ c) == a ^ (b ^ c)) {
//         cout << "Associativity Rules Holds";
//     } else {
//         cout << "Associativity Rules doesn't Holds";
//     }

//     return 1;
// }

/*
    NOT (~) — Flip every bit

    ~0 = all bits 1 (in 32-bit: -1)
    ~5 = ...11111010 (two's complement — advanced, know it flips bits)
*/

// int main() {
//     int n;
//     cin >> n;
//     int d = ~n;
//     cout << d << "\n";

//     return 1;
// }

/*
    Left Shift (<<) — Shift bits left, fill with 0

    5 << 1 = 10    (binary: 101 → 1010)
    5 << 2 = 20    (multiply by 2 each shift)
    General: n << k = n × 2^k
*/

// int main() {
//     int n, k;
//     cin >> n >> k;

//     int ans = n << k;
//     cout << ans << "\n";

//     return 1;
// }

/*
    Right Shift (>>) — Shift bits right

    10 >> 1 = 5    (divide by 2)
    20 >> 2 = 5    (divide by 4)
    General: n >> k = n / 2^k (for positive n)
*/

int main() {
    int n, k;
    cin >> n >> k;

    int ans = n >> k;
    cout << ans << "\n";

    return 1;
}