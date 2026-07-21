// Modulo Arithmetic
// Essential For CP

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    const int MOD = 1e9 + 7;    // 1000000007 — common prime in CP
    int a = INT_MAX, b = 8383938;

    // Safe Addition
    int sum = (1LL * a + b) % MOD;

    // Safe Subtraction
    int diff = (1LL * a - b + MOD) % MOD;

    // Safe Multiplication
    long long prod = (1LL * a * b);

    cout << "Sum: " << sum << "\n";
    cout << "Diff: " << diff << "\n";
    cout << "Prod: " << prod << "\n";

    return 1;
}

// Properteis to memorize.
/*
    (a + b) % m = ((a % m) + (b % m)) % m
    (a - b) % m = ((a % m) - (b % m) + m) % m
    (a × b) % m = ((a % m) × (b % m)) % m


    Uses of %:
    Check divisibility: n % k == 0
    Extract last digit: n % 10
    Remove last digit: n / 10
    Cyclic index: i % n wraps around array

*/