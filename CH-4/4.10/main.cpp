// Common Mistakes

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// 1) s.length() in built return type is size_t.
// So, s.length() in unsigned comparision with int.

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     string s = "Hello World, Aniket Here...";
//     size_t len = s.length();
//     cout << len << "\n";
//     return 1;
// }

// In the above example instead of size_t one could've used int also but in edge cases Range issue might come.
// Thus it's always recommeneded to use size_t cause .length or .size() return unsigned integer.

// 2) comparing string with == to char* incorrectly.

int main() {
    char name[] = "Aniket";
    if(name == "Aniket") {
        cout << "Equal";
    } else {
        cout << "Not Equal";
    }

    return 1;
}

// In the above example Not equal will print cause we're comparing memory location with string...
// To aoid this we use string..

// 3) cin >> s then getline without cin.ignore()

// int main() {
//     int age;
//     string name;

//     cin >> age;
//     // cin.ignore();
//     getline(cin, name);

//     cout << "Entered Age is: " << age << "\n";
//     cout << "Entered Name is: " << name << "\n";

//     return 1;
// }

// in above example, if you enter age then enter, name will automatically taken as empty..
// To avoid this use cin.ignore()

// 4) s[i]out of bounds.

// int main() {
//     string s = "Aniket Gauda";
//     for(int i=0;i<=s.size();i++)
//         cout << s[i] << " ";

//     return 1;
// }

// Bad use of size(), we're going till size from 0 thus out of bound exception might come.
// Unexected behaviours.