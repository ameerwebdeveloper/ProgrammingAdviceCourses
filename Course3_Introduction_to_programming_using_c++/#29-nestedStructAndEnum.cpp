#include <iostream>
using namespace std;

// Lesson 29: Nested Structures and Enums (More Examples)

// Enum for colors
enum enColor { Red, Green, Yellow, Blue };

// Enum for gender
enum enGender { Male, Female };

// Enum for marital status
enum enMaritalStatus { Single, Married };


// Structure to represent an address
struct stAddress {
    string StreetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};


// Structure to represent contact information (includes address)
struct stContactInfo {
    string Phone;
    string Email;
    stAddress Address;
};


// Structure to represent a person (includes contact info, enums, etc.)
struct stPerson {
    string FirstName;
    string LastName;
    stContactInfo ContactInfo;
    enMaritalStatus MaritalStatus;
    enGender Gender;
    enColor FavouriteColor;
};


int main() {
    stPerson Person1;

    // Assigning values to Person1
    Person1.FirstName = "Ameer";
    Person1.LastName = "Mohammed";

    Person1.ContactInfo.Email = "test@email.com";
    Person1.ContactInfo.Phone = "+961000d000999";
    Person1.ContactInfo.Address.POBox = "24876";
    Person1.ContactInfo.Address.ZipCode = "11194";
    Person1.ContactInfo.Address.StreetName = "Muster Street";
    Person1.ContactInfo.Address.BuildingNo = "313";

    Person1.Gender = enGender::Male;
    Person1.MaritalStatus = enMaritalStatus::Single;
    Person1.FavouriteColor = enColor::Green;

    // Displaying stored values
    cout << Person1.FirstName << endl;
    cout << Person1.LastName << endl;
    cout << Person1.ContactInfo.Address.StreetName << endl;
    cout << Person1.ContactInfo.Address.BuildingNo << endl;
    cout << Person1.ContactInfo.Address.POBox << endl;
    cout << Person1.ContactInfo.Address.ZipCode << endl;
    cout << Person1.Gender << endl;          // Will print enum value (0 for Male, 1 for Female)
    cout << Person1.MaritalStatus << endl;   // Will print enum value (0 for Single, 1 for Married)
    cout << Person1.FavouriteColor << endl;  // Will print enum value (0=Red,1=Green,...)
    cout << "**************************************************" << endl;

    return 0;
}


/*
📘 Tutorial: Nested Structures and Enums in C++

In this example, we combine **structures** and **enums** to represent a person with detailed information.

1. **Enums**:
   - Enums give meaningful names to numeric values.
   - Example: `enGender { Male, Female }` → Male = 0, Female = 1.

2. **Nested Structures**:
   - Structures can contain other structures.
   - Example: `stContactInfo` contains `stAddress`.

3. **Usage**:
   - A `stPerson` struct holds personal info, contact details, and enum values.
   - Access is done using the dot operator (e.g., `Person1.ContactInfo.Address.ZipCode`).

4. **Enum Output**:
   - Printing enums directly shows their integer values.
   - To display text labels, you would need to implement a mapping function.

This approach is useful for modeling real-world entities such as a contact system, database entries, or user profiles.
*/
