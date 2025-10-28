// Homework: Procedures in C++
#include <iostream>
#include <string>
using namespace std;

// This procedure prints a decorative section with personal data
void printPersonalData() {
    cout << "***********************************************\n";
    cout << "Name    : Ameer Mohammed\n";
    cout << "Age     : 30\n";
    cout << "City    : Flensburg\n";
    cout << "Country : Germany\n";
    cout << "***********************************************\n\n";
}

// This procedure prints several lines of stars as a decorative separator
void printStars() {
    cout << "***********\n";
    cout << "***********\n";
    cout << "***********\n";
    cout << "***********\n\n";
}

// This procedure prints motivational text about programming goals
void printFutureGoal() {
    cout << "I love programming!\n\n";
    cout << "I promise to be the best developer ever!\n\n";
    cout << "I know it will take some time to practice, but I will achieve my goal.\n\n";
    cout << "Best regards,\n\n";
    cout << "Ameer Mohammed\n\n";
}

// This procedure prints the letter 'H' using asterisks
void printH() {
    cout << "*     *\n";
    cout << "*     *\n";
    cout << "*******\n";
    cout << "*     *\n";
    cout << "*     *\n";
}

int main() {
    // Call all procedures in sequence
    printPersonalData();
    printStars();
    printFutureGoal();
    printH();

    return 0;
}
