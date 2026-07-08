// Return Statement

#include <iostream>
using namespace std;

bool isPositive(int n) {
    if (n > 0)
        return true;
    return false;   
}

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    int n = 4;
    bool b = isPositive(n);

    cout << "IS POSITIVE: " << b << "\n";

    return 0;
}

// Once return executes, the function stops — nothing below runs.