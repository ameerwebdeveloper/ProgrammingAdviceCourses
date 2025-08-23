#include <iostream>
using namespace std;

int main()
{
    // Literal and Escape Sequences

    // Literals are data used for representing fixed values
    // Example: 5, 5.2, "Ameer"

    /*
       Literal types:

       1. Integer Literals
          Decimal (e.g., 10, 20, 100, -5)
          Octal (e.g., 012, 077, 055) prefixed with 0
          Hexadecimal (e.g., 0xA, 0xFF, 0x1C) prefixed with 0x

       2. Floating Point Literals
          Examples: 3.14, -0.001, 2.5e3 (which is 2.5 × 10³)

       3. Character Literals
          Examples: A, B, 9, @

       4. Escape Sequences Literals
          \n   New line
          \\   Backslash
          \t   Tab (4 spaces)
          \"   Double quote
          \'   Single quote
          \a   Audible alert (bell sound)
    */


    cout << "m1 \\ m2 " << endl;
    cout << "2 \\ 3 \\ 5  " << endl;

    cout << "M1\tM2 \n" << endl;
    cout << "M3\tM4 \n" << endl;

    cout << "My name is \"Ameer\" ";
    cout << "\a";

    return 0;
}