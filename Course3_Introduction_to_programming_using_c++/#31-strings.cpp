#include <iostream>
#include <string>
#include <limits> // for cin.ignore()
using namespace std;

// Strings are arrays of characters in C++.
// They can store and manipulate text, such as words or sentences.

int main() {

    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    // Accessing specific characters using their index positions
    cout << alphabet[0] << endl; // Output: A
    cout << alphabet[4] << endl; // Output: E

    // --------------------------------------------------------------
    // Example: String concatenation and numeric conversion
    // --------------------------------------------------------------
    string a = "100";
    string b = "200";

    // Concatenating two strings joins them as text
    string c = a + b;
    cout << c << endl; // Output: 100200 (concatenation, not arithmetic)

    // Convert strings to integers using stoi() for mathematical addition
    int d = stoi(a) + stoi(b);
    cout << d << endl; // Output: 300 (numeric addition)

    
    string fullName;
    cout << "Enter your full name: " << endl;

    cin >> fullName;
    cout << "You entered: " << fullName << endl;
    // Example: typing "Ameer Mustafa" stores only "Ameer"
    // Reason: cin stops reading when it encounters a space.

    // --------------------------------------------------------------
    // Correct way to read full sentences or names with spaces
    // --------------------------------------------------------------

    // Clear any leftover newline from the input buffer
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string fullNameTwo;
    cout << "Enter your full name again: " << endl;
    getline(cin, fullNameTwo); // Reads the entire line (spaces included)
    cout << "You entered: " << fullNameTwo << endl;

    return 0;
}

/*
-------------------------------------------------------
Tutorial: Working with Strings in C++
-------------------------------------------------------

1. **What is a String?**
   - A `std::string` is a sequence of characters that behaves like a dynamic array.
   - It allows text manipulation (e.g., names, sentences, data).

2. **Accessing Characters**
   - Each character can be accessed by its index, starting from 0.
     Example:
       string s = "HELLO";
       cout << s[1]; // prints 'E'

3. **Concatenation**
   - Using the `+` operator joins strings together.
       string a = "100";
       string b = "200";
       cout << a + b; // Output: 100200

4. **Converting Strings to Numbers**
   - Functions: `stoi()`, `stof()`, `stod()` convert strings to int, float, or double.
       Example:
         int num = stoi("123"); // num = 123

5. **Reading Input**
   - `cin >> str` reads up to the first space.
   - `getline(cin, str)` reads an entire line (spaces included).
   - If `cin` was used before `getline()`, always call `cin.ignore()` to clear leftover newline characters.

6. **Full Example Flow**
   - Input: "Ameer Mustafa"
     → `cin >>` → reads only `"Ameer"`
     → `getline(cin, ...)` → reads `"Ameer Mustafa"`

7. **Key Takeaway**
   - Use `getline()` for multi-word input (like names or sentences).
   - Use `stoi()` when you need to perform math with numeric strings.

-------------------------------------------------------
Output Example:
A
E
100200
300
Enter your full name:
Ameer Mustafa
You entered: Ameer
Enter your full name again:
Ameer Mustafa
You entered: Ameer Mustafa
-------------------------------------------------------
*/
