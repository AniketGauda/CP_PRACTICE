// 1st Executbale C++ Program
#include <iostream>
using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout << "Hello World, I am Aniket\n";
//     return 0;
// }

/*  
    #include copies the contents of <iostream> into your file — this gives you input/output ability.
    int main() is where execution starts. Every C++ program must have exactly one main.
    cout << sends text to the screen (standard output).
    return 0 tells the OS the program ended without errors.
*/

// Variables

/*
    Think a variable is like a box that can hold a value. You can put different types of values in different boxes. 
    For example, you can have a box for whole numbers (int), a box for decimal numbers (float or double), and a box for text (string). 
    You can also give these boxes names so you can use them later in your program.

    int age = 25; 

    int → type (integer — whole number)
    age → name of the box
    25 → value stored inside
    = → assignment (put 25 into age)

    Variable naming rules:
    Can use letters, digits, underscore: score1, _temp, myVar
    Cannot start with a digit: 1score is INVALID
    Cannot use C++ keywords: int, return, for are reserved
    Case-sensitive: Age and age are different variables

*/

int main() {
    // CP BOILER PLATE
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    // MAIN CODE
    int age = 25;
    cout << "My age is: " << age << "\n";
    return 1;
}
