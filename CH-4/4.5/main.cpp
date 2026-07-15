// String Input Methods

#include <iostream>
#include <string>
using namespace std;

// Method - 1
// Only one word.

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     string word;
//     cin >> word;

//     cout << "Entered Word is: " << word << "\n";

//     return 1;
// }

// Method - 2
// Full Line

// int main() {
//     string line;
//     getline(cin, line);

//     cout << "Entered sentence is: " << line << "\n";

//     return 1;
// }

// Method - 3
// Read Character by Character

int main() {
    string result;
    char ch;
    while(cin.get(ch) && ch != '\n') {
        result += ch;
    }

    cout << "Entered Sentence is: " << result << "\n";

    return 1;
}