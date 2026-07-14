// sizeof (memory check)

#include <iostream>
using namespace std;

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE

    cout << sizeof 3 << "\n";          // Size of Int (4)
    cout << sizeof true << "\n";       // Size of Bool (1)
    cout << sizeof 'A' << "\n";        // Size of Char (1)
    cout << sizeof 3.14 << "\n";       // Size of Double (8)
    cout << sizeof 34LL << "\n";       // Size of Long Long (8)
    cout << sizeof 3.14f << "\n";      // Size of Float (4)

    return 1;
}