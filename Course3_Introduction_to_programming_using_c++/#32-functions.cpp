#include <iostream>
#include <string>
using namespace std;

// A simple procedural function that prints a message to the console
void myProcedural() {
    cout << "Hello world, I am a procedural function." << endl;
}

// A simple function that returns a string
string myFunction() {
    return "I am a function.";
}

int main() {
    // Calling the procedural function
    myProcedural();

    // Printing the return value of the function
    cout << myFunction() << endl;

    return 0;
}

/*
--------------------------------------------------------
Tutorial: Functions and Procedures in C++
--------------------------------------------------------

In C++, a **procedure** (or "void function") is a function that performs an action
but does not return a value. It uses the `void` return type. Example: `void myProcedural()`.

A **function** on the other hand, returns a value using the `return` statement.
Its return type must match the type of the returned value. Example: `string myFunction()`.

In this example:
- `myProcedural()` prints a message directly to the console.
- `myFunction()` returns a string which is then printed in `main()`.

These examples demonstrate the basic structure, definition, and use of functions in C++.
Functions improve code organization, readability, and reusability.
*/
