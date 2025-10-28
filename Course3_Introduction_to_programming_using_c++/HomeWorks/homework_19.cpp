// Homework: String Input and Conversion Example

#include <iostream>
#include <string>
using namespace std;

int main() {

    string fullName;
    string stringOne;
    string stringTwo;

    cout << "Enter your full name: " << endl;
    getline(cin, fullName);

    cout << "Enter number 1: ";
    cin >> stringOne;

    cout << "Enter number 2: ";
    cin >> stringTwo;

    cout << "******************************" << endl;

    cout << "Your full name: " << fullName << endl;
    cout << "string length is : " << fullName.length() << endl;
    cout << "Concatenation of strings: " << stringOne + stringTwo << endl;
    cout << "Sum after conversion: " << stoi(stringOne) + stoi(stringTwo) << endl;

    return 0;
}
