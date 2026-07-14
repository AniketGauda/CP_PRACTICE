// Integer Types

/*
    1) short
        - Size: 2 Bytes
        - Signed Range: -32768 to 32767
        - Use: Rare in CP

    2) int 
        - Size: 4 Bytes
        - Signed Range:  −2×10⁹ to 2×10⁹
        - Use: Default for mos numbers
    3) long long
        - Size: 8 Bytes
        - Signed Range: −9×10¹⁸ to 9×10¹⁸
        - Use: Sums, Products, Big Values
    4) unsigned int
        - Size: 4 Bytes
        - Range: 4×10⁹
        - Use: When -ve impossible
*/

#include <iostream>
using namespace std;

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     int age = 22;
//     long long population = 222200000LL;
//     unsigned int count = 200;

//     cout << age << "\n";
//     cout << population << "\n";
//     cout << count << "\n";

//     return 1;
// }

// The Overflow problem (Critical for CP)

// int main() {
//     int a = 1000000;
//     int b = 1000000;

//     cout << a * b;

//     return -1;
// }

// For Above code the output should be 1000000000000 but some random number will come as the output is out of range.
// So use correct Data type for store.

int main() {
    int a = 1000000;
    int b = 1000000;
    long long res = 1LL * a * b;

    cout << res;

    return 1;
}

/*
    Why 1LL * a * b works:
    1LL forces the whole multiplication into long long math
    Without it, a * b is computed as int first → overflows → then converted
    Rule of thumb: If you multiply two ints that can be > 10⁴, use long long.
*/