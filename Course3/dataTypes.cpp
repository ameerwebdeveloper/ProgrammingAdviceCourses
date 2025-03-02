#include <iostream>
#include <climits> // For CHAR_MIN and CHAR_MAX
#include <cfloat>  // For numerical limits of floating-point numbers

using namespace std;

int main()
{
    // Floating-point number in scientific notation
    double distance = 56E12;  // 56 * 10^12
    cout << "Distance: " << distance << " meters" << endl;

    // Example of values out of valid range
    short d = 3434233;  // ERROR! Out of range (only some compilers report an error)
    cout << "Short Value (out of range): " << d << endl;

    unsigned int a = -10;  // ERROR! Unsigned can only store positive numbers
    cout << "Unsigned Int (invalid negative value): " << a << endl;

    // Output the size of different data types
    cout << "\n===== Data Type Sizes in Bytes =====" << endl;
    cout << "bool:          " << sizeof(bool) << " bytes" << endl;
    cout << "char:          " << sizeof(char) << " bytes" << endl;
    cout << "short int:     " << sizeof(short int) << " bytes" << endl;
    cout << "int:           " << sizeof(int) << " bytes" << endl;
    cout << "long:          " << sizeof(long) << " bytes" << endl;
    cout << "long long:     " << sizeof(long long) << " bytes" << endl;
    cout << "unsigned int:  " << sizeof(unsigned int) << " bytes" << endl;
    cout << "unsigned long: " << sizeof(unsigned long) << " bytes" << endl;
    cout << "float:         " << sizeof(float) << " bytes" << endl;
    cout << "double:        " << sizeof(double) << " bytes" << endl;
    cout << "=====================================" << endl;

    // Output the value ranges of data types
    cout << "\n===== Value Ranges of Data Types =====" << endl;
    cout << "char:              (" << CHAR_MIN << " , " << CHAR_MAX << ")" << endl;
    cout << "short:             (" << SHRT_MIN << " , " << SHRT_MAX << ")" << endl;
    cout << "int:               (" << INT_MIN << " , " << INT_MAX << ")" << endl;
    cout << "long:              (" << LONG_MIN << " , " << LONG_MAX << ")" << endl;
    cout << "long long:         (" << LLONG_MIN << " , " << LLONG_MAX << ")" << endl;
    cout << "unsigned char:     (0 , " << UCHAR_MAX << ")" << endl;
    cout << "unsigned short:    (0 , " << USHRT_MAX << ")" << endl;
    cout << "unsigned int:      (0 , " << UINT_MAX << ")" << endl;
    cout << "unsigned long:     (0 , " << ULONG_MAX << ")" << endl;
    cout << "unsigned long long:(0 , " << ULLONG_MAX << ")" << endl;
    cout << "float:             (" << FLT_MIN << " , " << FLT_MAX << ")" << endl;
    cout << "double:            (" << DBL_MIN << " , " << DBL_MAX << ")" << endl;
    cout << "=========================================" << endl;

    return 0;
}
