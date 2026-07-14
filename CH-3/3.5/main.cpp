// bool - true/false

#include <iostream>
using namespace std;

int main() {
    // CP BOIERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    bool isPassed = true;
    bool isFailed = false;

    int score = 75;
    isPassed = score >= 60;

    cout << isPassed << "\n"; // print 1 (true) or 0 (false)

    return 1;
}

// in conditions, 0, 0.0, false, nullptr → false; everything else → true.