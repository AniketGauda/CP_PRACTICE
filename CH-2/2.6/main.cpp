// Function Declaration & Definition.

//You can declare it 1st then define it later.

#include <iostream>
using namespace std;

int square(int x);

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    int n = 7;
    int sqrValue = square(n);
    cout << "Square Of Number is: " << sqrValue << "\n";

    return 0;
}

int square(int x) {
    return x * x;
}

