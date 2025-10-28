#include <iostream>
#include <string>
using namespace std;
int main() {
    int num1, num2, num3;
    double numBase = 18.99;

    // Implicit conversion: double → int (decimal part is truncated)
    num1 = numBase;
    cout << "Implicit conversion of double to int: " << num1 << endl;

    // Explicit conversion using C-style cast
    num2 = (int)numBase;
    cout << "Explicit conversion using (int): " << num2 << endl;

    // Explicit conversion using functional cast
    num3 = int(numBase);
    cout << "Explicit conversion using int(): " << num3 << endl;

    // Converting strings to numeric data types using the <string> library
    string myString = "123.45";

    int strToInt = stoi(myString);
    cout << "String to integer: " << strToInt << endl;

    float strToFloat = stof(myString);
    cout << "String to float: " << strToFloat << endl;

    double strToDouble = stod(myString);
    cout << "String to double: " << strToDouble << endl;

    // Example: what happens if the string contains non-numeric text
    string invalidString = "ameer";
    try {
        int invalidToInt = stoi(invalidString);
        cout << invalidToInt << endl;
    } catch (invalid_argument const& e) {
        cout << "Error: cannot convert string '" << invalidString << "' to number." << endl;
    }

    // Converting numeric types (int, float, double) to strings
    int myInt = 100;
    float myFloat = 200.99f;
    double myDouble = 400.23;

    string intToString = to_string(myInt);
    string floatToString = to_string(myFloat);
    string doubleToString = to_string(myDouble);

    cout << "Integer to string: " << intToString << endl;
    cout << "Float to string: " << floatToString << endl;
    cout << "Double to string: " << doubleToString << endl;

    return 0;
}

/*
-----------------------------------------------
Tutorial: Data Type Conversion in C++
-----------------------------------------------
In C++, type conversion changes the type of a variable to another type. 
This can happen automatically or manually.

1. **Implicit Conversion (Type Promotion)**:
   - Done automatically by the compiler.
   - Example: assigning a `double` to an `int` automatically truncates the decimal part.

2. **Explicit Conversion (Type Casting)**:
   - Controlled by the programmer.
   - Syntax examples:
       (int)num    → C-style cast
       int(num)    → functional cast

3. **String to Number Conversion**:
   - Functions from `<string>`:
       - `stoi()` → string to int
       - `stof()` → string to float
       - `stod()` → string to double
   - If the string contains invalid characters, a `std::invalid_argument` exception is thrown.

4. **Number to String Conversion**:
   - Use `to_string()` for all basic numeric types.

Always be cautious with type conversions, as implicit conversions may lead to data loss.
*/
