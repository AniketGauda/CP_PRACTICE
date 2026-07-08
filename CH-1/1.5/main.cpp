// Common Mistakes in C++

// 1) Using uninitialized variables

#include <iostream>
using namespace std;

// int main() {
//     // CP BOILERPLATE
//     ios_base:: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     int x;
//     cout << x << "\n";

//     return 1;
// }

// In the Above example, the variable 'x' is declared but not initialized.
// So without initializing the variable 'x', it will contain garbage or intermediate value and the output will be unpredictable.

// 2) Integer Division Surprise

// int main() {
//     cout << 5 / 2 << "\n";       // Both are integer thus C++ will truncate the decimal part and return 2
//     cout << 5.0 / 2 << "\n";     // 5.0 is double, 2 is integer, so result is double
//     cout << 5 / 2.0 << "\n";     // 5 is integer, 2.0 is double, so result is double
//     cout << 5.0 / 2.0 << "\n";   // Both are double, so result is double

//     return -1;
// }

// 3) Forgetting \n

// int main() {
//     cout << "Hello World";
//     cout << "I am Aniket Gauda, & i am a Software Engineer";

//     return -1;
// }

// I want these 2 statements in 2 different line, but i won't happen to explicitly do it after 1st line ending we've to add \n.

// 4) cin >> for full sentence.

// int main() {
//     string s;
//     cout << "Enter Your Name: ";
//     cin >> s;
//     // getline(cin, s);
//     cout << "Hello, " << s << "\n";
// }

// In the above example, cin will take only a word not a full name or sentence.
// Lets say your name is 'Chinnaswamy muthhuswamy venugopal iyer'. so it will only take Chinnaswamy in the input.
// to take the entire name use getline(cin, s);

// 5) Missing Semicolon

// int main() {
//     int x
//     cout << x;
// }

// the above code will throw an error, cause semo colon is missing in the initializer.