// Basic Practice Problems.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
    P1. String Length without .size()
    Read string, count length using loop
*/

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     string s;
//     getline(cin, s);

//     int cnt = 0;
//     for(char ch: s) {
//         cnt ++;
//     }

//     cout << "Length of Entered Name is: " << cnt << "\n";

//     return 1;
// }

/*
    P2. Concatenate Two Strings
    Read two strings, print concatenation
*/

// int main() {
//     string s1, s2;
//     getline(cin, s1);
//     getline(cin, s2);

//     cout << s1+s2 << "\n";

//     return 1;
// }

/*
    P3. Count Vowels
*/

// int main() {
//     string s;
//     getline(cin, s);

//     int vowels_cnt = 0;
//     for(char ch: s) {
//         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//             vowels_cnt++;
//     }

//     cout << "Total Vowels in entered string is: " << vowels_cnt << "\n";

//     return 1;
// }

/*
    P4. Reverse a String
    Without using reverse() — manual loop
*/

// int main() {
//     string s;
//     getline(cin, s);
//     string rev = "";
//     for(char ch: s) 
//         rev = ch + rev;

//     cout << "Reverse of Entered String is: " << rev << "\n";

//     return 1;
// }

/*
    P5. Check Palindrome
*/

// int main() {
//     string s;
//     getline(cin, s);

//     string org = s;
//     reverse(s.begin(), s.end());

//     if(s == org)
//         cout << "Entered String is a palindrome";
//     else
//         cout << "Entered String is not a palindrome";
// }

/*
    P6. Count Words
    Words separated by single spaces
*/

// int main() {
//     string s;
//     getline(cin, s);

//     int cnt = 0;

//     for(char ch: s) {
//         if(ch == ' ') {
//             cnt++;
//         } 
//     }

//     cout << "Total Number of Words is: " << cnt + 1 << "\n";

//     return 1;
// }

/*
    P7. First and Last Character
*/

// int main() {
//     string s;
//     cin >> s;

//     cout << s[0] << "," << s[s.length()-1] << "\n";
    
//     return 1;
// }

/*
    P8. Replace Spaces with Underscores
*/

// int main() {
//     string s;
//     getline(cin, s);

//     for(int i=0; i<s.length(); i++) {
//         if(s[i] == ' ') {
//             s[i] = '_';
//         }
//     }

//     cout << s << "\n";
// }

/*
    P9. Check if Two Strings are Equal
    Without using == — compare char by char
*/

// int main() {
//     string s;
//     string t;

//     getline(cin, s);
//     getline(cin, t);

//     if(s.length() != t.length()) {
//         cout << "Not Equal";
//     } else {
//         for(int i=0;i<s.size();i++) {
//             if(s[i] != t[i]) {
//                 cout << "Not Equal";
//                 return 1;
//             }
//         }

//         cout << "Equal";
//     }
// }

/*
    P10. Integer to String Digit Sum
    Read integer n, convert to string, sum all digit characters
*/

int main() {
    int n;
    cin >> n;

    string s = to_string(n);
    
    int sum = 0;
    for(char ch: s) {
        sum += (int)ch - '0';
    }

    cout << sum << "\n";

    return 1;
}