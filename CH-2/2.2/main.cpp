// Anatomy of a Function

/*
    returnType functionName(parameterType param1, parameterType param2) {
    // body — statements
    return someValue;   // if returnType is not void
}
*/

#include <iostream>
using namespace std;

int maxOfTwo(int a, int b) {
    return a >= b ? a : b;
}

int main() {
    int a, b;
    cin >> a >> b;
    int max = maxOfTwo(a,b);
    cout << "Max: " << max << "\n";

    return 0;
}