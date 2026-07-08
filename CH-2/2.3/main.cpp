// Void Functions.

// A function which doesn't have any return type is known as void function.

#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << "\n";
}

int main() {
    // CP BOLIERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    greet("Aniket Gauda!");
}