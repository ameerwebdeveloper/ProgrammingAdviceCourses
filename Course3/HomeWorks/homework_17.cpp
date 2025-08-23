#include <iostream>

using namespace std;

// Simple program to collect user data and print a formatted visit card.
// Demonstrates nested structs, basic console I/O, and simple formatting.

struct Address {
    string street;
    string plz;   // postal code (PLZ)
    string city;
};

struct ContactInfo {
    string phone;
    string email;
};

struct VisitCard {
    string name;
    int age;
    Address address;
    ContactInfo contact;
    bool isMarried;
    char gender; // 'M' or 'F'
};

int main() {
    VisitCard card;

    cout << "Welcome to the visit card creator!" << endl;

    cout << "Enter your name: " << endl;
    cin >> card.name;

    cout << "Enter your age: " << endl;
    cin >> card.age;

    cout << "Enter your street: " << endl;
    cin >> card.address.street;

    cout << "Enter your PLZ (postal code): " << endl;
    cin >> card.address.plz;

    cout << "Enter your city: " << endl;
    cin >> card.address.city;

    cout << "Enter your phone: " << endl;
    cin >> card.contact.phone;

    cout << "Enter your email: " << endl;
    cin >> card.contact.email;

    cout << "Are you married? (1 = yes, 0 = no): " << endl;
    cin >> card.isMarried;

    cout << "What is your gender? (M or F): " << endl;
    cin >> card.gender;

    cout << endl;
    cout << "******************* VISIT CARD *******************" << endl;
    cout << "Name:        " << card.name << endl;
    cout << "Age:         " << card.age << endl;
    cout << "Address:     " << card.address.street << ", " << card.address.plz << " " << card.address.city << endl;
    cout << "Phone:       " << card.contact.phone << endl;
    cout << "Email:       " << card.contact.email << endl;
    cout << "Married:     " << (card.isMarried ? "Yes" : "No") << endl;
    cout << "Gender:      " << card.gender << endl;
    cout << "**************************************************" << endl;

    return 0;
}
