#include <iostream>
#include <string>
using namespace std;

// This procedure reads two numbers from the user, calculates their sum, and prints the result
void mySomeProcedure() {
    float firstNumber, secondNumber, result;

    cout << "Enter first number: " << endl;
    cin >> firstNumber;

    cout << "Enter second number: " << endl;
    cin >> secondNumber;

    result = firstNumber + secondNumber;

    cout << "Result from procedure: " << result << endl;
}

// This function reads two numbers from the user, calculates their sum, and returns the result
float mySomeFunction() {
    float firstNumber, secondNumber, result;

    cout << "Enter first number: " << endl;
    cin >> firstNumber;

    cout << "Enter second number: " << endl;
    cin >> secondNumber;

    result = firstNumber + secondNumber;

    return result;
}

int main() {
    // Call the procedure version (prints directly)
    mySomeProcedure();

    // Call the function version (returns a value)
    float result = mySomeFunction();
    cout << "Result from function: " << result << endl;

    return 0;
}
