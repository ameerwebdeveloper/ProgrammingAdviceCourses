#include <iostream>
using namespace std;

void swapfunction(int A, int B) {
	int temp = A;
	A = B;
	B = temp;
}

void swapByRef(int &A, int &B) {
	int temp = A;
	A = B;
	B = temp;
}

int main() {
	int A, B;

	cout << "enter A" << endl;
	cin >> A;

	cout << "enter B" << endl;
	cin >> B;

	cout << "Before swap  A  " << A << "  B  " << B << endl;

	swapfunction(A, B);
	cout << "After swap (by value)  A  " << A << "  B  " << B << endl;

	swapByRef(A, B);
	cout << "After swap (by reference)  A  " << A << "  B  " << B << endl;

	cout << "Addresses  A  " << &A << "  B  " << &B << endl;

	return 0;
}

/*
Lesson: Passing by Value vs Passing by Reference

Theory:
When a variable is passed by value, the function receives a copy of the original
variable. The copy is stored in a different memory location, so any changes made
inside the function do not affect the original variable.

When a variable is passed by reference, the function works directly with the
original variable. No copy is created, and both the function and the caller
refer to the same memory location. Any modification inside the function changes
the original variable.

This is why swapfunction does not change A and B in main, while swapByRef
successfully swaps their values. Passing by reference is also more efficient
because it avoids unnecessary copying of data.
*/
