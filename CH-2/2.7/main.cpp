// Default Parameters.

#include <iostream>
using namespace std;

void print(int n, char ch = '$') {
    for(int i=0; i<n; i++) {
        cout << ch;
    }
    cout << "\n";
}

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    int n = 4;
    print(4);
    print(4, '*');
}

// Default values must be on the right side of the paraameres list.