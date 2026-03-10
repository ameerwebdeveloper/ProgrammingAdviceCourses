#include <iostream>
#include <string>
using namespace std;

void ReadGrades(double grades[3]) {
    cout << "Please enter grade 1:" << endl;
    cin >> grades[0];

    cout << "Please enter grade 2:" << endl;
    cin >> grades[1];

    cout << "Please enter grade 3:" << endl;
    cin >> grades[2];
}

void PrintStars(double grades[3]) {
    cout << "You entered: " << grades[0] << "  " << grades[1] << "  " << grades[2] << endl;
    cout << "*****************************" << endl;
}

double BuildAverage(double grades[3]) {
    return (grades[0] + grades[1] + grades[2]) / 3.0;
}

void PrintResult(double average) {
    cout << "The average is " << average << endl;
}

int main() {
    double grades[3];
    double average;

    ReadGrades(grades);
    PrintStars(grades);
    average = BuildAverage(grades);
    PrintResult(average);

    return 0;
}