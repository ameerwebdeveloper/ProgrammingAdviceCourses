#include <iostream>
#include <string>
using namespace std;


void printMenu() {
	cout << "Enter a number to choose a color:" << endl;
	cout << "Red   = 1" << endl;
	cout << "Blue  = 2" << endl;
	cout << "Green = 3" << endl;
	cout << "Black = 4" << endl;
}

bool validateUserInput(int userInput) {
	if (userInput == 1 || userInput == 2 || userInput == 3 || userInput == 4) {
		return true;
	}

	cout << "Invalid input!" << endl;
	return false;
}

enum Color {
	Red = 1,
	Blue = 2,
	Green = 3,
	Black = 4
};

void changeSystemColor(Color enteredColor) {

	// Windows console color codes:
	// Format: system("color XY")
	// X = background color, Y = text color

	if (enteredColor == Black) {
		system("color 0F"); 
	}
	else if (enteredColor == Blue) {
		system("color 1F");
	}
	else if (enteredColor == Green) {
		system("color 2F"); 
	}
	else if (enteredColor == Red) {
		system("color 4F"); 
	}
}

int main() {
	int userInput;
	Color enteredColor;

	printMenu();

	cin >> userInput;

	if (validateUserInput(userInput)) {
		enteredColor = (Color)userInput;
		changeSystemColor(enteredColor);
	}

	return 0;
}

/*
===========================================
TUTORIAL: Enums and Input Handling in C++
===========================================

This example shows how to use enums together with user input and conditional logic.

1. What is an enum?
   An enum (short for enumeration) is a user-defined type that consists of named constants.
   Instead of using plain integers like 1, 2, 3, you can use meaningful names such as Red, Blue, etc.

2. Why use enums?
   - Improves readability
   - Reduces errors caused by using wrong numbers
   - Makes code easier to maintain

3. Input validation:
   The function validateUserInput() ensures that only valid values (1–4) are accepted.
   This prevents unexpected behavior in the program.

4. Casting:
   The user input (int) is converted into the enum type using:
	   enteredColor = (Color)userInput;
   This allows us to work with named constants instead of raw numbers.

5. System color change:
   The function changeSystemColor() uses Windows console commands:
	   system("color XY");
   where:
	   X = background color
	   Y = text color

6. Key takeaway:
   Combine enums with validation and functions to create clean,
   structured, and readable programs.

===========================================
*/