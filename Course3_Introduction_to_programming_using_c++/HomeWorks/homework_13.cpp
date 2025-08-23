#include <iostream>
using namespace std;

int main()
{

    //Change int to short
    string name = "Ameer Mohammed";
    short age = 30;
    string city = "Flensburg";
    string country = "Germany";
    float salary = 1000;
    const short monthOfYear = 12;
    float yearlySalary = monthOfYear * salary;
    char gender = 'M';
    bool isMarried = false;


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


    int firstValue = 20;
    int secondValue = 30;
    int thirdValue = 10;
    int result = firstValue + secondValue + thirdValue;

    cout << firstValue << " +" << endl;
    cout << secondValue << " +" << endl;
    cout << thirdValue << endl;
    cout << "_________________________________________________________" << endl;
    cout << "Total = " << result << endl;


    //_____________________________________
    short yourAge = 25;
    int afterModifire = 5;
    int ageInFuture = yourAge + afterModifire;

    cout << "Your age after " << afterModifire << " years will eb " << ageInFuture << " years old." << endl;

    return 0;
}