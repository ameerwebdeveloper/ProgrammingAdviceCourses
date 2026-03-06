#include <iostream>
#include <string>
using namespace std;

int main() {

    float grades[3];
    double average;

    cout << "Please enter grade 1:" << endl;
    cin >> grades[0];

    cout << "Please enter grade 2:" << endl;
    cin >> grades[1];

    cout << "Please enter grade 3:" << endl;
    cin >> grades[2];

    cout << "*****************************" << endl;
    cout << "You entered: " << grades[0] << "  " << grades[1] << "  " << grades[2] << endl;

    average = (grades[0] + grades[1] + grades[2]) / 3.0;

    cout << "The average is " << average << endl;

    return 0;
}