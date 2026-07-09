// Common Mistakes.

// A) Forgetting return in non-void function.

#include <iostream>
using namespace std;

// int square(int n);

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     int n = 7;
//     int sqr = square(n);

//     cout << sqr << "\n";
// }

// int square(int n) {
//     cout << "Square of n is: " << n * n << "\n";
// }

// This is not allowed cause we're not returning anything from a non-void function.

// B) Function define after main without function declaration.

// int main() {
//     greetTo("Aniket");
// }

// void greetTo(string name) {
//     cout << "Good Morning, " << name << "\n";
// }

// This will throw an error with msg: "'greetTo' was not declared in this scope"

// C) Modifying pass by value & expecting Original to change.

// void increment(int n) {
//     n++;
// }

// int main() {
//     int a = 7;
//     increment(a);
//     cout << "Increased Valus is: " << a << "\n";

//     return -1;
// }

// This is oftently happen cause the function will create it's own memory & this will not impact the original at all.
// To do this we've pass by reference.

// D) Infinite Recustion (Stack Overflow Crash)
// A function will call itself with no base case.

void print(int n) {
    cout << n << "\n";
    print(--n);
}

int main() {
    print(10);
}