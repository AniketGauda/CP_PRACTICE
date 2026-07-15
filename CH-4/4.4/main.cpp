// Accessing Characters

#include <iostream>
#include <string>
using namespace std;

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    string s = "Aniket";

    cout << s[0] << "\n";               // 1st Character
    cout << s[5] << "\n";               // Last Character
    cout << s.size() << "\n";           // 6 length
    cout << s.back() << "\n";           // Last Character
    cout << s.front() << "\n";          // 1st Character

    // Modify
    s[0] = 'a';
    cout << s << "\n";

    return 1;
}

// Index range: valid indices are 0 to size()-1. Out of range → crash or garbage