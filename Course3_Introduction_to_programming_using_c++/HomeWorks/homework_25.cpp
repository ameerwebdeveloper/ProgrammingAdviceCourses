#include <iostream>
#include <string>
using namespace std;

struct personStr {
    string firstName;
    string lastName;
    int age;
    string phone;
};
void PrintStars() {
    cout << endl;
    cout << "*****************************" << endl;
}
void ReadPerson(personStr& person) {
    cout << "Please enter first name:" << endl;
    cin >> person.firstName;

    cout << "Please enter last:" << endl;
    cin >> person.lastName;

    cout << "Please enter age:" << endl;
    cin >> person.age;

    cout << "Please enter phone:" << endl;
    cin >> person.phone;
}

void ReadAllPersons(personStr persons[2]) {
    PrintStars();
    cout << "Enter data for person 1 " << endl;
    ReadPerson(persons[0]);
    PrintStars();
    cout << "Enter data for person 2 " << endl;
    ReadPerson(persons[1]);
    PrintStars();

}


void PrintPerson(personStr person) {
    cout << "firstName " << person.firstName << endl;
    cout << "lastName " << person.lastName << endl;
    cout << "Age " << person.age << endl;
    cout << "phone " << person.phone << endl;
}
void PrintAllPersons(personStr persons[2]) {
    PrintStars();
    PrintPerson(persons[0]);
    PrintStars();
    PrintPerson(persons[1]);

}
int main() {
    personStr persons[2];
    ReadAllPersons(persons);
    PrintAllPersons(persons);
    return 0;
}