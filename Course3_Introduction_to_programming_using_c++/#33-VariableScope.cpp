#include <iostream>
#include <string>
using namespace std;

int x = 100; // Global variable

void myFunction() {
	int x = 300; 

	cout << "The x inside myFunction is " << x << endl;
	cout << "The global x is " << ::x << endl; 
}

int main() {
	int x = 200; // Local variable inside main

	cout << "The x inside main is " << x << endl;
	::x++;
	cout << "The global x is " << ::x << endl;

	myFunction();

	return 0;
}

// - Variables are stored in memory, and each variable has a memory address
//   (commonly represented in hexadecimal form).
// - The scope of a variable determines where it can be accessed in the program.
// - When we declare a variable, we give it a name and an initial value, and the
//   compiler allocates memory for it.
// - Local variables exist only within their scope (for example, inside a function).
//   Once the scope ends, the memory used by those variables is released.
// - Global variables exist for the entire lifetime of the program and can be
//   accessed from anywhere, unless hidden by a local variable with the same name.
