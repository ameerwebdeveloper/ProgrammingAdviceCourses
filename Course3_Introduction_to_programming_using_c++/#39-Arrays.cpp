#include <iostream>
#include <string>
using namespace std;

int main() {

    int x[3] = { 1,2,3 };

    cout << "value x[0]: " << x[0] << endl;
    cout << "address x[0]: " << &x[0] << endl;

    cout << endl;

    cout << "value x[1]: " << x[1] << endl;
    cout << "address x[1]: " << &x[1] << endl;

    cout << endl;

    cout << "value x[2]: " << x[2] << endl;
    cout << "address x[2]: " << &x[2] << endl;

    return 0;
}

/*
Lesson: Arrays and Memory Addresses

Theory:
Arrays are part of derived data types in C++. They allow us to store multiple
values of the same type under one variable name.

When an array is declared, the compiler reserves a continuous block of memory.
Each element is stored directly next to the previous element in RAM.

Example:
int x[3] = {1,2,3};

This creates an array with three integer values. Array indexing always starts
from 0.

x[0] -> first element
x[1] -> second element
x[2] -> third element

Each element has its own memory address. Because an int usually uses 4 bytes,
the memory address increases by 4 bytes for the next element.

Program Output Example:

value x[0]: 1
address x[0]: 0000004911F8FC88

value x[1]: 2
address x[1]: 0000004911F8FC8C

value x[2]: 3
address x[2]: 0000004911F8FC90

Explanation:
The addresses are increasing by 4 bytes.

FC88 + 4 = FC8C
FC8C + 4 = FC90

This happens because each integer uses 4 bytes in memory.

The computer internally works with these memory addresses, but programmers
use the index notation like x[0], x[1], x[2] because it is easier to read
and understand.
*/