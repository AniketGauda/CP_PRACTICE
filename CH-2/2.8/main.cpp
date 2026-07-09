// Working Examples.

// 1) Check Even or Odd

#include <iostream>
using namespace std;

// bool isEven(int n) {
//     return n%2 == 0;
// }

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     int n;
//     cin >> n;
    
//     if(isEven(n)) 
//         cout << "Entered Number is Even";
//     else
//         cout << "Entered Number is Odd";
// }

// 2) Power Function (simple loop version)

// long long power(int base, int expo) {
//     long long p = 1;
//     for(int i=0;i<expo;i++) {
//         p *= base;
//     }

//     return p;
// }

// int main() {
//     int n, b;
//     cin >> n >> b;
//     cout << power(n, b) << "\n";
//     return 1;
// }

// 3) Swap Using References

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

int main() {
    // CP BOILERPLATE
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    int a, b;
    cin >> a >> b;
    cout << "Before Swapping A is " << a << " and B is " << b << "\n";
    swap(a, b);
    cout << "After Swapping A is " << a << " and B is " << b << "\n";

    return 1;
}