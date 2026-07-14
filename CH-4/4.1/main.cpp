// Constansts - The Values that never change

// Const Keyword.

#include <iostream>
using namespace std;

#define ll long long
#define MOD 1000000007
#define INF 1e18
#define rep(i,a,b) for(int i=(a); i<=(b); i++)

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    const int MAX_STUDENTS = 100;
    const double PI = 3.141592653589793;
    // const int MOD = 1000000007;
    ll x = 5LL;

    // cout << MAX_STUDENTS << "\n";
    // cout << PI << "\n";
    // cout << MOD << "\n";
    // cout << sizeof x << "\n";

    rep(i,0,9) {
        cout << "-----START------" << "\n";
        cout << i + 1 << "\n";
        cout << "-----END------" << "\n";
    }
    return 1;
}

/*
    const vs #define:
                        const                                       #define
    Type checking       Yes                                            No
    Scope               Follows normal scope rules                  Global text replace
    CP usage            Both common                                 Macros for shortcuts
*/