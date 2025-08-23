#include <iostream>
using namespace std;

int main()
{

    //HW 12
    string name;
    int age;
    string city;
    string country;
    float salary;
    const int monthOfYear = 12;
    char gender;
    bool isMarried;

    cout << "Please enter your " << " Name: " << endl;
    cin >> name;
    cout << "Please enter your " << " age: " << endl;
    cin >> age;
    cout << "Please enter your " << " city: " << endl;
    cin >> city;
    cout << "Please enter your " << " country: " << endl;
    cin >> country;
    cout << "Please enter your " << " salary: " << endl;
    cin >> salary;
    cout << "Please enter your " << " gender m/f: " << endl;
    cin >> gender;
    cout << "Are you marrid 1/0." << endl;
    cin >> isMarried;


    float yearlySalary = monthOfYear * salary;

    cout << "**********************************************" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << country << endl;
    cout << "Mnthly Salary: " << salary << endl;
    cout << "Yearly salary: " << yearlySalary << endl;
    cout << "Gender: " << gender << endl;
    cout << "Marred: " << isMarried << endl;
    cout << "**********************************************" << endl;


    int firstValue;
    int secondValue;
    int thirdValue;

    cout << "please enter first value" << endl;
    cin >> firstValue;
    cout << "please enter second value" << endl;
    cin >> secondValue;
    cout << "please enter third value" << endl;
    cin >> thirdValue;

    int result = firstValue + secondValue + thirdValue;

    cout << firstValue << " +" << endl;
    cout << secondValue << " +" << endl;
    cout << thirdValue << endl;
    cout << "_________________________________________________________" << endl;
    cout << "Total = " << result << endl;


    //_____________________________________
    int yourAge;
    cout << "Please enter your age: " << endl;
    cin >> yourAge;

    int afterModifire = 5;
    int ageInFuture = yourAge + afterModifire;

    cout << "Your age after " << afterModifire << " years will eb " << ageInFuture << " years old." << endl;

    return 0;
}