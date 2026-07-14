// Basic Practice Problem for CH3

#include <iostream>
using namespace std;

/*
    P1. ASCII Value
    Input a character, print its ASCII value
*/

// int main() {
//     // CP NOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     char ch;
//     cin >> ch;

//     cout << "ASCII Value of Entered Character is: " << (int)ch << "\n";

//     return 1;
// }

/*
    P2. Lowercase to Uppercase
    Input lowercase letter, output uppercase
*/

// int main() {
//     char ch;
//     cin >> ch;
//     char uch = ch - 32;

//     cout << uch << "\n";
// }

/*
    P3. Even or Odd using bool
    Function returns bool, main prints "Even" or "Odd"
*/

// bool evenOrOdd(int n) {
//     return n%2 == 0;
// }

// int main() {
//     int n;
//     cin >> n;
//     string res = evenOrOdd(n) ? "Even" : "Odd";
//     cout << res << "\n";

//     return 1;
// }

/*
    P4. Data Type Size Report
    Print sizeof for int, char, float, double, long long (one per line)
*/

// int main() {
//     cout << sizeof 3 << "\n";
//     cout << sizeof 'A' << "\n";
//     cout << sizeof 3.14f << "\n";
//     cout << sizeof 3.1232 << "\n";
//     cout << sizeof 838LL << "\n";

//     return 1;
// }

/*
    P5. Overflow Demonstration
    Read two ints up to 10⁵, print product as long long
*/

// int main() {
//     int n, m;
//     cin >> n >> m;

//     long long prod = 1LL * n * m;
//     cout << prod << "\n";

//     return 1;
// }

/*
    P6. Float vs Int Division
    Read two ints a, b. Print int division AND float division on separate lines
*/

// int main() {
//     int a, b;
//     cin >> a >> b;

//     cout << a / b << "\n";
//     cout << (double)a/b << "\n";

//     return 1;
// }

/*
    P7. Character Next in Alphabet
    Input lowercase letter (not 'z'), print next letter
*/

// int main() {
//     char ch;
//     cin >> ch;

//     cout << char(ch + 1);

//     return 1;
// }

/*
    P8. Digit to Character
    Input digit 0-9, print as character
*/

int main() {
    int n;
    cin >> n;

    char ch = (char)(n + '0');
    cout << ch << "\n";

    return 1;
}