// Logical Operators

/*
    Op                      Name                    True when
    &&                      AND                     Both conditions true
    `                                                   `                          
    !                       NOT                     Flips true↔false
*/

#include <iostream>
#include <algorithm>
using namespace std;

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     int age = 20,  score = 60, x = 2;
//     bool hasId = true;

//     if(age >= 18 && hasId) {
//         cout << "Entry Allowed" << "\n";
//     }

//     if(score < 40 || score > 100) {
//         cout << "Invalid Score" << "\n";
//     }

//     if(!(x == 0)) {
//         cout << "x is not zero" << "\n";
//     }
// }

int main() {
    int n = 7;
    int arr[5] = {1,2,3,4,5}; 

    if(n != 0 && 100/n > 10) {
        cout << "Hello World!" << "\n";
    }

    if(arr != nullptr && arr[0] == 1) {
        cout << "I am Aniket";
    }
}