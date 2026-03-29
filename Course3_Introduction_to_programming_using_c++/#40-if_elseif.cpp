#include <iostream>
#include <string>
using namespace std;

int main() {

    // Store the current time in 24-hour format
    int time = 22;

    // Check if the time is in the morning
    if (time <= 10) {
        cout << "Good morning" << endl;
    }
    // Check if the time is in the afternoon
    else if (time <= 18) {
        cout << "Good afternoon" << endl;
    }
    // Otherwise, it is evening/night
    else {
        cout << "Good night" << endl;
    }

    return 0;
}