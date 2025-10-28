#include <iostream>
#include <string>
using namespace std;

int main() {
    string st1 = "43.22";

    // Convert string to different numeric types
    double strToDouble = stod(st1);
    float strToFloat = stof(st1);
    int strToInt = stoi(st1);

    cout << "String to double: " << strToDouble << endl;
    cout << "String to float: " << strToFloat << endl;
    cout << "String to int: " << strToInt << endl;

    // Convert integer to string
    int N1 = 20;
    string intToString = to_string(N1);
    cout << "Integer to string: " << intToString << endl;

    // Convert double to string
    double N2 = 33.5;
    string doubleToString = to_string(N2);
    cout << "Double to string: " << doubleToString << endl;

    // Convert float to string
    float N3 = 55.23f;
    string floatToString = to_string(N3);
    cout << "Float to string: " << floatToString << endl;

    // Convert float to int (implicit and explicit conversions)
    int implicitInt = N3;           // implicit conversion
    int explicitIntCStyle = (int)N3; // C-style explicit cast
    int explicitIntFuncStyle = int(N3); // functional cast

    cout << "Float to int (implicit): " << implicitInt << endl;
    cout << "Float to int (C-style cast): " << explicitIntCStyle << endl;
    cout << "Float to int (functional cast): " << explicitIntFuncStyle << endl;

    return 0;
}


/*
* Homework Task
* Write a program to do the following:
*
* 1. Convert string st1 = "43.22" to double, float, and int.
* 2. Convert integer N1 = 20 to string.
* 3. Convert double N2 = 33.5 to string.
* 4. Convert float N3 = 55.23 to both string and integer.
*/
