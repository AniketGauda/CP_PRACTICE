// Pass by Value V/S Pass By Reference

// Pass By Value (By Default)
// The function gets a copy. Changing the copy doesn't affect the original.

#include <iostream>
using namespace std;

// void increment(int x) {
//     x = x + 1;
//     cout << "Inside function: " << x << "\n"; 
// }

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     int num = 5;
//     increment(num);
//     cout << "In main: " << num << "\n";
//     return 0;
// }

// Pass By Reference. (Works on Original)

void increment(int &x) {
    x++;
}

int main() {
    int n = 5;
    increment(n);
    cout << "Incremented Value is: " << n << "\n";

    return 1;
}

// When to Use

// Just reading - Pass by value
// Modifying - Pass by References
// Big Data - Pass by value