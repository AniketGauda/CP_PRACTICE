// Iterating over a string.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    string s = "Mahabharat Katha";

    // Method 1) Index Loop.
    // for(int i=0;i<s.size();i++) {
    //     cout << s[i];
    // }
    // cout << "\n";

    // Method 2) Range Based (Preferred)
    // for(char ch: s) {
    //     cout << ch;
    // }

    // Method 3: modify in place
    for(char &c: s) {
        c = toupper(c);
    }
    cout << s << "\n";

    return 1;

}