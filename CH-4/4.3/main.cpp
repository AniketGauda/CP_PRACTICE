// Creating & Initializing Strings

#include <iostream>
#include <string>
using namespace std;

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    string s1;                          // "" Empty String
    string s2 = "Hello";                // From Literal
    string s3("World");                 // constructor style
    string s4 = s2;                     // copy of s2 (On change of s2, it won't change)
    string s5(5,'a');                   // "aaaaa" - 5 copies of a

    cout << s1 << "\n";
    cout << s2 << "\n";
    cout << s3 << "\n";
    cout << s4 << "\n";
    cout << s5 << "\n";
}

