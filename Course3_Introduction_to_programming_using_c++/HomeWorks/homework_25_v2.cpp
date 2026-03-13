#include <iostream>
#include <string>
using namespace std;

struct person {
    string firstName;
    string lastName;
    int age;
    string phone;
};

void ReadPersons(person persons[2], int i) {
    cout << "Enter data for person " << (i + 1) << endl;
    cout << "Please enter first name:" << endl;
    cin >> persons[i].firstName;

    cout << "Please enter last:" << endl;
    cin >> persons[i].lastName;

    cout << "Please enter age:" << endl;
    cin >> persons[i].age;

    cout << "Please enter phone:" << endl;
    cin >> persons[i].phone;
}

void PrintStars() {
    cout << endl;
    cout << "*****************************" << endl;
}

void PrintPersons(person persons[2], int i) {
    cout << "Person " << (i + 1) << endl;

    cout << "firstName " << persons[i].firstName << endl;
    cout << "lastName " << persons[i].lastName << endl;
    cout << "Age " << persons[i].age << endl;
    cout << "phone " << persons[i].phone << endl;
}

int main() {
    person persons[2];

    ReadPersons(persons, 0);
    ReadPersons(persons, 1);
    PrintStars();
    PrintPersons(persons, 0);
    PrintStars();
    PrintPersons(persons, 1);

    return 0;
}