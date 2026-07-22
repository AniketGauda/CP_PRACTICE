// Basic Practice Problem

#include <iostream>
#include <algorithm>
using namespace std;

/*
    P1. Calculator with All Operations
    Input: a, b, and op (+, -, *, /, %)
*/

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     int a,b;
//     char ch;

//     cin >> a >> b >> ch;

//     switch(ch) {
//         case '+':
//             cout << a + b << "\n";
//             return 0;
//         case '-':
//             cout << a - b << "\n";
//             return 0;
//         case '*':
//             cout << a * b << "\n";
//             return 0;
//         case '/':
//             return a / b;
//             return 0;
//         default:
//             cout << a % b << "\n";
//             return 0;
//     }
// }

/*
    P2. Leap Year Check
    Divisible by 4 AND (not by 100 OR by 400)
*/

// int main() {
//     int y;
//     cin >> y;
//     if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
//         cout << "Leap Year";
//     } else {
//         cout << "Not a Leap Year";
//     }

//     return 1;
// }

/*
    P3. Absolute Value without abs()
    Use conditional or ternary
*/

// int main() {
//     int n;
//     cin >> n;

//     int res = n > 0 ? n : -n;
//     cout << "Absolute Value of Entered Number is: " << res << "\n";

//     return 1;
// }

/*
    P4. Max of Four Numbers
    Use nested ternary or if-else
*/

// int main() {
//     int a, b, c, d;
//     cin >> a >> b >> c >> d;

//     int max = (a > b) ? ((a > c) ? ((a > d) ? a : d) : (c > d) ? c : d) : (b > c) ? ((b > d) ? b : d) : (c > d) ? c : d;
//     cout << "Max: " << max;
    
//     return 1;
// }

/*
    P5. Check Triangle Validity
    Three sides a, b, c form triangle if a+b>c AND a+c>b AND b+c>a
*/

// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;

//     if(a + b > c && b + c > a && c + a > b) {
//         cout << "Valid Triangle";
//     } else {
//         cout << "Invalid Triangle";
//     }

//     return 1;
// }

/*
    P6. Day of Week Number to Name
    Input 1-7, print Monday-Sunday (use if-else or switch preview)
*/

// int main() {
//     int d;
//     cin >> d;

//     switch(d) {
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5:
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         default:
//             cout << "Sunday";
//             break;
//     }

//     return 1;
// }

/*
    P7. Sum of n numbers modulo MOD
    Read n, then n integers. Print sum % (10⁹+7)
*/

// int main() {
//     const int mod = 1e9 + 7;
//     int n;
//     cin >> n;
//     int sm = 0;
//     while(n-- !=0) {
//         int d;
//         cin >> d;

//         sm = (sm + d) % mod;
//     }

//     cout << "Sum is : " << sm << "\n";

//     return 1;
// }

/*
    P8. Extract All Digits
    Print each digit on one line
*/

int main() {
    int n;
    cin >> n;

    string s = to_string(n);
    for(char ch: s) {
        cout << ch << "\n";
    }

    return 1;
}