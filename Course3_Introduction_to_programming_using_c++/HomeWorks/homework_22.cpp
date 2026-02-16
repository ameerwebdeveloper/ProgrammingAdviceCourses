#include <iostream>
#include <string>
using namespace std;

struct personInfo {
    string firstName;
    string lastName;
    int age;
    string city;
    string country;
    double monthSalary;
    double yearlySalary;
    char gender;
    bool isMarried;
};

void readData(personInfo& info) {
    cout << "Insert first name: ";
    cin >> info.firstName;

    cout << "Insert last name: ";
    cin >> info.lastName;

    cout << "Insert age: ";
    cin >> info.age;

    cout << "Insert city: ";
    cin >> info.city;

    cout << "Insert country: ";
    cin >> info.country;

    cout << "Insert monthSalary: ";
    cin >> info.monthSalary;

    cout << "Insert yearlySalary: ";
    cin >> info.yearlySalary;

    cout << "Insert gender: ";
    cin >> info.gender;

    cout << "Insert isMarried: ";
    cin >> info.isMarried;
}

void printData(const personInfo& info) {
    cout << "----------------------------" << endl;
    cout << "First name: " << info.firstName << endl;
    cout << "Last name: " << info.lastName << endl;
    cout << "Age: " << info.age << endl;
    cout << "City: " << info.city << endl;
    cout << "Country: " << info.country << endl;
    cout << "Month Salary: " << info.monthSalary << endl;
    cout << "Yearly Salary: " << info.yearlySalary << endl;
    cout << "Gender: " << info.gender << endl;
    cout << "IsMarried: " << info.isMarried << endl;
}

void printStars() {
    cout << "******************************************************" << endl;
}

int main() {
    personInfo ameer;

    readData(ameer);
    printStars();
    printData(ameer);
    printStars();

    return 0;
}
