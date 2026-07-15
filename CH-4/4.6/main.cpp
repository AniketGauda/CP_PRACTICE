// Important String Operations.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 1) Length & Empty Check.

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     string s = "Hello";
//     string t = "";
//     cout << s.length() << "\n";  // Length of s , same as size()
//     cout << t.empty() << "\n";   // if(t.length() == 0) return 0 else return 1;
 
//     return 1;
// }

// 2) Concatenation.(+ , +=)

// int main() {
//     string s1 = "Aniket", s2 = "Gauda";
//     string full_name = s1 + " " + s2;
//     cout << full_name << "\n";

//     s1 += "!";
//     cout << s1 << "\n";

//     return 1;
// }

// 3) Substring

// int main() {
//     string s = "Competitive";
//     string sub = s.substr(0, 4);        // start at 0 , length 4
//     string rest = s.substr(4);          // start at index 4 till the end

//     cout << sub << "\n";
//     cout << rest << "\n";

//     return 1;
// }

// 4) Find

// int main() {
//     string s = "Hello World!";
//     size_t pos = s.find("World");
//     if(pos != string::npos) {
//         cout << "Found at index: " << pos << "\n";
//     }

//     if(s.find("Hmm") == string::npos) {
//         cout << "Not Found\n";
//     }

//     return 1;
// }

// 5) Compare (lexiographic/dictionary order)

// int main() {
//     string a = "apple", b = "banana";
//     if(a < b) {
//         cout << "In Dictionary apple comes 1st!";
//     }
//     return 1;
// }

// Compares character by character using ASCII

// 6) Reverse

int main() {
    string s = "hello";
    reverse(s.begin(), s.end());

    cout << s << "\n";
}