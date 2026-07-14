// Char - Single Character
// Stored as Integer (ASCII Value)

#include <iostream>
using namespace std;

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     char ch = 'A';
//     cout << ch << "\n";
//     cout << (int)ch << "\n";

//     return 1;
// }

// Char to Integer Digit Trick

// int main() {
//     char ch = '7';
//     int b = ch - '0'; // (7, char to int digit trick)
//     cout << b << "\n";

//     return 0;
// }

// ASCII TABLE (By Heart these ranges)

/*

    Range                    Characters
    48-57                     '0' - '9'
    65-90                     'A' - 'Z'
    97-122                    'a' - 'z'

*/

// Lowercase to Uppercase
// 'a' -> 'A'

// int main() {
//     char ch = 'a';
//     char ch1 = ch - 'a' + 'A';
//     char ch2 = ch - 32;
//     // Actually ASCII(a-A) = 32 so directly we can use that also;
//     cout << ch1 << "\n";
//     cout << ch2 << "\n";

//     return 1;
// }

// Uppercase to Lowercase
// 'A' - 'a'

int main() {
    char ch = 'D';
    char ch1 = ch - 'A' + 'a';
    char ch2 = ch + 32;

    cout << ch1 << "\n";
    cout << ch2 << "\n";

    return 1;
}