// Taking input from the user in C++.

#include <iostream>
using namespace std;

// int main() {
//     // CP BOILER PLATE
//     // ios_base::sync_with_stdio(false);
//     // cin.tie(NULL);

//     // MAIN CODE
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "You entered Number is: " << num << "\n";
// }

// Input & Output in Detail.

// int main() {
//     // CP BOILER PLATE
//     // ios_base:: sync_with_stdio(false);
//     // cin.tie(NULL);

//     // MAIN CODE
//     cout << 45;
//     cout << "Hello World";
//     cout << 21.34;
//     cout << 'Z';
//     cout << true;
//     cout << "\n";
//     cout << endl;

//     return 1;
// }

//  "<<" Operator chains LTR in C++.

// int main() {
//     int a = 5, b = 3;
//     cout << "a: " << a << "\n" <<"b: " << b << "\n";
//     return -1;
// }

// Reading 2 Numbers

// int main() {
//     int a, b;
//     cout << "Enter a & b: ";
//     cin >> a >> b;
//     cout << "a + b: " << a + b << "\n";

//     return 1;
// }

// String Input

// int main() {
//     string name;
//     cout << "Enter Your Name: ";
//     cin >> name;
//     cout << "Hello, " << name << "\n";
//     return 1;
// }

// Note: cin >> name; will only read the first word of the input. It stops on the 1st Space. If you want to read a full line including spaces, 
// you should use getline(cin, name); instead.

// int main() {
//     string fullName;
//     cout << "Enter Your Full Name: ";
//     getline(cin, fullName);
//     cout << "Hello, " << fullName << "\n";

//     return -1;
// }

// Taking an Integer & a String as input. (Common Bug Using getline);

// int main() {
//     int num;
//     string s;

//     cin >> num;
//     getline(cin, s);
//     cout << "Entered Number is: " << num << " And Enter String is" << s << "\n";

//     return 1;
// }

// In the above code the problem is, you can't give the name in new line..
// In the same line you have to give it else, It'll take empty string.
// To avoid this use cin.ignore();
// FYI: This bug won't come for cin >> s.

int main() {
    int n;
    string s;

    cin >> n;
    cin.ignore();
    getline(cin, s);
    cout << "Entered Number is: " << n << " And Entered String is " << s << "\n";

    return 1;
}