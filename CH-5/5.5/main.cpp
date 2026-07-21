// Ternary Operator - Compact if else

// Syntax: condition ? valueIfTrue : valueIfFalse

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    int a = 10, b = 20;
    int score = 73, n = 5;

    int maxVal = a > b ? a : b;
    string grade = (score >= 60) ? "Pass" : "Fail";
    string isEven = (n % 2 == 0) ? "Even" : "Odd";

    cout << "Max Value b/w a & b is: " << maxVal << "\n";
    cout << "Grade: " << grade << "\n";
    cout << "isEven: " << isEven << "\n";

    return 1;
}