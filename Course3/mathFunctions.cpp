#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// Math functions

	double x = 64;

	// Square root
	cout << x << " square root is " << sqrt(x) << endl;
	cout << 50 << " square root is " << sqrt(50) << endl;
	cout << "---------------------------------" << endl;

	// Round
	cout << " round of 2.3  ---> " << round(2.3) << endl;
	cout << " round of 2.5  ---> " << round(2.5) << endl;
	cout << " round of 2.7  ---> " << round(2.7) << endl;
	cout << " square root of 50, then round  ---> " << round(sqrt(50)) << endl;

	// Ceil and Floor
	cout << "---------------------------------" << endl;
	cout << "ceiling value of 2.9 --> " << ceil(2.9) << endl;
	cout << "floor value of 2.9 --> " << floor(2.9) << endl;
	cout << "ceiling value of -2.9 --> " << ceil(-2.9) << endl;
	cout << "floor value of -2.9 --> " << floor(-2.9) << endl;
	cout << "ceiling value of 2.1 --> " << ceil(2.1) << endl;

	// Power
	cout << "---------------------------------" << endl;
	int y = 4;
	x = 2;
	cout << "power value: x^y = (2^4): " << pow(x, y) << endl;
	cout << "power value: x^y = (4^3): " << pow(4, 3) << endl;

	// Absolute value
	cout << "---------------------------------" << endl;
	cout << "absolute of -10 ---> " << abs(-10) << endl;
	cout << "absolute of 10  ---> " << abs(10) << endl;

	/*
	Output Explanation:

	Square root:
	64 square root is 8                 // sqrt(64) = 8
	50 square root is 7.07107           // sqrt(50) ≈ 7.07107

	Rounding:
	round of 2.3  ---> 2                // rounds down
	round of 2.5  ---> 2                // ties go to even (bankers' rounding)
	round of 2.7  ---> 3                // rounds up
	square root of 50, then round ---> 7  // round(7.07107) = 7

	Ceiling and Floor:
	ceiling value of 2.9 --> 3          // next higher integer
	floor value of 2.9 --> 2            // next lower integer
	ceiling value of -2.9 --> -2        // towards zero
	floor value of -2.9 --> -3          // away from zero
	ceiling value of 2.1 --> 3          // next higher integer

	Power:
	power value: x^y = (2^4): 16        // 2 to the power 4
	power value: x^y = (4^3): 64        // 4 to the power 3

	Absolute:
	absolute of -10 ---> 10            // distance from zero
	absolute of 10  ---> 10
	*/

	return 0;
}
