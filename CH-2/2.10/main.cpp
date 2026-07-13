// Basic Practice Problem

#include <iostream>
using namespace std;

/*
    P1. Square of a Number
    Write function int square(int n) returning n²
*/

// int square(int n) {
//     return n * n;
// }

// int main() {
//     // CP BOILERPLATE
//     ios_base :: sync_with_stdio(false);
//     cin.tie(NULL);

//     // MAIN CODE
//     int n;
//     cin >> n;

//     cout << square(n) << "\n";

//     return 1;
// }

/*
    P2. Maximum of Three Numbers
    Write int maxOfThree(int a, int b, int c)
*/

// int maxOfThree(int a, int b, int c) {
//     return a > b ? (a > c ? a : c) : (b > c ? b : c);
// } 

// int main() {
//     int a, b, c;
//     cout << "Enter 3 Numbers: ";
//     cin >> a >> b >> c;
//     int max = maxOfThree(a, b, c);
//     cout << "Max Amongst all is: " << max << "\n";

//     return 1;
// }

/*
    P3. Check Prime
    Write bool isPrime(int n) — true if n is prime
*/

// bool isPrime(int n) {
//     bool b = true;
//     for(int i = 2; i * i <= n; i++) {
//         if(n % i == 0) {
//             b = false;
//             break;
//         }
//     }

//     return b && n != 1;
// }

// int main() {
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;

//     string res = isPrime(n) ? "Yes" : "No";

//     cout << res << "\n";

//     return 1;
// }

/*
    P4. Factorial using Function
    Write long long factorial(int n)
*/

// long long factorial(int n) {
//     long long p = 1;
//     for(int i = 1; i <= n; i++) {
//         p *= i;
//     }

//     return p;
// }

// int main() {
//     int n;
//     cin >> n;
//     long long fact = factorial(n);
//     cout << "Factorial of Entered Number is: " << fact << "\n";

//     return 1;
// }

/*
    P5. Sum of Digits
    Write int sumOfDigits(int n)
*/

// int sumOfDigits(int n) {
//     int final = 0;
//     while(n != 0) {
//         final += n%10;
//         n /= 10;
//     }

//     return final;
// }

// int main() {
//     int n;
//     cin >> n;
//     int totalSum = sumOfDigits(n);
//     cout << "Sum of Digit of Entered Numbers is: " << totalSum << "\n";

//     return 1;
// }

/*
    P6. Reverse a Number
    Write int reverseNumber(int n)
*/

// int reverseNumber(int n) {
//     // Count the # of digits & Measure base;
//     int temp = n, cnt = 0, p = 1;
//     while(temp !=0) {
//         cnt += 1;
//         p *= 10;
//         temp /= 10;
//     }
//     p /= 10;

//     // come from the last & Multiply with reverse pow of 10.
//     int final = 0;
//     while(n!=0) {
//         int d = n % 10;
//         final += d * p;
//         p /= 10;
//         n /= 10;
//     }

//     return final;
// }

// int main() {
//     int n;
//     cin >> n;
//     int reversedNumber = reverseNumber(n);
//     cout << "Reverse of Entered Number is: " << reversedNumber << "\n";

//     return 1;
// }

/*
    P7. GCD (Euclidean Algorithm)
    Write int gcd(int a, int b)
*/

// int findGcd(int a, int b) {
//     if(b==0)
//         return a;
//     return findGcd(b, a % b);
// }

// int main() {
//     int a, b;
//     cin >> a >> b;
//     int gcd = findGcd(a, b);
//     cout << "GCD of Entered Number is: " << gcd;

//     return -1;
// }

/*
    P8. Print Multiplication Table
    Write void printTable(int n) printing table of n from 1 to 10
*/

void printTable(int n) {
    for(int i = 1; i <= 10; i++) {
        cout << n << " X " << i << " = " << n*i << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    printTable(n);

    return 1;
}