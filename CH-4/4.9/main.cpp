// Common String Patterns in CP

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// A) Count Vowels
// int main() {
//     // CP NOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     string s = "hello";
//     int cnt = 0;
//     for(char ch: s) {
//         if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
//             cnt++;
//     }
//     cout << cnt << "\n";

//     return 1;
// }

// B) Check Palindrome

// int main() {
//     string s = "nitin";
//     string org = s;
//     reverse(s.begin(), s.end());
//     bool isPalindrome = s == org;

//     cout << isPalindrome << "\n";
// }

// C) Frequency array for lowercase letters

int main() {
    string s = "abca";
    int freq[26] = {0};
    for(char ch: s) {
        freq[ch - 'a']++;
    }

    for(int x: freq) {
        cout << x << " ";
    }
    return 1;
}
