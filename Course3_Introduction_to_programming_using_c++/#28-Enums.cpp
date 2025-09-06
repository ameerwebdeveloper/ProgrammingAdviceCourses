#include <iostream>

using namespace std;

// Lesson 28: Enums in C++
//
// Theory: 
// An enum (enumeration) is a user-defined data type in C++ that allows you to assign 
// names (labels) to integral constants. This makes the code more readable and manageable.
// By default, enum values start at 0 and increment by 1 unless explicitly defined.

enum Color { Red, Green, Yellow, Blue };
enum Direction { North, South, East, West };
enum Week { Sat, Sun, Mon, Tue, Wed, Thu, Fri };
enum Gender { Male, Female };
enum Status { Single, Married };

int main() {
    Color myColor;
    Direction myDirection;
    Week today;
    Status myStatus;

    // Assigning enum values
    myColor = Color::Green;
    myDirection = Direction::North;
    today = Week::Mon;
    myStatus = Status::Single;

    // Displaying integer values stored in enums
    cout << "The value of myColor (Green) is: " << myColor << endl;      // Output: 1
    cout << "The value of myDirection (North) is: " << myDirection << endl; // Output: 0
    cout << "The value of today (Monday) is: " << today << endl;         // Output: 2
    cout << "The value of myStatus (Single) is: " << myStatus << endl;   // Output: 0

    return 0;
}

/*
Quick Tutorial — Enums in C++

Topic
-----
Enums (short for "enumerations") let you define symbolic names for integral values.
They make code easier to read and maintain compared to using plain numbers.

Key Points
----------
1) Definition:
   - `enum Color { Red, Green, Yellow, Blue };`
   - This creates a type `Color` where `Red = 0`, `Green = 1`, `Yellow = 2`, `Blue = 3`.

2) Usage:
   - You declare variables like `Color myColor;` and assign values: `myColor = Green;`.
   - Internally, enums are stored as integers but are more descriptive.

3) Default Values:
   - If not specified, the first item is `0`, and each subsequent item increases by `1`.
   - Example: `enum Week { Sat, Sun, Mon };` gives `Sat = 0`, `Sun = 1`, `Mon = 2`.

4) Printing:
   - When you print an enum with `cout`, it shows the integer value, not the label.

5) Advantages:
   - Improves readability (`if (status == Married)`) instead of magic numbers (`if (status == 1)`).
   - Helps group related constants logically.

Extra:
------
- You can also assign custom values: 
  `enum Example { First = 10, Second = 20, Third = 30 };`

This code demonstrates simple enums for colors, directions, weekdays, gender, and status.
*/
