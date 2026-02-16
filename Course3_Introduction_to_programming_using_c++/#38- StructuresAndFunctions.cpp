#include <iostream>
#include <string>
using namespace std;

struct personInfo {
    string firstName;
    string lastName;
    int age;
};

void readData(personInfo &info) {
    cout << "Insert first name: ";
    cin >> info.firstName;

    cout << "Insert last name: ";
    cin >> info.lastName;

    cout << "Insert age: ";
    cin >> info.age;
}

void printData(const personInfo &info) {
    cout << "----------------------------" << endl;
    cout << "First name: " << info.firstName << endl;
    cout << "Last name: " << info.lastName << endl;
    cout << "Age: " << info.age << endl;
}

int main() {
    personInfo ameer, ahmed;

    readData(ameer);
    printData(ameer);

    readData(ahmed);
    printData(ahmed);

    return 0;
}
